#pragma once

class Point
{
private:
	double x, y;
public:
	Point();
	Point(double x, double y);
	void SetPoint(double x, double y);
	double GetX();
	double GetY();
};

class Square
{
private:
	Point a, b, c, d;
	double side = 0;
public:
	Square();
	Square(Point a, Point c);
	Square(Point a, double side);
	void SetSquare(Point a, Point c);
	Point GetA();
	Point GetB();
	Point GetC();
	Point GetD();
	double FindArea();
	double FindPerimeter();
	void Rotate(double alpha);
};