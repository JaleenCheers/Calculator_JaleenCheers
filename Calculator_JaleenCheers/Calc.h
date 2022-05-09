#pragma once 
#include "wx/wx.h"
#include "Main.h"
class Calc : public wxApp
{
public:
	Calc();
	~Calc();
	virtual bool OnInit(); 
private:
	Main* m_frame1 = nullptr;


};

