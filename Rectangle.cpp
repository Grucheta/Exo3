//
// Created by Antoine Gruchet on 11/05/2021.
//

#include <iostream>
#include "Rectangle.h"

void Rectangle::render() {
    std::cout << "Rectangle" << std::endl;
}

Rectangle::Rectangle(double x, double y) : Composant(x, y) {}

Rectangle::Rectangle() : Composant() {}

Rectangle::~Rectangle() = default;
