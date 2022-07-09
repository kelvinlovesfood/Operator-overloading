#include "GPSCoordinate.h"
#include <iomanip>

/*                                           */
/*         YOU MAY ADD YOUR CODE HERE        */
/*                                           */

GPSCoordinate::GPSCoordinate() {

}

GPSCoordinate::GPSCoordinate(double latitude, double longitude) {
    this->latitude = latitude;
    this->longitude = longitude;
}

GPSCoordinate::~GPSCoordinate() {

}

void GPSCoordinate::setCoordinate(double latitude, double longitude) {
    this->latitude = latitude;
    this->longitude = longitude;
}

GPSCoordinate GPSCoordinate::operator+(const GPSCoordinate& other) {
    GPSCoordinate temp;
    temp.latitude = this->latitude + other.latitude;
    temp.longitude = this->longitude + other.longitude;
    return temp;
}

GPSCoordinate GPSCoordinate::operator-(const GPSCoordinate& other) {
    GPSCoordinate temp;
    temp.latitude = this->latitude - other.latitude;
    temp.longitude = this->longitude - other.longitude;
    return temp;
}

GPSCoordinate GPSCoordinate::operator/(const int& n) {
    GPSCoordinate temp;
    temp.latitude = this->latitude / n;
    temp.longitude = this->longitude / n;
    return temp;
}

double GPSCoordinate::operator[](const std::string& string) {
    double ret = 0.0;
    if (string.compare("lat") == 0) {
        ret = this->latitude;
    }
    else if (string.compare("lon") == 0) {
        ret = this->longitude;
    }
    return ret;
}

//__________________________________________________________//
/*                                           */
/* DO NOT MOFIFY ANY CODE IN THIS FUNCTION   */
/*                                           */
std::ostream& operator<<(std::ostream& os, GPSCoordinate& coord){
    os << "(Lati: ";
    os << std::fixed << std::setprecision(3)  << coord["lat"];
    os << ", Long: ";
    os << std::fixed << std::setprecision(3)  << coord["lon"];
    os << ") ";

    return os;
}
