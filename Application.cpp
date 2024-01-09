#include <wx/image.h>
#include "Application.h"
#include "m_framecito.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	m_framecito *win = new m_framecito(NULL);
	win->Show();
	return true;
}

