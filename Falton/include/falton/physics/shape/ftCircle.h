//
// Created by Kevin Yu on 12/12/15.
//

#ifndef FALTON_CIRCLE_H
#define FALTON_CIRCLE_H

#include "falton/math/math.h"
#include "falton/physics/shape/ftShape.h"


class ftCircle : public ftShape{

public:
    real radius;
    real area;
    ftCircle();
    real getArea();
    void copy(const ftShape* shape);
    ftAABB constructAABB(ftTransform transform);

    static ftCircle* create(real radius);
};


#endif //FALTON_CIRCLE_H
