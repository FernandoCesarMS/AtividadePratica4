#include "ponto2d.hpp"
#include "ponto2d.cpp"

int main()
{
     Ponto2D P1;
     Ponto2D P2(1.0, 2.0);
     Ponto2D P3(4.0, 6.0);

     cout << "  -> Validando os set's e get's" << endl
          << endl;

     cout << "Ponto 1: ";
     P1.print();
     cout << "Ponto 2: ";
     P2.print();
     cout << "Ponto 3: ";
     P3.print();
     cout << "Id do P3: " << P3.getId() << endl;
     cout << "X do P2: " << P2.getX() << endl;
     cout << "Y do P2: " << P2.getY() << endl;
     P1.setId(4);
     cout << "Nova Id do P1: " << P1.getId() << endl;
     P1.setX(10.0);
     P1.setY(5.0);
     cout << "Novas coordenadas do Ponto 1: (" << P1.getX() << "," << P1.getY() << ")" << endl;

     cout << endl
          << "  -> Validando os metodos" << endl
          << endl;

     cout << "Distancia do P1 a origem: " << P1.distToOrig() << endl;
     cout << "Distancia do P2 ao P3: " << P2.distTo(P3) << endl;
     P3.sumOf(P2);
     cout << "Soma as coordenadas de P2 ao P3: ";
     P3.print();
     Ponto2D P4 = P1.sumOfTwoPoints(P2);
     cout << "Novo ponto P4 baseado em (P2+P1): ";
     P4.print();
     cout << endl;
     Ponto2D P5 = P4;

     return 0;
}