#include "ponto2d.hpp"
#include <cmath>

//Constructors

//Contrutor Padrão, inicia X e Y como 0 e o id depende da quantidade de Ponto2D criados
Ponto2D::Ponto2D()
{
    this->x = 0;
    this->y = 0;
    this->id = this->getNextId();
}
//Construtor com 2 parametro, inicia X e Y com valores de entrada do usuário e o id variando
Ponto2D::Ponto2D(double X, double Y)
{
    this->x = X;
    this->y = Y;
    this->id = this->getNextId();
}
Ponto2D::~Ponto2D(){
    --x;
}
//Basic getters and setters

//Retorna o valor do ID
int Ponto2D::getId()
{
    return this->id;
}
//Retorna o valor de X
double Ponto2D::getX()
{
    return this->x;
}
//retorna o valor de Y
double Ponto2D::getY()
{
    return this->y;
}
//Altera o valor do ID
void Ponto2D::setId(int ID)
{
    this->id = ID;
}
//Altera o valor de X
void Ponto2D::setX(double X)
{
    this->x = X;
}
//Altera o valor de Y
void Ponto2D::setY(double Y)
{
    this->y = Y;
}

//Private Methods

//Aumenta em um o valor do ID estaticamente
int Ponto2D::getNextId()
{
    static int x = 0;
    return ++x;
}

//Public Methods

void Ponto2D::print() const
{

    std::cout<<"Seu ponto eh: ("<<x<<","<<y<<")"<<endl;

}
double Ponto2D::distToOrig()
{

    distOrg = sqrt((x*x)+(y*y));
    return distOrg;

}
double Ponto2D::distTo(Ponto2D p2)
{

    dist = sqrt(((this->getX()-p2.getX())*(this->getX()-p2.getX()))+((this->getY()-p2.getY())*(this->getY()-p2.getY())));
    return dist;

}
void Ponto2D::sumOf(Ponto2D p2) 
{

    setX(getX() + p2.getX());
    setY(getY() + p2.getY()); 

}
Ponto2D Ponto2D::sumOfTwoPoints(Ponto2D p2)
{
    Ponto2D p3;

    p3.setX(getX() + p2.getX());
    p3.setY(getY() + p2.getY()); 

    return p3;

}