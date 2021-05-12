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


    Rectangle rectangle1 = Rectangle(8, 2);
    Composant *rectangle2 = new Rectangle(1,3);
    Texte texte1 = Texte();

    std::cout << rectangle2->getX() << "\n";

    std::cout << rectangle1.getX() << "\n";
    std::cout << texte1.getX() << "\n";

    delete rectangle2;

    return 0;
}
