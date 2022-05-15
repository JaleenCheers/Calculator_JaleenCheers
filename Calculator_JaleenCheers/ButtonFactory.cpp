#include "ButtonFactory.h"




ButtonFactory::ButtonFactory()
{
	

}

ButtonFactory::~ButtonFactory()
{
}

wxButton* ButtonFactory::CreateButton(wxWindow* _window, unsigned int _id, const char* _label, wxPoint _point, wxSize _size)
{
	btn = new wxButton(_window, _id, _label, _point, _size);
	return btn;
}

