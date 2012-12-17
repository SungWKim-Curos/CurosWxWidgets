#pragma once


class MyApp
	: public wxApp
{
public:
	MyApp() ;
	~MyApp() ;
	
	
// wxWidgets Overriden
protected:
	bool OnInit() ;
};
