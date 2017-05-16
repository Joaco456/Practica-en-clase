#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
    private:
       double r, i;
    public:
       Complejo();
       Complejo(double nx, double ny);
       Complejo suma(Complejo x);
       Complejo producto_escalar(int x);
       void imprimir();
};

#endif // COMPLEJO_H
