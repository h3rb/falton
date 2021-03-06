//
// Created by Kevin Yu on 4/10/16.
//

#ifndef FALTON_FTMASSCOMPUTER_H
#define FALTON_FTMASSCOMPUTER_H

#include <falton/shape/ftCircle.h>
#include <falton/shape/ftPolygon.h>
#include <falton/math.h>

struct ftMassProperty {
    ftVector2 centerOfMass;
    real mass;
    real moment;
};

class ftMassComputer {
public:
    static ftMassProperty computeForCircle(const ftCircle& circle, real mass, ftVector2 offset);
    static ftMassProperty computeForPolygon(const ftPolygon& polygon, real mass, ftVector2 offset);
};


#endif //FALTON_FTMASSCOMPUTER_H
