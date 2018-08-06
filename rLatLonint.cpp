//#include <iostream.h>#include "rPoint.h"#include "rVector.h"#include "rPoint2D.h"#include "rLatLon.h"#include "rLatLonint.h"/* * Class declarations */rLatLonint &rLatLonint::operator=(rLatLonint p){  lon = p.lon;  lat = p.lat;  return (*this);}rLatLonint &rLatLonint::operator=(rLatLon p){  lon = (long)((double)p.lon*PRECISION);  lat = (long)((double)p.lat*PRECISION);  return (*this);}rLatLonint &rLatLonint::operator=(rPoint2D p){  lon = p.x*180.0/PI*PRECISION;  lat = p.y*180.0/PI*PRECISION;;  return (*this);}rLatLonint::operator rVector (){  //   From rLatLon to rVector....  // Assumes rLatLon is on a unit sphere.  rPoint2D tmp;  tmp.x = this->lon;  tmp.y = this->lat;  rVector v;   v = tmp;  return v;}rLatLonint::operator rPoint2D(){	rPoint2D p;	p = *this;	return p;}rLatLonint::operator rLatLon(){	rLatLon p;	p = *this;	return p;}ostream& operator<<(ostream& os, rLatLonint& p){  os << '('<<"LATLON::";  os << (double)p.lat/PRECISION <<','<<(double)p.lon/PRECISION;  os << ')';  return os;}