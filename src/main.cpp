#include "Pixel.h"
#include <iostream>


int main()
{
	Pixel p1(' '); 
	Pixel p2(char(176));
	Pixel p3(char(219));
	
	std::cout << p1 << ' @ ' << p2 << '\n';
	std::cout << (p1 & p2) << '\n';
	p1 &= p2;
	std::cout << (p1);


	return 0;

}