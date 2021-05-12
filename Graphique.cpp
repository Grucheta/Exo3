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

const std::vector<Composant> &Graphique::getComposants() const {
    return composants;
}

GeneratorStrategy *Graphique::getGeneratorStrategy() const {
    return generatorStrategy;
}
