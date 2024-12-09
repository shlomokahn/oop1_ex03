#include "Pixel.h"
#include "Pixel.h"
#include "Pixel.h"
#include "Pixel.h"
#include "Pixel.h"
#include "Pixel.h"
#include "Pixel.h"

#include "Pixel.h"

#include <iostream>
Pixel::Pixel(unsigned char pixel)
	:m_color(pixel)
{
}
bool Pixel::operator==(const Pixel& other) const
{
	return m_color == other.m_color;
}
bool Pixel::operator!=(const Pixel& other) const
{
	return m_color != other.m_color;
}
Pixel Pixel::operator|(const Pixel& other) const
{
	return Pixel(std::max(m_color, other.m_color));
}
void Pixel::operator|=(const Pixel& other)
{
	*this = *this | other;
}
Pixel Pixel::operator&(const Pixel& other) const
{
	return Pixel(std::min(m_color, other.m_color));
}
void Pixel::operator&=(const Pixel&)
{
	*this = *this & other;
}
std::ostream& operator<<(std::ostream& os, const Pixel& other)
{
	return os << other.m_color;
}