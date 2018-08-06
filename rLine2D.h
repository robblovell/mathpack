#ifndef rLine2Dhh#define rLine2Dhh//#include <stdlib.h>#include <ostream>#include <iostream>class rLine2D;class Poly2D;/* * Class declarations */class rLine2D {  friend std::ostream&    operator<<(std::ostream&, rLine2D&); /* used with cout */  protected:  public:    double m; // slope an intercept are stored to form the rLine.    double b;    rLine2D () {};    rLine2D (rPoint2D,rPoint2D); // Two rPoints make a rLine.    rLine2D (double, double); // Slope and intercept make a rLine.    rLine2D (double, double, double, double); // Two rPoints again.    ~rLine2D () {};    rLine2D& operator=(rLine2D );    int operator==(rLine2D );    void set (rPoint2D, rPoint2D);    double x (double);    double y (double);    int operator > (rPoint2D p) { return p.y < m*p.x + b; }    int operator < (rPoint2D p) { return p.y > m*p.x + b; }    int operator >= (rPoint2D p) { return p.y <= m*p.x + b; }    int operator <= (rPoint2D p) { return p.y >= m*p.x + b; }    int operator == (rPoint2D p) { return p.y == m*p.x + b; }    int operator != (rPoint2D p) { return p.y != m*p.x + b; }/*    friend int operator < (rPoint2D p, rLine2D l) { return p.y < l.m*p.x + l.b; }    friend int operator > (rPoint2D p, rLine2D l) { return p.y > l.m*p.x + l.b; }    friend int operator <= (rPoint2D p, rLine2D l) { return p.y <= l.m*p.x + l.b; }    friend int operator >= (rPoint2D p, rLine2D l) { return p.y >= l.m*p.x + l.b; }    friend int operator == (rPoint2D p, rLine2D l) { return p.y == l.m*p.x + l.b; }    friend int operator != (rPoint2D p, rLine2D l) { return p.y != l.m*p.x + l.b; }*/    int sameside (rPoint2D,rPoint2D);   // friend Poly2D;};#endif