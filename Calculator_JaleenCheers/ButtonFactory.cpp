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

float ButtonFactory::GetValue(int _id)
{
	float value = NULL;
	switch (_id)
	{
	case 10004:
		value = 0;
	case 10018:
		value = 1;
	case 10013:
		value = 2;
	case 10008:
		value = 3;
	case 10017:
		value = 4;
	case 10012:
		value = 5;
	case 10007:
		value = 6;
	case 10016:
		value = 7;
	case 10011:
		value = 8;
	case 10006:
		value = 9;
	default:
		break;
	}
	return value;
}

