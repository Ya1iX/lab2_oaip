/*
Квадрат. Разработать параметрические конструкторы задающие объект двумя различными способами. Разработать методы: вычисления площади фигуры; вычисления периметра фигуры; 
поворота фигуры на заданный угол относительно начала координат.
*/

#include <iostream>
#include <cmath>
#include <cstring>
#include "MyClasses.h"
#include "MyFuncs.h"

using namespace std;

int main()
{
	char in[] = "Points.txt";
	char out[] = "Result.txt";
	Point pnts[2];
	ReadPointsFile(in, pnts);
	Square sq1(pnts[0], pnts[1]);
	printf("Square:\nCoords: A(%.1f, %.1f); B(%.1f, %.1f); C(%.1f, %.1f); D(%.1f, %.1f)\n", sq1.GetA().GetX(), sq1.GetA().GetY(), sq1.GetB().GetX(), sq1.GetB().GetY(), sq1.GetC().GetX(), sq1.GetC().GetY(), sq1.GetD().GetX(), sq1.GetD().GetY());
	printf("Area: %f\nPerimeter: %f\n", sq1.FindArea(), sq1.FindPerimeter());
	sq1.Rotate(90);
	printf("Coords after 90 degree rotation: A(%.1f, %.1f); B(%.1f, %.1f); C(%.1f, %.1f); D(%.1f, %.1f)\n", sq1.GetA().GetX(), sq1.GetA().GetY(), sq1.GetB().GetX(), sq1.GetB().GetY(), sq1.GetC().GetX(), sq1.GetC().GetY(), sq1.GetD().GetX(), sq1.GetD().GetY());
	SaveResults(out, sq1);
	cout << "Result was saved in " << out << endl;
	system("pause");
}