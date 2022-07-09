/*                                           */
/* DO NOT MOFIFY ANY CODE IN THIS FILE       */
/*                                           */

#include <exception>
#include <iostream>
#include <memory>
#include <iomanip>
#include "GPSCoordinate.h"

bool readGPSCoordFromTerminal(double& latitude, double& longitude);

int main(){
    /*                                           */
    /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
    /*                                           */

    // Create a GPSCoordinate object with information about RMIT
    // University (124 La Trobe St, Melbourne VIC 3000)
    GPSCoordinate coordRMIT(-37.809, 144.965);
    std::cout << "The GSP coordinate of RMIT is: " << coordRMIT << std::endl;

    // Read a GPS coordinate from the terminal
    GPSCoordinate coordInput;
    double lat,lon = 0.0;
    bool readSuccess = readGPSCoordFromTerminal(lat,lon);
    if(readSuccess){
        coordInput.setCoordinate(lat, lon);

        // Print the coordinate
        std::cout << "The input GSP coordinate is: " << coordInput << std::endl;

        GPSCoordinate midPint;
        midPint = coordRMIT + ((coordInput - coordRMIT)/2);

        // Print the midpoint
        std::cout << "The GSP coordinate of mid-point is: " << midPint << std::endl;

    }else{
        std::cout << std::endl << "Incorrect coordinate entered." << std::endl;
    }

}

bool readGPSCoordFromTerminal(double& lat, double& lon){

    bool readSuccess = false;
    std::cout << "Enter a GPS coordinate [latitude longitude]: ";
    std::cin >> lat; 
    std::cin >> lon; 

    if(lat > -90 && lat < 90 && lon > -180 && lon < 180){
        readSuccess = true;
    }

    return readSuccess;     
}