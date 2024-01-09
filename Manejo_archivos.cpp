#include "Manejo_archivos.h"
#include <fstream>
#include <wx/msgdlg.h>
using namespace std;

Manejo_archivos::Manejo_archivos() {	
}

void Manejo_archivos::guardar_cotizacion(float valor){
	
	ofstream file2("cotizacion.bin" , ios::binary|ios::trunc);
	file2.write(reinterpret_cast<char*>(&valor),sizeof(float));
	file2.close();
}

float Manejo_archivos::cargar_cotizacion(){
	ifstream file("cotizacion.bin", ios::binary);
	
	if(file.is_open()){
		float aux;
		file.read(reinterpret_cast<char*>(&aux),sizeof(float));
		file.close();
		return aux;
	}else{
		wxMessageBox("No se pudo cargar la cotizacion","404 Error not found");
		return 1;
	}
}

