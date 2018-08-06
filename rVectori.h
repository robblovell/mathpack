#ifndef rVectorihh#define rVectorihh//#include <iostream.h>#include <math.h>//#include <malloc.h>#include "rPointi.h"class rVectori;class rVector;/* * Class declaration^ */class rVectori:public rPointi {  protected:  public:    rVectori () : rPointi () {}    rVectori (rPointi);    rVectori (rVectori&);    rVectori (rPointi,rPointi);    rVectori (int i,int j,int k):rPointi(i,j,k) {}    //~rVectori () {}    int dot (rVectori);    rVectori cross (rVectori);    int len () { return sqrt (x*x+y*y+z*z); }    int length () { return sqrt (x*x+y*y+z*z); }    int magnitude () { return sqrt (x*x+y*y+z*z); }    void scale (int i) {x*=i; y*=i; z*=i;}    // normalize to 0-100.0    void normalize () { double len = sqrt (x*x+y*y+z*z); if (len ==0) return; x = (int)((double)x/len*100.0); y = (int)((double)y/len*100.0); z = (int)((double)z/len*100.0); }    void normal () { double len = sqrt (x*x+y*y+z*z); x = (int)((double)x/len*100.0); y = (int)((double)y/len*100.0); z = (int)((double)z/len*100.0); }    void unit () { double len = sqrt (x*x+y*y+z*z); x = (int)((double)x/len); y = (int)((double)y/len); z = (int)((double)z/len); }    rVectori rVector () {rVectori v(x,y,z); return v;}    rVectori operator*(rVectori); /* Cross Product */    rVectori operator*=(rVectori); /* Cross Product */    int operator|(rVectori); /* Dot Product */    rVectori operator/(rVectori); /* Division of rVectors */    rVectori operator=(rVectori p) { x=p.x; y=p.y; z=p.z; return (*this);}    rVectori operator=(rPointi p) { x=p.x; y=p.y; z=p.z; return (*this);}    // the following five functions can't be handled by gcc.    //rVectori operator*(int);     //rVectori operator/(int);    //rVectori& operator!();     //operator rPointi();        //operator vector ();    void rVectorize (rVectori A,rVectori B)    {      x = B.x-A.x; y = B.y-A.y; z = B.z-A.z;     }     friend rVectori operator+(rVectori ,rVectori );    friend rVectori operator-(rVectori ,rVectori );/*    friend int operator|(rVectori ,rVectori );    friend rVectori operator/(rVectori ,rVectori );    friend rVectori operator*(rVectori ,rVectori );*/    /* gcc requires the & here, sgi /usr/bin/CC can't handle it...!!!*/    friend rVectori operator+(int ,rVectori );    friend rVectori operator+(rVectori ,int );    friend rVectori operator-(int ,rVectori );    friend rVectori operator-(rVectori ,int );    friend rVectori operator*(int ,rVectori );    friend rVectori operator*(rVectori ,int );    friend rVectori operator/(int ,rVectori );    friend rVectori operator/(rVectori ,int );    rVectori& operator*=(int);    rVectori& operator+=(int);    rVectori& operator+=(rVectori);    rVectori& operator-=(int);    rVectori& operator-=(rVectori);    rVectori& operator/=(int);    int is_obtuse_with (rVectori &);    int is_acute_with (rVectori &);    int angle_with (rVectori &);    int angle_with (rVectori &,rVectori &,rVectori &);    int angle_with (rVectori &,int&,int&,int&);};#endif