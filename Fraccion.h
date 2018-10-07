#ifndef FRACCION_H
#define FRACCION_H  

class Fraccion{
    private:
        int numerador;
        int denominador;

    public:
        Fraccion();
        Fraccion(int num, int den);
        ~Fraccion();

        void Suma (Fraccion& f2);
        void Producto (Fraccion& f2);
        void Mostrar ();
};
#endif
