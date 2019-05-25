#include "Button.h"
Button::Button(std::string _name, double _w, double _l, int _m, Vector _pos, double _r, double _g, double _b)
{
	position = _pos;
	name = _name;
	width = _w;
	length = _l;
	mod = _m;
	r = _r;
	g = _g;
	b = _b;

};
double Button::get_width()
{
	return width;
};
double Button::get_length()
{
	return length;
};
int Button::get_mod()
{
	return mod;
};
std::string Button::get_name()
{
	return name;
};
Vector Button::get_position()
{
	return position;
};
