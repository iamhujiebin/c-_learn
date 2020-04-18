#pragma once
class Shape
{
public:
	int weight;
	int height;
	Shape(int, int);
	virtual int area() =0;
};

class Rectangle :public Shape
{
public:
	Rectangle(int w, int h) :Shape(w, h) {}
	int area();
};

class Triangle :public Shape
{
public:
	Triangle(int w, int h) :Shape(w, h) {}
	int area();
};
