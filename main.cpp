#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "showpic.h"
#include <set>
int main() {
    Showpic showpic;
//    if(img.empty()){
//        std::cout << "error" << std::endl;
//        return  -1;
//    }
    void (Showpic::*f[8])(Point,int);
    f[0] = &Showpic :: showtria;
    f[1] = &Showpic :: showsquare;
    f[2] = &Showpic :: showfive;
    f[3] = &Showpic :: showt;
    f[4] = &Showpic :: showwx;
    f[5] = &Showpic :: showsx;
    f[6] = &Showpic :: showcircle;
    f[7] = &Showpic :: showhalfcircle;

    Point pp[] = {Point(75,75),Point(225,75),Point(225,225),Point(75,225)};
    srand((unsigned )time(NULL));
    std::set<int> counter;
    int index(0);
    for(int i = 0;i < 4;i++){
        while(  counter.find((index = rand() % 8)) != counter.end()){

        }
//        (showpic.*f[index])(pp[index],index);
        std:: cout << index << std::endl;
        showpic.showtria(pp[i],i);
        counter.insert(index);
    }
    counter.clear();

    imwrite("out.jpg",showpic.pic);
    waitKey();
    return 0;
}
