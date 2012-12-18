#include "stdafx.h"

// The Main Header
#include "MyFrame.h"



MyFrame::MyFrame( const wxString& a_title, const wxPoint& a_pos, const wxSize& a_size )
	: wxFrame( NULL, -1, a_title, a_pos, a_size )
{
	CreateStatusBar() ;
	SetStatusText( _("Welcome to wxWidgets!") ) ;
}



MyFrame::~MyFrame()
{
}
