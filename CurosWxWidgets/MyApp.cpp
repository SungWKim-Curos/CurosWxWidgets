#include "stdafx.h"

// The Main Header
#include "MyApp.h"

// Relevant Headers
#include "MyFrame.h"



IMPLEMENT_APP(MyApp)



MyApp::MyApp()
{
}



MyApp::~MyApp()
{
}



bool MyApp::OnInit()
{
    MyFrame* pFrame = new MyFrame( _("Hello World"), wxPoint(50, 50), wxSize(450, 340) );
    pFrame->Show( true ) ;
    SetTopWindow( pFrame ) ;
    return true ;
}