//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_GROUPE_H
#define EXO3_GROUPE_H


#include <vector>
#include "Composant.h"

class Groupe : public Composant{
public:
    void render() override;

    ~Groupe() override;

    Groupe();

    Groupe(double x, double y);

    explicit Groupe(std::vector<Composant> groupe);

private:
    std::vector<Composant> groupe;
};


#endif //EXO3_GROUPE_H
