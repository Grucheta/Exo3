//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_RECTANGLE_H
#define EXO3_RECTANGLE_H


#include "Composant.h"

class Rectangle: public Composant{
public:
    void render() override;

    Rectangle(double x, double y);

    Rectangle();

    ~Rectangle() override;
};


#endif //EXO3_RECTANGLE_H
