#include <TCanvas.h>
#include <TGraph.h>

void test1() {
    // 创建一个空的TGraph对象
    TGraph *graph = new TGraph();

    // 添加数据点
    graph->SetPoint(0, 1.0, 0.1);
    graph->SetPoint(1, 2.0, 0.4);
    graph->SetPoint(2, 3.0, 0.7);

    // 创建Canvas
    TCanvas *canvas = new TCanvas("canvas", "Modify TGraph Example", 800, 600);

    // 绘制散点图
    graph->Draw("APL"); // "A"表示绘制数据点，"P"表示绘制多边形线，"L"表示连接数据点

    // 设置坐标轴标签
    graph->GetXaxis()->SetTitle("X-Axis");
    graph->GetYaxis()->SetTitle("Y-Axis");
    gPad->SetLogx();
    graph->GetXaxis()->SetLimits(0.01, 100);


    // 显示Canvas
    canvas->Draw();
}

