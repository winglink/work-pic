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
void Showpic::showfive(Point center, int index) {

}
void Showpic::showsquare(Point center, int index) {

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
