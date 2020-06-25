//
// Created by think on 2020/6/24.
//
#include "showpic.h"
void Showpic::showtria(Point center,int i){
     std::vector<Point> input;
     input.push_back(Point(center.x,center.y));
     input.push_back(Point(150,150));
     input.push_back(Point(150,(center.y <= 150)?0:300));

//    polylines(pic, input, true, scalar[i], -1, LINE_8, 0);
    fillConvexPoly(pic,input,scalar[i],LINE_8,0);
}
void Showpic::showfive(Point center, int i) {
        double r = 75;
        double angle = 72.0 / 180 * PI;
//        std:: cout <<"angle="<<angle<< " "<< sin(angle) << std::endl;
        std::vector<Point> input;
        input.push_back(Point(center.x,center.y - r));
        input.push_back(Point(center.x + r * sin(angle),center.y - r * cos(angle)));
        input.push_back(Point(center.x + r * sin(angle / 2),center.y + r * cos(angle / 2)));
        input.push_back(Point(center.x - r * sin(angle / 2),center.y + r * cos(angle / 2)));
        input.push_back(Point(center.x - r * sin(angle),center.y - r * cos(angle)));
        double tmp = abs(150 - (75 + r * sin(angle)));
        int py = (center.x >= 150) ? (-1) : 1;
        std::for_each(input.begin(),input.end(),[tmp,py](Point &p){ p.x = p.x + tmp * py ;});

//        for(auto point : input){
//            std::cout << point.x << " " << point.y << std::endl;
//        }
        fillConvexPoly(pic,input,scalar[i],LINE_8,0);
}
void Showpic::showsquare(Point center, int i) {
     Point  p(150,150);
     rectangle(pic,p,center,scalar[i],-1);

}
void Showpic::showt(Point center, int index) {
}
void Showpic::showwx(Point center, int index) {
}
void Showpic::showsx(Point center, int index) {
}
void Showpic::showcircle(Point center, int index) {
}
void Showpic::showhalfcircle(Point center, int index) {
}
