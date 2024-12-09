#pragma once
#include <iosfwd>

class Pixel
{
public:
	Pixel(unsigned char pixel = ' ');
	friend std::ostream& operator<<(std::ostream& os, const Pixel& other);
	bool operator==(const Pixel&) const;
	bool operator!=(const Pixel&) const;
	Pixel operator|(const Pixel&) const;
	void operator|=(const Pixel&);
	Pixel operator&(const Pixel&) const;
	void operator&=(const Pixel&);



private:
	unsigned char m_color;
};