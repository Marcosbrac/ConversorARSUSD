#include "m_framecito2.h"
#include "Calculadora.h"
#include <wx/msgdlg.h>
#include <wx/valtext.h>

m_framecito2::m_framecito2(Calculadora *obj_calculadora,wxWindow *parent) : Framecito2(parent) {
	
	obj_calculadora_f2 = obj_calculadora;
	
	wxString aux;
	aux<<"1 USD= "<<(obj_calculadora_f2->Ver_cotizacion());
	texto_valor_actual -> SetValue(aux);
	//filtro numerico
	wxTextValidator vali(wxFILTER_NUMERIC);
	texto_valor_nuevo->SetValidator(vali);
	
}

m_framecito2::~m_framecito2() {
	
}

void m_framecito2::Boton_guardar_f2( wxCommandEvent& event )  {
	
	
	double value;
	texto_valor_nuevo->GetValue().ToDouble(&value);
	if(value==0 || value<1){
		wxMessageBox("El valor no puede ser cero o negativo", "ERROR");
	}else{
		
		obj_calculadora_f2->Cambiar_cotizacion(float(value));
		wxString aux;
		aux<<"1 USD= "<<(obj_calculadora_f2->Ver_cotizacion());
		texto_valor_actual -> SetValue(aux);
		
		obj_manejo.guardar_cotizacion(float(value));
	}
}

void m_framecito2::Boton_cerrar_f2( wxCommandEvent& event )  {
	this->Close();
}

