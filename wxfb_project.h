///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/grid.h>
#include <wx/filepicker.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Framecito
///////////////////////////////////////////////////////////////////////////////
class Framecito : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_valorentrada;
		wxStaticBitmap* m_bitmap1;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_valorsalida;
		wxBitmapButton* m_button;
		wxButton* boton_cambiarValor;
		wxStaticText* m_staticText7;
		wxGrid* grilla_historial;
		wxButton* botonExp;
		wxDirPickerCtrl* m_dirPicker1;
		wxBitmapButton* visitarIG;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickConvertir( wxCommandEvent& event ) { event.Skip(); }
		virtual void button_cambiarValor( wxCommandEvent& event ) { event.Skip(); }
		virtual void boton_exportar_txt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boton_destino( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void Click_visitarIG( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Framecito( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Conversor ARS-USD"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 651,463 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Framecito();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Framecito2
///////////////////////////////////////////////////////////////////////////////
class Framecito2 : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* texto_valor_actual;
		wxStaticText* m_staticText4;
		wxTextCtrl* texto_valor_nuevo;
		wxButton* m_button3;
		wxButton* m_button4;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Boton_guardar_f2( wxCommandEvent& event ) { event.Skip(); }
		virtual void Boton_cerrar_f2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Framecito2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Configuracion"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,150 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Framecito2();
	
};

#endif //__WXFB_PROJECT_H__
