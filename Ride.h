//
// Created by Sam Becerra on 1/3/19.
//

#ifndef HCODEQUALIFICATION2018_RIDE_H
#define HCODEQUALIFICATION2018_RIDE_H


class Ride {
public:
    int rowStart;
    int colStart;
    int rowFinish;
    int colFinish;
    int earliesStart;
    int latestFinish;

    Ride(int a, int b, int x, int y, int s, int f); //Constructor
    ~Ride(); //Destructor
};


#endif //HCODEQUALIFICATION2018_RIDE_H
