//
// Created by Antoine Gruchet on 11/05/2021.
//

#include "Graphique.h"
#include "GraphiqueGenerator/GeneratorPNG.h"
#include "GraphiqueGenerator/GeneratorSVG.h"
#include <iostream>

Graphique::Graphique(const std::string& input) {
    if (input == "1") {
        generatorStrategy = new GeneratorSVG();
    } else if (input == "2") {
        generatorStrategy = new GeneratorPNG();
    }
}

Graphique::~Graphique() {
    delete this->generatorStrategy;
}



GeneratorStrategy *Graphique::getGeneratorStrategy() const {
    return generatorStrategy;
}


const std::vector<Composant *> &Graphique::getComposants() const {
    return composants;
}

void Graphique::composant_push_back(Composant* composant) {
    composants.push_back(composant);
}

void Graphique::displayGraph() {
    for (auto* composant : composants) {
        composant->displayComposant();
        std::cout<< "\n";
    }
}

