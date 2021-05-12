//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_LIGNE_H
#define EXO3_LIGNE_H


#include "Composant.h"

class Ligne : public Composant{
public:
    void render() override;

    Ligne(double x, double y);

    Ligne();

    ~Ligne() override;
};


#endif //EXO3_LIGNE_H
