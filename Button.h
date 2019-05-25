#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED
#include <string>
#include "Vector.h"
class Button
{
protected:
	std::string name;
	double width;
	double length;
	int mod;
	Vector position;
	double r;
	double g;
	double b;
public:
	Button(std::string _name, double _w, double _l, int _m, Vector _pos, double _r, double _g, double _b);
	std::string get_name();
	Vector get_position();
	double get_width();
	double get_length();
	int get_mod();
};
#endif