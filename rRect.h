//
// Created by Robb Lovell on 2018-05-07.
//

#ifndef EIDEA_RRECT_H
#define EIDEA_RRECT_H

class rRect {
public:
    double xmin, ymin, xmax, ymax;

    rRect();
    rRect (double x0,double y0, double x1,double y1);
};

#endif //EIDEA_RRECT_H
