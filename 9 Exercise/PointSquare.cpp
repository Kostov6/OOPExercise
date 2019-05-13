#include "stdafx.h"
#include "PointSquare.h"


PointSquare::PointSquare() : center(0,0) , sideLenght(0) , PointShape()
{
	setName("");
}

PointSquare::PointSquare(Point center, float sideLenght, const char * name)
	: center(center) , sideLenght(sideLenght)
{
	setName(name);
	pointCount = 4;
	points = new Point[4];
	//gorna lqva tochka
	points[0].x = center.x - sideLenght / 2;
	points[0].y = center.y - sideLenght / 2;
	//gorna dqsna tochka
	points[1].x = center.x + sideLenght / 2;
	points[1].y = center.y - sideLenght / 2;
	//dolna lqva tochka
	points[3].x = center.x - sideLenght / 2;
	points[3].y = center.y + sideLenght / 2;
	//dolnq dqsna tochka
	points[3].x = center.x + sideLenght / 2;
	points[3].y = center.y + sideLenght / 2;
}

PointSquare::PointSquare(const PointSquare & cpy)
	: center(cpy.center), sideLenght(cpy.sideLenght), PointShape(cpy)//,Q(cpy)
{
	setName(cpy.name);
}

PointSquare & PointSquare::operator=(const PointSquare & cpy)
{
	if (this != &cpy)
	{
		center = cpy.center;
		sideLenght = cpy.sideLenght;
		setName(cpy.name);
		PointShape::operator=(cpy);
		//Q::operator=(cpy);
	}
	return *this;
}


PointSquare::~PointSquare()
{
	delete[] name;
}
