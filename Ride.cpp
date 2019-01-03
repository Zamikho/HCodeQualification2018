//
// Created by Sam Becerra on 1/3/19.
//
#include <iostream>
#include "Ride.h"

using namespace std;

Ride::Ride(int a, int b, int x, int y, int s, int f) {
    rowStart = a;
    colStart = b;
    rowFinish = x;
    colFinish = y;
    earliesStart = s;
    latestFinish = f;
}//Constructor

Ride::~Ride() {
}//Destructor
