#pragma once
#include "PointShape.h"
class PointSquare : public PointShape
{
	Point center;
	float sideLenght;
	char* name=nullptr;
public:
	PointSquare();
	PointSquare(Point center, float sideLenght, const char* name);
	PointSquare(const PointSquare& cpy);
	PointSquare& operator=(const PointSquare& cpy);
	~PointSquare();

	void setName(const char* name);
};

