#include <exception>
#include <iostream>

class GPSCoordinate
{

public:

    GPSCoordinate();

    // latitude must be [-90, 90] inclusive
    // longitude must be [-180, 180] inclusive
    GPSCoordinate(double latitude, double longitude);

    ~GPSCoordinate();

    // latitude must be [-90, 90] inclusive
    // longitude must be [-180, 180] inclusive
    void setCoordinate(double latitude, double longitude);

    GPSCoordinate operator+(const GPSCoordinate& other);
    GPSCoordinate operator-(const GPSCoordinate& other);

    // n must not be 0
    GPSCoordinate operator/(const int& n);

    // string must be "lat" or "lon" otherwise the return will be 0.0
    double operator[](const std::string& string);

private:
    /*                                           */
    /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
    /*                                           */
    double latitude;
    double longitude;
};

std::ostream& operator<<(std::ostream& os, GPSCoordinate& coord);

