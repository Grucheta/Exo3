//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_GRAPHIQUE_H
#include <vector>
#include "Composant.h"

#define EXO3_GRAPHIQUE_H




class Graphique {
public:
    Graphique(const std::string& input);

private:
    std::vector<Composant> composants;


};


#endif //EXO3_GRAPHIQUE_H
