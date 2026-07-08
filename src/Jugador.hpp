
#pragma once
#include "raylib.h"

class Jugador { 

    private:
 float velocidad;
 Color color;
 float fuerzaSalto;

    public:
    Jugador(float velocidadInicial,
        Color colorInicial,
        float fuerzadeSaltoInicial);

 float getVelocidad() {return velocidad; }
 Color getColor() {return color; }
 float getfuerzaSalto() {return fuerzaSalto; }

 void saltar();



};