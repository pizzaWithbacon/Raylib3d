
#pragma once
#include "raylib.h"

class Jugador
{

private:
    float velocidad;
    Color color;
    float fuerzaSalto;
    Vector3 posicion;
    float velocidadY;
    float size;

public:
    Jugador(float velocidadInicial,
            Color colorInicial,
            float fuerzadeSaltoInicial,
            Vector3 posicionInicial,
            float sizeInicial);

    float getVelocidad() { return velocidad; }
    Color getColor() { return color; }
    float getfuerzaSalto() { return fuerzaSalto; }
    Vector3 getPosicion() { return posicion; }
    float getVelocidad() { return velocidadY;}
    float getSize() { return size; }
    void setPosicion(Vector3 nuevaPosicion) { posicion = nuevaPosicion; };
    void setVelocidadY(float velocidadNueva) { velocidadY = velocidadNueva; };

    {
        posicion = nuevaPosicion;
    }

    void saltar();
};