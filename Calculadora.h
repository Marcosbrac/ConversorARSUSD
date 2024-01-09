#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
private:
	float dolares;
	float cotizacion=1;
public:
	Calculadora();
	void Calcular(float pesos);
	float Ver_Cantidad();
	void Cambiar_cotizacion(float pesos);
	float Ver_cotizacion();
};

#endif

