#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Ride.h"
using namespace std;

int main() {
    string line;
    int a,b,x,y,s,f;
    int gridRows, gridCols, numVehicles, numRides, bonus, numSteps;
    vector<Ride> allRides;
    int numLines = 0;

    ifstream file("a_example.txt");
    while (file >> a >> b >> x >> y >> s >> f){
        if (numLines == 0){
            gridRows = a;
            gridCols = b;
            numVehicles = x;
            numRides = y;
            bonus = s;
            numSteps = f;
        }
        else if (numLines > 0)
            allRides.push_back(Ride(a,b,x,y,s,f));
        numLines += 1;
    }
    file.close();

    
    return 0;
}