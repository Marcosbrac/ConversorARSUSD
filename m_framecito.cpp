#include "m_framecito.h"
#include <wx/valtext.h>
//personalizados
#include "Calculadora.h"
#include "m_framecito2.h"
#include <fstream>
#include <wx/msgdlg.h>
#include "windows.h"
using namespace std;

m_framecito::m_framecito(wxWindow *parent) : Framecito(parent) {
	wxTextValidator vali(wxFILTER_NUMERIC);
	m_valorentrada->SetValidator(vali);
	
	obj_calculadora = new Calculadora();
	ventana_config = nullptr;
	
}

void m_framecito::ClickConvertir( wxCommandEvent& event )  {
	//Calculadora obj;
	///valores entrada
	double valor_entrada_d;
	//float valor_entrada_f;
	//float valor_convertido;
	///obtencion de valores
	m_valorentrada-> GetValue().ToDouble(&valor_entrada_d);
	///conversion a float
	//valor_entrada_f = (float)valor_entrada_d;
	///calculo
	obj_calculadora -> Calcular((float)valor_entrada_d);
	//obj.Calcular((float)valor_entrada_d);
	//float usd = 800;
	//valor_convertido = valor_entrada_f / usd;
	///mostrar resultado
	//wxString resultado;
	//resultado<<obj_calculadora->Ver_Cantidad();
	
	m_valorsalida-> SetValue(this->Acortar_decimales(obj_calculadora->Ver_Cantidad(),2));
	
	
	this->ActualizarGrilla(valor_entrada_d);
	
//	event.Skip();
}

void m_framecito::ActualizarGrilla(double pesos){
	
	datos_vector struct_aux;
	grilla_historial->AppendRows(1);
	wxString str_grilla;
	
	
	///ARS
	struct_aux.pesos = this->Acortar_decimales(pesos,2);
	str_grilla<<pesos;
	grilla_historial->SetCellValue(cont_grilla,0,str_grilla);
	str_grilla.Clear();
	///USD
	struct_aux.dolares = this->Acortar_decimales(obj_calculadora->Ver_Cantidad(),3);
	//struct_aux.dolares = obj_calculadora->Ver_Cantidad();
	str_grilla<<struct_aux.dolares;
	grilla_historial->SetCellValue(cont_grilla,1,str_grilla);
	str_grilla.Clear();
	///Cotizacion
	struct_aux.cotizacion = this->Acortar_decimales(obj_calculadora->Ver_cotizacion(),2);
	//struct_aux.cotizacion = obj_calculadora->Ver_cotizacion();
	str_grilla<<struct_aux.cotizacion;
	grilla_historial->SetCellValue(cont_grilla,2,str_grilla);
	str_grilla.Clear();
	
	cont_grilla++;
	
	m_arreglo.push_back(struct_aux);
}
void m_framecito::button_cambiarValor( wxCommandEvent& event )  {

	ventana_config = new m_framecito2(obj_calculadora,this);
	ventana_config -> Show();
}
void m_framecito::boton_exportar_txt( wxCommandEvent& event )  {
	
	
	
	
	if(m_arreglo.size()!=0){
		
		string dire = string(directorio_importacion);
			
		ofstream archi(dire	,ios::trunc);
		
		for(size_t i=0 ; i<m_arreglo.size() ; ++i){
			archi <<i + 1 << ": " << m_arreglo[i].pesos <<" ARS = "<<m_arreglo[i].dolares<<" USD. Cotizacion: 1 usd = "<<m_arreglo[i].cotizacion<<" ARS."<<endl;
		}
		archi<<"ig: marcossbrac.";
		wxMessageBox("Se exportó el historial","Successfully");
		archi.close();
		
	}
	
	
	
	
	
}

void m_framecito::boton_destino( wxFileDirPickerEvent& event )  {
	wxString str_directorio = m_dirPicker1 -> GetPath();
	str_directorio = str_directorio+"\\"+"historial.txt";
	
	
	directorio_importacion = str_directorio;
	
}

void m_framecito::Click_visitarIG( wxCommandEvent& event )  {
	ShellExecute(NULL, L"open", L"https://www.instagram.com/marcossbrac/",NULL,NULL,SW_SHOWNORMAL);
}
string m_framecito::Acortar_decimales(float valor, int cant){
	string aux = to_string(valor);
	
	size_t pos=aux.find('.');
	aux.erase(pos+cant+1);
	return aux;
}


m_framecito::~m_framecito() {
	
}
