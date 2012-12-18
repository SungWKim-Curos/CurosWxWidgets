#pragma once


class MyFrame
	: public wxFrame
{
public:
	MyFrame( const wxString& a_title, const wxPoint& a_pos, const wxSize& a_size ) ;
	~MyFrame() ;


// Message Handlers
	DECLARE_EVENT_TABLE()
	void OnQuit(wxCommandEvent& event);
};
