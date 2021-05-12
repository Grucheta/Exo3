//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_GRAPHIQUE_H
#include <vector>
#include "Composant.h"
#include "GraphiqueGenerator/GeneratorStrategy.h"

#define EXO3_GRAPHIQUE_H




class Graphique {
public:
    explicit Graphique(const std::string& input);

    virtual ~Graphique();

    const std::vector<Composant *> &getComposants() const;

    GeneratorStrategy *getGeneratorStrategy() const;

    void composant_push_back (Composant* composant);

    void displayGraph ();

private:
    std::vector<Composant*> composants;
    GeneratorStrategy* generatorStrategy;


};


#endif //EXO3_GRAPHIQUE_H
