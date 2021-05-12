//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_TEXTE_H
#define EXO3_TEXTE_H


#include "Composant.h"

class Texte: public Composant {

public:

    ~Texte() override;

    Texte();

    Texte(double x, double y);


    void render() override;

};


#endif //EXO3_TEXTE_H
