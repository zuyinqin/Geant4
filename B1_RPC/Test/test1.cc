


G4double density;
//method 1
density = 1.05*mg/cm3;
G4Material* water1 = new G4Material("Water_1.05",density,"G4_WATER");

//method 2
density = 1.03*mg/cm3;
G4NistManager* man = G4NistManager::Instance();
G4Material* water2 = man->BuildMaterialWithNewDensity("Water_1.03","G4_WATER",density);


//cuboid
G4double world_hx = 3.0*m;
G4double world_hy = 1.0*m;
G4double world_hz = 1.0*m;
G4Box* worldBox = new G4Box("WorldBox",world_hx,world_hy,world_hz);
G4Box* envBox = new G4Box("environmentBox",world_hx/2,world_hy/2,world_hz/2);

//LogicalVolume
G4LogicalVolume* worldLog = new G4LogicalVolume(worldBox,Air,"WorldLog");
G4LogicalVolume* envLog = new G4LogicalVolume(envBox,H2O,"environmentLog");


//PhysicalVolume
bool checkoverlaps = true;
G4PhysicalVolume* physWorld = G4PVPlacement(0,G4ThreeVector(),worldLog,"physworld",0,false,0,checkoverlaps);
G4PhysicalVolume* physenv = new G4PVPlacement (0,G4ThreeVector(),envLog,"physenvironment",worldLog,false,0,checkoverlaps);



