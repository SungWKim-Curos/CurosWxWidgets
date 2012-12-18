#include "stdafx.h"
#include "Constants.h"

// The Main Header
#include "MyFrame.h"



BEGIN_EVENT_TABLE( MyFrame, wxFrame )
	EVT_MENU( ID_Quit,  MyFrame::OnQuit )
END_EVENT_TABLE()



MyFrame::MyFrame( const wxString& a_title, const wxPoint& a_pos, const wxSize& a_size )
	: wxFrame( NULL, -1, a_title, a_pos, a_size )
{
	wxMenu* pMenuFile = new wxMenu;
	pMenuFile->Append( ID_Quit, _("E&xit") );

	wxMenuBar* pMenuBar = new wxMenuBar;
	pMenuBar->Append( pMenuFile, _("&File") );
	SetMenuBar( pMenuBar );

	CreateStatusBar() ;
	SetStatusText( _("Welcome to wxWidgets!") ) ;
}



MyFrame::~MyFrame()
{
}



void MyFrame::OnQuit( wxCommandEvent& WXUNUSED(event) )
{
    Close( true ) ;
}
