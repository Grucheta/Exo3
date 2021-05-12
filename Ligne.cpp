//
// Created by Antoine Gruchet on 11/05/2021.
//

#include <iostream>
#include "Ligne.h"

void Ligne::render() {
    std::cout << "Ligne" << std::endl;
}

Ligne::Ligne(double x, double y) : Composant(x, y) {}

Ligne::Ligne() : Composant(){}

Ligne::~Ligne() = default;
