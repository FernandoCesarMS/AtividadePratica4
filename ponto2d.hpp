#ifndef PONTO2D_H
#define PONTO2D_H
#include <iostream>

using namespace std;

class Ponto2D
{
private:
    double x;        // Ponto X do plano cartesiano
    double y;        // Ponto Y do plano cartesiano
    int distOrg;     // Distancia entre o ponto e a origem
    int dist;        // Distancia entre dois pontos
    int id;          // Id referente a cada ponto
    int getNextId(); // Incrementa um no ID

public:
    //constructors
    Ponto2D();
    Ponto2D(double, double);
    Ponto2D(const Ponto2D&);
    ~Ponto2D();

    //basic getters and setters
    double getX();
    double getY();
    int getId();
    void setX(double);
    void setY(double);
    void setId(int);

    // other methods
    void print() const;
    void sumOf(Ponto2D);
    Ponto2D sumOfTwoPoints(Ponto2D);
    double distToOrig();
    double distTo(Ponto2D);
};

#endif