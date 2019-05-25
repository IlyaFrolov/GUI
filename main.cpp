#include "Vector.h"
#include <iostream>
#include"Button.h"
#include <string>
int main()
{
	Vector a(1, 0);
	Vector b(0, 0);
	Vector c;
	std::string l("arf");
	Button bvv("abc", 10, 10, 1, a, 1, 1, 0);
	std::cout << bvv.get_position().gety();
	int i;
	std::cin >> i;
}