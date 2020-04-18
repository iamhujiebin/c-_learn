#include "Vitual.h"

Shape::Shape(int w, int h)
{
	this->weight = w;
	this->height = h;
}

int Rectangle::area()
{
	return this->weight * this->height;
}

int Triangle::area()
{
	return this->weight * this->height / 2;
}
