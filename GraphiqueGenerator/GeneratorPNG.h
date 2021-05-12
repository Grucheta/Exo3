//
// Created by Antoine Gruchet on 12/05/2021.
//

#ifndef EXO3_GENERATORPNG_H
#define EXO3_GENERATORPNG_H


#include "GeneratorStrategy.h"

class GeneratorPNG : public GeneratorStrategy{
public:
    GeneratorPNG();

    void generate() override;
};


#endif //EXO3_GENERATORPNG_H
