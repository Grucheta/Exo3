//
// Created by Antoine Gruchet on 11/05/2021.
//

#include <iostream>
#include <utility>
#include "Groupe.h"

void Groupe::render() {
    std::cout << "Groupe" << std::endl;
}



Groupe::Groupe(double x, double y) : Composant(x, y) {}

Groupe::Groupe(std::vector<Composant> groupe) : groupe(std::move(groupe)) {}

Groupe::Groupe() : Composant() {}

Groupe::~Groupe() = default;





