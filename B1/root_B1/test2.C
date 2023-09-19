#include <TCanvas.h>
#include <TGraph.h>
#include <TAxis.h>

void test2() {
    // 创建数据点
    Double_t x[] = {0.01, 0.1, 1.0, 10.0};
    Double_t y[] = {0.1, 0.4, 0.7, 1.2};
    
    // 创建TGraph对象
    TGraph *graph = new TGraph(4, x, y);

    // 创建Canvas
    TCanvas *canvas = new TCanvas("canvas", "Custom Log Scale Example", 800, 600);

    // 绘制折线图
    graph->Draw("AL"); // "A"表示绘制折线，"L"表示连接数据点

    // 设置坐标轴标签
    graph->GetXaxis()->SetTitle("X-Axis");
    graph->GetYaxis()->SetTitle("Y-Axis");

    // 设置横轴为以10为底的对数坐标轴
    //graph->GetXaxis()->SetLogBase(10);
    gPad->SetLogx();
   graph->GetXaxis()->SetLimits(0.01, 100); 
    // 设置横轴刻度间隔
    graph->GetXaxis()->SetMoreLogLabels(); // 允许更多的对数刻度标签
    graph->GetXaxis()->SetNoExponent();    // 禁止使用指数表示刻度

    // 显示Canvas
    canvas->Draw();
}

