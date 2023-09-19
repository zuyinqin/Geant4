void test()
{
    
    TCanvas *c1 = new TCanvas("c1","example",200,10,700,500);
    Double_t x[3] = {1,2,3};
    Double_t y[3] = {23,56,85};
    TGraph *gr = new TGraph(3,x,y);
    gr->SetLineColor(kRed); // 设置线颜色为红色
    gr->SetMarkerColor(kGreen); // 设置标记颜色为绿色
    gr->SetMarkerStyle(21); // 设置标记样式
    gr->Draw("AL"); // ACP表示绘制轴、曲线和标记
    gr->SetTitle("simple");
    gr->GetXaxis()->SetTitle("X");
    gr->GetYaxis()->SetTitle("Y");
    //c1->SaveAs("line.png"); // 保存为图片
    c1->Draw(); // 显示画布
}
