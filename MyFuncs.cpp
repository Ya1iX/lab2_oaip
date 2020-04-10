#define _CRT_SECURE_NO_WARNINGS

#include "MyFuncs.h"
#include "MyClasses.h"
#include <stdio.h>
#include <iostream>


using namespace std;

void ReadPointsFile(char* FN, Point* points)
{
	FILE* file;
	float coords[4];
	file = fopen(FN, "r");
	if (!file || feof(file))
	{
		cout << "File not found!" << endl;
		file = fopen(FN, "w");
		fclose(file);
		cout << "File " << FN << " was created! Please fill it." << endl << endl;
		system("pause");
		exit(1);
	}
	for (int i = 0; i < 4; i++)
	{
		fscanf(file, "%f", &coords[i]);
	}
	fclose(file);
	points[0].SetPoint(coords[0], coords[1]);
	points[1].SetPoint(coords[2], coords[3]);
}
void SaveResults(char* FN, Square sq)
{
	FILE* file;
	file = fopen(FN, "w");
	fprintf(file, "Square:\nCoords: A(%.1f, %.1f); B(%.1f, %.1f); C(%.1f, %.1f); D(%.1f, %.1f)\n", sq.GetA().GetX(), sq.GetA().GetY(), sq.GetB().GetX(), sq.GetB().GetY(), sq.GetC().GetX(), sq.GetC().GetY(), sq.GetD().GetX(), sq.GetD().GetY());
	fprintf(file, "Area: %f\nPerimeter: %f\n", sq.FindArea(), sq.FindPerimeter());
	sq.Rotate(90);
	fprintf(file, "Coords after 90 degree rotation: A(%.1f, %.1f); B(%.1f, %.1f); C(%.1f, %.1f); D(%.1f, %.1f)\n", sq.GetA().GetX(), sq.GetA().GetY(), sq.GetB().GetX(), sq.GetB().GetY(), sq.GetC().GetX(), sq.GetC().GetY(), sq.GetD().GetX(), sq.GetD().GetY());
	fclose(file);
}