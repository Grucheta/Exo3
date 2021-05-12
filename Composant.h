//
// Created by Antoine Gruchet on 11/05/2021.
//

#ifndef EXO3_COMPOSANT_H
#define EXO3_COMPOSANT_H


class Composant {
public:
    virtual void render() = 0;

    double getX() const;

    Composant();

    void setX(double x);

    double getY() const;

    void setY(double y);

    Composant(double x, double y);

    virtual ~Composant();

    void displayComposant();

protected:
    double x;
    double y;


};


#endif //EXO3_COMPOSANT_H
