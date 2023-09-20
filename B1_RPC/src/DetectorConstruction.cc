//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
/// \file B1/src/DetectorConstruction.cc
/// \brief Implementation of the B1::DetectorConstruction class

#include "DetectorConstruction.hh"

#include "G4RunManager.hh"
#include "G4NistManager.hh"
#include "G4Box.hh"
#include "G4Cons.hh"
#include "G4Orb.hh"
#include "G4Sphere.hh"
#include "G4Trd.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4SystemOfUnits.hh"
#include "G4Polyhedra.hh"

namespace B1
{

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4VPhysicalVolume* DetectorConstruction::Construct()
{
  // Get nist material manager
  G4NistManager* nist = G4NistManager::Instance();

  // Envelope parameters
  //
  G4double env_sizeXY = 30*cm, env_sizeZ = 50*cm;
  G4Material* env_mat = nist->FindOrBuildMaterial("G4_Galactic");

  // Option to switch on/off checking of volumes overlaps
  //
  G4bool checkOverlaps = true;

  //
  // World
  //
  G4double world_sizeXY = 1.2*env_sizeXY;
  G4double world_sizeZ  = 1.2*env_sizeZ;
  G4Material* world_mat = nist->FindOrBuildMaterial("G4_Galactic");

  auto solidWorld = new G4Box("World",                           // its name
    0.5 * world_sizeXY, 0.5 * world_sizeXY, 0.5 * world_sizeZ);  // its size

  auto logicWorld = new G4LogicalVolume(solidWorld,  // its solid
    world_mat,                                       // its material
    "World");                                        // its name

  auto physWorld = new G4PVPlacement(nullptr,  // no rotation
    G4ThreeVector(),                           // at (0,0,0)
    logicWorld,                                // its logical volume
    "World",                                   // its name
    nullptr,                                   // its mother  volume
    false,                                     // no boolean operation
    0,                                         // copy number
    checkOverlaps);                            // overlaps checking
  
  //
  // Envelope
  //
  auto solidEnv = new G4Box("Envelope",                    // its name
    0.5 * env_sizeXY, 0.5 * env_sizeXY, 0.5 * env_sizeZ);  // its size

  auto logicEnv = new G4LogicalVolume(solidEnv,  // its solid
    env_mat,                                     // its material
    "Envelope");                                 // its name

  new G4PVPlacement(nullptr,  // no rotation
    G4ThreeVector(),          // at (0,0,0)
    logicEnv,                 // its logical volume
    "Envelope",               // its name
    logicWorld,               // its mother  volume
    false,                    // no boolean operation
    0,                        // copy number
    checkOverlaps);           // overlaps checking



  
  //Shape1  Cu
  G4double shape1_Z,shape1_M,shape1_density;
  G4String shape1_name;
  shape1_density = 8.96*g/cm3;
  shape1_M = 63.546*g/mole;
  G4Material *shape1_mat = new G4Material(shape1_name = "Shape1_Cu",shape1_Z = 29,shape1_M,shape1_density);
  G4double zPosition = 50.0*mm;
  G4double zGap = 1.0*mm;
  G4ThreeVector pos1 = G4ThreeVector(0,0,zPosition);

  G4double shape1_x=20*cm,shape1_y=10*cm,shape1_z=0.035*mm;
  auto solidShape1 = new G4Box("Shape1_solid",0.5 * shape1_x,0.5 * shape1_y,0.5 * shape1_z);
  auto logicShape1 = new G4LogicalVolume(solidShape1,shape1_mat,"Shape1_logic");
  new G4PVPlacement(nullptr,pos1,logicShape1,"Shape1_Env",logicEnv,false,0,checkOverlaps);

  //Shape2 FR4
  G4Element* shape2_elC = new G4Element("Carbon", "C", 6, 12.011 * g/mole);
  G4Element* shape2_elH = new G4Element("Hydrogen", "H", 1, 1.008 * g/mole);
  G4Element* shape2_elO = new G4Element("Oxygen", "O", 8, 15.999 * g/mole);
  G4Element* shape2_elSi = new G4Element("Silicon", "Si", 14, 28.086 * g/mole);
  G4double shape2_density = 1.850 * g/cm3;
  G4Material* shape2_mat = new G4Material("Shape2_FR4", shape2_density, 4);
  shape2_mat->AddElement(shape2_elC, 47*perCent); // 47% Carbon
  shape2_mat->AddElement(shape2_elH, 8*perCent); // 8% Hydrogen
  shape2_mat->AddElement(shape2_elO, 27*perCent); // 27% Oxygen
  shape2_mat->AddElement(shape2_elSi,18*perCent); // 18% Silicon
  //zPosition += (shape1_z+shape2_z)/2+1;
  //G4ThreeVector pos2 = G4ThreeVector(0,0,zPosition);
  G4double shape2_x=20*cm,shape2_y=10*cm,shape2_z=0.4*mm;
  zPosition += (shape1_z+shape2_z)/2.0+zGap;
  G4ThreeVector pos2 = G4ThreeVector(0,0,zPosition);
  auto solidShape2 = new G4Box("Shape2_solid",0.5*shape2_x,0.5*shape2_y,0.5*shape2_z);
  auto logicShape2 = new G4LogicalVolume(solidShape2,shape2_mat,"Shape2_logic");
  new G4PVPlacement(nullptr,pos2,logicShape2,"Shape2_Env",logicEnv,false,0,checkOverlaps);
  

  //Paper
  zPosition += 3*mm;

  //Shape3 FR4
  G4Element* shape3_elC = new G4Element("Carbon", "C", 6, 12.011 * g/mole);
  G4Element* shape3_elH = new G4Element("Hydrogen", "H", 1, 1.008 * g/mole);
  G4Element* shape3_elO = new G4Element("Oxygen", "O", 8, 15.999 * g/mole);
  G4Element* shape3_elSi = new G4Element("Silicon", "Si", 14, 28.086 * g/mole);
  G4double shape3_density = 1.850 * g/cm3;
  G4Material* shape3_mat = new G4Material("Shape3_FR4", shape3_density, 4);
  shape3_mat->AddElement(shape3_elC, 47*perCent); // 47% Carbon
  shape3_mat->AddElement(shape3_elH, 8*perCent); // 8% Hydrogen
  shape3_mat->AddElement(shape3_elO, 27*perCent); // 27% Oxygen
  shape3_mat->AddElement(shape3_elSi,18*perCent); // 18% Silicon
  G4double shape3_x=20*cm,shape3_y=10*cm,shape3_z=0.4*mm;
  zPosition += (shape2_z+shape3_z)/2.0+zGap;
  G4ThreeVector pos3 = G4ThreeVector(0,0,zPosition);
  auto solidShape3 = new G4Box("Shape3_solid",0.5*shape3_x,0.5*shape3_y,0.5*shape3_z);
  auto logicShape3 = new G4LogicalVolume(solidShape2,shape2_mat,"Shape2_logic");
  new G4PVPlacement(nullptr,pos3,logicShape3,"Shape3_Env",logicEnv,false,0,checkOverlaps);

  //Shape4 Cu
  G4double shape4_Z,shape4_M,shape4_density;
  G4String shape4_name;
  shape4_density = 8.96*g/cm3;
  shape4_M = 63.546*g/mole;
  G4Material *shape4_mat = new G4Material(shape4_name = "Shape4_Cu",shape4_Z = 29,shape4_M,shape4_density);
  G4double shape4_x=20*cm,shape4_y=10*cm,shape4_z=0.035*mm;
  zPosition += (shape3_z+shape4_z)/2.0+zGap;
  G4ThreeVector pos4 = G4ThreeVector(0,0,zPosition);
  auto solidShape4 = new G4Box("Shape4_solid",0.5 * shape4_x,0.5 * shape4_y,0.5 * shape4_z);
  auto logicShape4 = new G4LogicalVolume(solidShape4,shape4_mat,"Shape4_logic");
  new G4PVPlacement(nullptr,pos4,logicShape4,"Shape4_Env",logicEnv,false,0,checkOverlaps);

  //Shape5 PET
  G4Element* shape5_elC = new G4Element("Carbon","C",6,12.011 * g/mole);
  G4Element* shape5_elH = new G4Element("Hydrogen","H",1,1.008 * g/mole);
  G4Element* shape5_elO = new G4Element("Oxygen","O",8,15.999 * g/mole);
  G4double shape5_density = 1.370 * g/cm3;
  G4Material* shape5_mat = new G4Material("Shape5_PET",shape5_density,3);
  shape5_mat->AddElement(shape5_elC,62.5*perCent);
  shape5_mat->AddElement(shape5_elC,26.7*perCent);
  shape5_mat->AddElement(shape5_elC,10.8*perCent);
  G4double shape5_x = 20*cm,shape5_y = 10*cm,shape5_z = 0.1*mm;
  zPosition += (shape4_z+shape5_z)/2.0+zGap;
  G4ThreeVector pos5 = G4ThreeVector(0,0,zPosition);
  auto solidShape5 = new G4Box("Shape5_solid",0.5*shape5_x,0.5*shape5_y,0.5*shape5_z);
  auto logicShape5 = new G4LogicalVolume(solidShape5,shape5_mat,"Shape5_logic");
  new G4PVPlacement(nullptr,pos5,logicShape5,"Shape5_Env",logicEnv,false,0,checkOverlaps);


  //C
  zPosition += 0.0000001*mm;

  //Shape6 glass
  G4double shape6_Z,shape6_A,shape6_density;
  G4String shape6_name,shape6_symbol;
  G4int shape6_ncomponents, shape6_natoms;
  shape6_A = 28.085*g/mole;
  G4Element* elSi = new G4Element(shape6_name="Silicon",shape6_symbol="Si" , shape6_Z=14, shape6_A);
  shape6_A = 15.999*g/mole;
  G4Element* elO = new G4Element(shape6_name="Oxygen",shape6_symbol="O",shape6_Z=8,shape6_A);
  shape6_density = 2.8*g/cm3;
  G4Material* shape6_mat = new G4Material("Shape6_Glass",shape6_density,shape6_ncomponents=2);
  shape6_mat->AddElement(elSi,shape6_natoms=1);
  shape6_mat->AddElement(elO,shape6_natoms=2);
  G4double shape6_x=20*cm,shape6_y=10*cm,shape6_z=1.1*mm;
  zPosition += (shape5_z+shape6_z)/2.0+zGap;
  G4ThreeVector pos6 = G4ThreeVector(0,0,zPosition);
  auto solidShape6 = new G4Box("Shape6_solid",0.5 * shape6_x,0.5 * shape6_y,0.5 * shape6_z);
  auto logicShape6 = new G4LogicalVolume(solidShape6,shape6_mat,"Shape6_logic");
  new G4PVPlacement(nullptr,pos6,logicShape6,"Shape6_Env",logicEnv,false,0,checkOverlaps);


  //Shape7 Gap
  G4double shape7_isobutane_density = 2.51 * g/cm3;
  G4Element* shape7_elC = nist->FindOrBuildElement("C");
  G4Element* shape7_elH = nist->FindOrBuildElement("H");
  G4Material* shape7_isobutane = new G4Material("shape7_isobutane", shape7_isobutane_density, 2);
  shape7_isobutane->AddElement(shape7_elC, 4); 
  shape7_isobutane->AddElement(shape7_elH, 10);

  G4double shape7_SF6_density = 0.006164 * g/cm3;
  G4Element* shape7_elS = new G4Element("Sulfur", "S", 16, 32.06 * g/mole);
  G4Element* shape7_elF = new G4Element("Fluorine", "F", 9, 18.998 * g/mole);
  G4Material* shape7_SF6 = new G4Material("shape7_SF6", shape7_SF6_density, 2);
  shape7_SF6->AddElement(shape7_elS, 1);
  shape7_SF6->AddElement(shape7_elF, 6);

  G4Material* shape7_freon = nist->FindOrBuildMaterial("G4_FREON-12");

  G4double shape7_mat_density = 1 * g/cm3;
  G4Material* shape7_mat = new G4Material("GasMixture", shape7_mat_density, 3);
  shape7_mat->AddMaterial(shape7_freon,94.7*perCent);
  shape7_mat->AddMaterial(shape7_isobutane,5*perCent);
  shape7_mat->AddMaterial(shape7_SF6,0.3*perCent);
  
  G4double shape7_x = 20*cm,shape7_y = 10*cm,shape7_z = 1*mm;
  zPosition += (shape6_z+shape7_z)/2.0+zGap;
  G4ThreeVector pos7 = G4ThreeVector(0,0,zPosition);
  auto solidShape7 = new G4Box("Shape7_solid",0.5*shape7_x,0.5*shape7_y,0.5*shape7_z);
  auto logicShape7 = new G4LogicalVolume(solidShape7,shape7_mat,"Shape7_logic");
  new G4PVPlacement(nullptr,pos7,logicShape7,"Shape7_Env",logicEnv,false,0,checkOverlaps);


  //Shape8 glass
  G4double shape8_Z,shape8_A,shape8_density;
  G4String shape8_name,shape8_symbol;
  G4int shape8_ncomponents, shape8_natoms;
  shape8_A = 28.085*g/mole;
  //G4Element* elSi = new G4Element(shape8_name="Silicon",shape8_symbol="Si" , shape8_Z=14, shape6_A);
  shape8_A = 15.999*g/mole;
  //G4Element* elO = new G4Element(shape8_name="Oxygen",shape8_symbol="O",shape8_Z=8,shape8_A);
  shape8_density = 2.8*g/cm3;
  G4Material* shape8_mat = new G4Material("Shape8_Glass",shape8_density,shape8_ncomponents=2);
  shape8_mat->AddElement(elSi,shape8_natoms=1);
  shape8_mat->AddElement(elO,shape8_natoms=2);
  G4double shape8_x=20*cm,shape8_y=10*cm,shape8_z=1.1*mm;
  zPosition += (shape7_z+shape8_z)/2.0+zGap;
  G4ThreeVector pos8 = G4ThreeVector(0,0,zPosition);
  auto solidShape8 = new G4Box("Shape8_solid",0.5 * shape8_x,0.5 * shape8_y,0.5 * shape8_z);
  auto logicShape8 = new G4LogicalVolume(solidShape8,shape8_mat,"Shape8_logic");
  new G4PVPlacement(nullptr,pos8,logicShape8,"Shape8_Env",logicEnv,false,0,checkOverlaps);


  //C
  zPosition += 0.0000001*mm;

  //Shape9 PET

  G4Element* shape9_elC = new G4Element("Carbon","C",6,12.011 * g/mole);
  G4Element* shape9_elH = new G4Element("Hydrogen","H",1,1.008 * g/mole);
  G4Element* shape9_elO = new G4Element("Oxygen","O",8,15.999 * g/mole);
  G4double shape9_density = 1.370 * g/cm3;
  G4Material* shape9_mat = new G4Material("Shape9_PET",shape9_density,3);
  shape9_mat->AddElement(shape9_elC,62.5*perCent);
  shape9_mat->AddElement(shape9_elC,26.7*perCent);
  shape9_mat->AddElement(shape9_elC,10.8*perCent);
  G4double shape9_x = 20*cm,shape9_y = 10*cm,shape9_z = 0.1*mm;
  zPosition += (shape8_z+shape9_z)/2.0+zGap;
  G4ThreeVector pos9 = G4ThreeVector(0,0,zPosition);
  auto solidShape9 = new G4Box("Shape9_solid",0.5*shape9_x,0.5*shape9_y,0.5*shape9_z);
  auto logicShape9 = new G4LogicalVolume(solidShape9,shape9_mat,"Shape9_logic");
  new G4PVPlacement(nullptr,pos9,logicShape9,"Shape9_Env",logicEnv,false,0,checkOverlaps);


  //Shape10 Cu

  G4double shape10_Z,shape10_M,shape10_density;
  G4String shape10_name;
  shape10_density = 8.96*g/cm3;
  shape10_M = 63.546*g/mole;
  G4Material *shape10_mat = new G4Material(shape10_name = "Shape10_Cu",shape10_Z = 29,shape10_M,shape10_density);
  G4double shape10_x=20*cm,shape10_y=10*cm,shape10_z=0.035*mm;
  zPosition += (shape9_z+shape10_z)/2.0+zGap;
  G4ThreeVector pos10 = G4ThreeVector(0,0,zPosition);
  auto solidShape10 = new G4Box("Shape10_solid",0.5 * shape10_x,0.5 * shape10_y,0.5 * shape10_z);
  auto logicShape10 = new G4LogicalVolume(solidShape10,shape10_mat,"Shape10_logic");
  new G4PVPlacement(nullptr,pos10,logicShape10,"Shape10_Env",logicEnv,false,0,checkOverlaps);






  //Shape11 FR4
  G4Element* shape11_elC = new G4Element("Carbon", "C", 6, 12.011 * g/mole);
  G4Element* shape11_elH = new G4Element("Hydrogen", "H", 1, 1.008 * g/mole);
  G4Element* shape11_elO = new G4Element("Oxygen", "O", 8, 15.999 * g/mole);
  G4Element* shape11_elSi = new G4Element("Silicon", "Si", 14, 28.086 * g/mole);
  G4double shape11_density = 1.850 * g/cm3;
  G4Material* shape11_mat = new G4Material("Shape11_FR4", shape11_density, 4);
  shape11_mat->AddElement(shape11_elC, 47*perCent); // 47% Carbon
  shape11_mat->AddElement(shape11_elH, 8*perCent); // 8% Hydrogen
  shape11_mat->AddElement(shape11_elO, 27*perCent); // 27% Oxygen
  shape11_mat->AddElement(shape11_elSi,18*perCent); // 18% Silicon
  //zPosition += (shape1_z+shape11_z)/2+1;
  //G4ThreeVector pos2 = G4ThreeVector(0,0,zPosition);
  G4double shape11_x=20*cm,shape11_y=10*cm,shape11_z=0.4*mm;
  zPosition += (shape10_z+shape11_z)/2.0+zGap;
  G4ThreeVector pos11 = G4ThreeVector(0,0,zPosition);
  auto solidShape11 = new G4Box("Shape11_solid",0.5*shape11_x,0.5*shape11_y,0.5*shape11_z);
  auto logicShape11 = new G4LogicalVolume(solidShape11,shape11_mat,"Shape11_logic");
  new G4PVPlacement(nullptr,pos11,logicShape11,"Shape11_Env",logicEnv,false,0,checkOverlaps);
  

  //Paper
  zPosition += 3*mm;

  //Shape12 FR4
  G4Element* shape12_elC = new G4Element("Carbon", "C", 6, 12.011 * g/mole);
  G4Element* shape12_elH = new G4Element("Hydrogen", "H", 1, 1.008 * g/mole);
  G4Element* shape12_elO = new G4Element("Oxygen", "O", 8, 15.999 * g/mole);
  G4Element* shape12_elSi = new G4Element("Silicon", "Si", 14, 28.086 * g/mole);
  G4double shape12_density = 1.850 * g/cm3;
  G4Material* shape12_mat = new G4Material("Shape12_FR4", shape12_density, 4);
  shape12_mat->AddElement(shape12_elC, 47*perCent); // 47% Carbon
  shape12_mat->AddElement(shape12_elH, 8*perCent); // 8% Hydrogen
  shape12_mat->AddElement(shape12_elO, 27*perCent); // 27% Oxygen
  shape12_mat->AddElement(shape12_elSi,18*perCent); // 18% Silicon
  G4double shape12_x=20*cm,shape12_y=10*cm,shape12_z=0.4*mm;
  zPosition += (shape11_z+shape12_z)/2.0+zGap;
  G4ThreeVector pos12 = G4ThreeVector(0,0,zPosition);
  auto solidShape12 = new G4Box("Shape12_solid",0.5*shape12_x,0.5*shape12_y,0.5*shape12_z);
  auto logicShape12 = new G4LogicalVolume(solidShape11,shape11_mat,"Shape11_logic");
  new G4PVPlacement(nullptr,pos12,logicShape12,"Shape12_Env",logicEnv,false,0,checkOverlaps);



  //Shape13 Cu

  G4double shape13_Z,shape13_M,shape13_density;
  G4String shape13_name;
  shape13_density = 8.96*g/cm3;
  shape13_M = 63.546*g/mole;
  G4Material *shape13_mat = new G4Material(shape13_name = "Shape13_Cu",shape13_Z = 29,shape13_M,shape13_density);
  G4double shape13_x=20*cm,shape13_y=10*cm,shape13_z=0.035*mm;
  zPosition += (shape12_z+shape13_z)/2.0+zGap;
  G4ThreeVector pos13 = G4ThreeVector(0,0,zPosition);
  auto solidShape13 = new G4Box("Shape13_solid",0.5 * shape13_x,0.5 * shape13_y,0.5 * shape13_z);
  auto logicShape13 = new G4LogicalVolume(solidShape13,shape13_mat,"Shape13_logic");
  new G4PVPlacement(nullptr,pos13,logicShape13,"Shape13_Env",logicEnv,false,0,checkOverlaps);
  //always return the physical World
  //
  return physWorld;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

}
