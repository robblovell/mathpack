#pragma once#ifndef rPointhh#define rPointhh#include <ostream>#include <iostream>#include <math.h>class rPoint;class rPointi;class rPoint2D;class rVector;class rLatLon;class rMatrix_3_3;/* * Class declarations */class rPoint {	//friend rMatrix_3_3;  friend std::ostream& operator << (std::ostream& os, rPoint& p) {      os << "<" <<p.x<<" "<<p.y<<" "<<p.z<< ">";      return os;     } /* used with cout */  protected:  public:    double x,y,z;//,*pt;    rPoint ();    //rPoint (rPoint &p);    rPoint (rPoint2D p);    rPoint (rVector p);    rPoint (double i,double j,double k);    //void dout ();/* the display routine */    virtual rPoint &operator=(rPoint p);    virtual rPoint &operator=(rPoint2D p);    //virtual rPoint &operator=(rVector &p);        //operator rVector ();    operator rPoint2D ();    //operator rLatLon ();        int operator==(rPoint );    int operator<=(rPoint );    int operator>=(rPoint );    int operator<(rPoint );    int operator>(rPoint );        void neg () { x = -x; y = -y; z = -z; }	void abs () { x = ::fabs (x); y = ::fabs (y); z = ::fabs (z); }    void negate () { x = -x; y = -y; z = -z; }    //double& operator[] (int n) { return *(pt+n); }    rPoint& operator+=(rPoint);    rPoint& operator+(double);    rPoint& operator+=(double);    rPoint& operator-=(rPoint);    rPoint& operator-(double);    rPoint& operator-=(double);    rPoint& operator*=(rPoint);    rPoint& operator*(double);    rPoint& operator*=(double);    rPoint& operator/=(rPoint);    rPoint& operator/(double);    rPoint& operator/=(double);	rPoint &operator*=(rMatrix_3_3 &m);    int iszero () { return x==0.0 && y==0.0 && z==0.0; }    virtual void set (rPoint2D p);     virtual void set (rVector p);	virtual void set (rPoint p) {		set (p.x,p.y,p.z);	}    virtual void set(const double mx,const double my,const double mz)    {      x = mx; y = my; z = mz;    }    friend rPoint operator+(rPoint ,rPoint );    friend rPoint operator-(rPoint ,rPoint );    friend rPoint operator+(rPoint ,rVector );    friend rPoint operator-(rPoint ,rVector );    friend rPoint operator+(rVector ,rPoint );    friend rPoint operator-(rVector ,rPoint );    friend rPoint operator*(rPoint p,rMatrix_3_3 &m);    friend rPoint operator*(rMatrix_3_3 &m,rPoint p);};#endif