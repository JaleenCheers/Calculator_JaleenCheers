#pragma once 
#include "wx/wx.h"
#include "Main.h"
class Calc : public wxApp
{
public:
	Calc();
	~Calc();
	bool OnInit(); // maybe make virtual??
private:
	Main* m_frame1 = nullptr;


};

