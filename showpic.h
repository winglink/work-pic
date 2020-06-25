//
// Created by think on 2020/6/24.
//

#ifndef PIC_SHOWPIC_H
#define PIC_SHOWPIC_H
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>
#include <iostream>
//#include <algorithm>
using namespace  cv;
class Showpic{
public:
    Showpic(){
        pic = Mat(300,300,CV_8UC1,Scalar(0));
        for(int i = 0;i < 4;i++){
            scalar[i] = Scalar(125+ 35 * i);
        }
    }
    void showtria(Point center,int i);
    void showsquare(Point center,int index);
    void  showfive(Point center,int index);
    void showt(Point center,int index);
    void showwx(Point center,int index);
    void showsx(Point center,int index);
    void showcircle(Point center,int index);
    void showhalfcircle(Point center,int index);
    Mat pic;
    Scalar scalar[4];
    const double PI = std::atan(1.0)*4;
};
#endif //PIC_SHOWPIC_H
