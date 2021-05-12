//
// Created by Antoine Gruchet on 12/05/2021.
//

#ifndef EXO3_GENERATORSTRATEGY_H
#define EXO3_GENERATORSTRATEGY_H


class GeneratorStrategy {
//create new class implementing GeneratorStrategy to add new graphic type
public:
    virtual void generate() = 0;

    virtual ~GeneratorStrategy();

};


#endif //EXO3_GENERATORSTRATEGY_H
