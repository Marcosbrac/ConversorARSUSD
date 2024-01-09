///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

Framecito::Framecito( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Ingrese monto en pesos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer71->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_valorentrada = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_valorentrada, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("resources/arrow.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_bitmap1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Conversión a dólar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer71->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_valorsalida = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_valorsalida->Enable( false );
	
	bSizer71->Add( m_valorsalida, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_button = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("resources/boton_conv.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer71->Add( m_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	boton_cambiarValor = new wxButton( this, wxID_ANY, wxT("Ver/Cambiar cotizacion"), wxPoint( -1,-1 ), wxSize( 200,30 ), 0 );
	boton_cambiarValor->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer9->Add( boton_cambiarValor, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 4 );
	
	
	bSizer71->Add( bSizer9, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer7->Add( bSizer71, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer8->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	grilla_historial = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla_historial->CreateGrid( 0, 3 );
	grilla_historial->EnableEditing( false );
	grilla_historial->EnableGridLines( true );
	grilla_historial->SetGridLineColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	grilla_historial->EnableDragGridSize( false );
	grilla_historial->SetMargins( 0, 0 );
	
	// Columns
	grilla_historial->SetColSize( 0, 70 );
	grilla_historial->SetColSize( 1, 70 );
	grilla_historial->SetColSize( 2, 90 );
	grilla_historial->EnableDragColMove( false );
	grilla_historial->EnableDragColSize( true );
	grilla_historial->SetColLabelSize( 30 );
	grilla_historial->SetColLabelValue( 0, wxT("ARS") );
	grilla_historial->SetColLabelValue( 1, wxT("USD") );
	grilla_historial->SetColLabelValue( 2, wxT("Cotizacion") );
	grilla_historial->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla_historial->EnableDragRowSize( true );
	grilla_historial->SetRowLabelSize( 50 );
	grilla_historial->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	grilla_historial->SetLabelBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	
	// Cell Defaults
	grilla_historial->SetDefaultCellBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	grilla_historial->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer8->Add( grilla_historial, 1, wxALL, 5 );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	botonExp = new wxButton( this, wxID_ANY, wxT("Exportar a .txt"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( botonExp, 0, wxALL, 5 );
	
	m_dirPicker1 = new wxDirPickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Selecciona el destino papito dale"), wxDefaultPosition, wxDefaultSize, wxDIRP_SMALL );
	bSizer91->Add( m_dirPicker1, 0, wxALL, 5 );
	
	
	bSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	
	visitarIG = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("resources/ig.png"), wxBITMAP_TYPE_ANY ), wxPoint( -1,-1 ), wxDefaultSize, wxBU_AUTODRAW );
	visitarIG->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	bSizer91->Add( visitarIG, 0, wxALIGN_BOTTOM|wxALL, 5 );
	
	
	bSizer8->Add( bSizer91, 0, wxEXPAND, 5 );
	
	
	bSizer7->Add( bSizer8, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::ClickConvertir ), NULL, this );
	boton_cambiarValor->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::button_cambiarValor ), NULL, this );
	botonExp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::boton_exportar_txt ), NULL, this );
	m_dirPicker1->Connect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( Framecito::boton_destino ), NULL, this );
	visitarIG->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::Click_visitarIG ), NULL, this );
}

Framecito::~Framecito()
{
	// Disconnect Events
	m_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::ClickConvertir ), NULL, this );
	boton_cambiarValor->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::button_cambiarValor ), NULL, this );
	botonExp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::boton_exportar_txt ), NULL, this );
	m_dirPicker1->Disconnect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( Framecito::boton_destino ), NULL, this );
	visitarIG->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito::Click_visitarIG ), NULL, this );
	
}

Framecito2::Framecito2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 300,150 ), wxSize( 300,150 ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Cotizacion Actual"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer3->Add( m_staticText3, 0, wxALL, 5 );
	
	texto_valor_actual = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	texto_valor_actual->Enable( false );
	
	bSizer3->Add( texto_valor_actual, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer3, 0, 0, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Cotizacion nueva"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer4->Add( m_staticText4, 0, wxALL, 5 );
	
	texto_valor_nuevo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( texto_valor_nuevo, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer4, 0, 0, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("Guardar cambios"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer5->Add( m_button3, 0, wxALL, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button4->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	
	bSizer5->Add( m_button4, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito2::Boton_guardar_f2 ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito2::Boton_cerrar_f2 ), NULL, this );
}

Framecito2::~Framecito2()
{
	// Disconnect Events
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito2::Boton_guardar_f2 ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Framecito2::Boton_cerrar_f2 ), NULL, this );
	
}
