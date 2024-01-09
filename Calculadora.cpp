#include "Calculadora.h"
#include "Manejo_archivos.h"

Calculadora::Calculadora() {
	Manejo_archivos obj_manejo;
	cotizacion=(obj_manejo.cargar_cotizacion());
}

void Calculadora::Calcular(float pesos){
	dolares = pesos/cotizacion;
	
	
};
float Calculadora::Ver_Cantidad(){
	return dolares;
}
void Calculadora::Cambiar_cotizacion(float pesos){
	cotizacion=pesos;
}
float Calculadora::Ver_cotizacion(){
	return cotizacion;
};
