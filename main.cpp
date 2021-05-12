#include <iostream>
#include "Composant.h"
#include "Rectangle.h"
#include "Texte.h"
#include "Graphique.h"

int main() {
    std::cout << "Hey, which graph do you want to generate ?" << std::endl;
    std::string input;

    while (input != "1" && input != "2") {
        std::cout << "1 . SVG" << std::endl;
        std::cout << "2 . PNG" << std::endl;
        std::getline(std::cin, input);
    }

    Graphique graphique = Graphique(input);


    Composant *rectangle1 = new Rectangle(8, 2);
    Composant *rectangle2 = new Rectangle(1,3);
    Composant *texte1 = new Texte(1,3);

    graphique.composant_push_back(rectangle2);
    graphique.composant_push_back(rectangle1);
    graphique.composant_push_back(texte1);

    graphique.getGeneratorStrategy()->generate();

    graphique.displayGraph();



    delete rectangle1;
    delete rectangle2;
    delete texte1;

    return 0;
}
