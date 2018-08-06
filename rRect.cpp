//
// Created by Robb Lovell on 2018-05-07.
//

#include "rRect.h"

rRect::rRect () {
    xmin = 0;
    ymin = 0;
    xmax = 1;
    ymax = 1;
};

rRect::rRect (double x0,double y0, double x1,double y1)
{
    xmin = x0;
    ymin = y0;
    xmax = x1;
    ymax = y1;
}