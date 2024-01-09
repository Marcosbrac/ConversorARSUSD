#ifndef M_FRAMECITO2_H
#define M_FRAMECITO2_H
#include "wxfb_project.h"
#include "Calculadora.h"
#include "Manejo_archivos.h"

class m_framecito2 : public Framecito2 {
	
private:
	Calculadora *obj_calculadora_f2;
	
	Manejo_archivos obj_manejo;
protected:
	void Boton_guardar_f2( wxCommandEvent& event )  override;
	void Boton_cerrar_f2( wxCommandEvent& event )  override;
	
public:
	m_framecito2(Calculadora *obj_calculadora, wxWindow *parent=NULL);
	~m_framecito2();
};

#endif

