#include <TText.h>
void exc()
{
    std::ifstream in;
    in.open("depo_shape1_allaverage.txt");
    TGraph *graph1 = new TGraph();
    TGraph *graph2 = new TGraph();
    TCanvas *canvas = new TCanvas("canvas", "Modify TGraph Example", 800, 600);
    TFile* f1 = new TFile("e.root","recreate");

    char a[10],b[10],c[20];
    std::string name;
    double energy;
    double depo;
    int num1 = 0,num2 = 0;
    int i = 0;

    TTree *t1 = new TTree("e-","MeV");
    t1->Branch("name",&name,"name/C");
    t1->Branch("energy",&energy,"energy/D");
    t1->Branch("depo",&depo,"depo/D");

    TTree *t2 = new TTree("mu-","MeV");
    t2->Branch("name",&name,"name/C");
    t2->Branch("energy",&energy,"energy/D");
    t2->Branch("depo",&depo,"depo/D");



    while(1)
    {
        in>>a>>name>>b>>energy>>c>>depo;
        depo = 10.*depo;
        if(in.eof())
            break;
        i++;
        if(name=="e-")
        {
            graph1->SetPoint(num1, energy, depo);
            num1++;
            t1->Fill();
        }
        else if(name=="mu-")
        {
            graph2->SetPoint(num2, energy, depo);
            num2++;
            t2->Fill();
        }
    }
    graph1->SetLineColor(2);
    graph1->SetMarkerColor(3);
    graph1->SetMarkerStyle(21);
    graph1->Draw("ACP");

    graph2->SetLineColor(4);
    graph2->SetMarkerColor(1);
    graph2->SetMarkerStyle(24);
    graph2->Draw("CPsame");


    gPad->SetLogx();
    graph1->GetXaxis()->SetTitle("X-MeV");
    graph1->GetXaxis()->SetLimits(0.01, 1000);
    graph1->GetYaxis()->SetTitle("Y-(MeV/cm)");
    graph1->GetYaxis()->SetRangeUser(0, 0.07);
    graph1->GetYaxis()->SetNdivisions(7);
    TText *label1 = new TText(0.02,0.02, "e-");
    label1->SetTextSize(0.03);
    label1->Draw();




    graph2->GetXaxis()->SetTitle("X-MeV");
    graph2->GetXaxis()->SetLimits(0.01, 100);
    graph2->GetYaxis()->SetTitle("Y-(MeV/cm)");
    graph2->GetYaxis()->SetRangeUser(0, 0.07);
    graph2->GetYaxis()->SetNdivisions(7);
    TText *label2 = new TText(2,0.04, "mu-");
    label2->SetTextSize(0.03);
    label2->Draw();

    // 显示Canvas
    canvas->Draw();

    in.close();
    f1->Write();

}




