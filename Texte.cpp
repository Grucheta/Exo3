//
// Created by Antoine Gruchet on 11/05/2021.
//

#include <iostream>
#include "Texte.h"

void Texte::render() {
    std::cout << "Texte" << std::endl;
}

Texte::Texte(double x, double y) : Composant(x, y) {}

Texte::Texte() : Composant() {}

Texte::~Texte() = default;
