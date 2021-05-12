//
// Created by Antoine Gruchet on 11/05/2021.
//

#include <iostream>
#include "Composant.h"

double Composant::getX() const {
    return x;
}

void Composant::setX(double x) {
    Composant::x = x;
}

double Composant::getY() const {
    return y;
}

void Composant::setY(double y) {
    Composant::y = y;
}

Composant::Composant(double x, double y) : x(x), y(y) {}

Composant::Composant() {
    x = 0;
    y = 0;
}

void Composant::displayComposant() {
    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
    this->render();
}

Composant::~Composant() = default;
