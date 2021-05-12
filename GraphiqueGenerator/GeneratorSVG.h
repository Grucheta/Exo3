//
// Created by Antoine Gruchet on 12/05/2021.
//

#ifndef EXO3_GENERATORSVG_H
#define EXO3_GENERATORSVG_H


#include "GeneratorStrategy.h"

class GeneratorSVG : public GeneratorStrategy {
public:
    GeneratorSVG();
    void generate() override;
};


#endif //EXO3_GENERATORSVG_H
