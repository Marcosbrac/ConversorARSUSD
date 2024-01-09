#ifndef M_FRAMECITO_H
#define M_FRAMECITO_H
#include "wxfb_project.h"
//personalizados
#include "m_framecito2.h"
#include "Calculadora.h"
#include <vector>
using namespace std;

struct datos_vector{
	string pesos,dolares,cotizacion;
};

class m_framecito : public Framecito {
	
private:
	m_framecito2 *ventana_config;
	Calculadora *obj_calculadora;
	int cont_grilla=0;
	
	vector<datos_vector> m_arreglo;
	
	wxString directorio_importacion = "historial.txt";
	
protected:
	void Click_visitarIG( wxCommandEvent& event )  override;

	void boton_destino( wxFileDirPickerEvent& event )  override;

	void boton_exportar_txt( wxCommandEvent& event )  override;

	void button_cambiarValor( wxCommandEvent& event )  override;

	void ClickConvertir( wxCommandEvent& event )  override;
	
	void ActualizarGrilla(double pesos);
	
	string Acortar_decimales(float valor, int cant);
	
	
public:
	m_framecito(wxWindow *parent=NULL);
	~m_framecito();
};

#endif

