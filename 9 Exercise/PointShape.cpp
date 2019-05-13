#include "stdafx.h"
#include "PointShape.h"
#include <math.h>

float PointShape::dist(const Point & A, const Point & B) const
{
	return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
}

PointShape::PointShape() : pointCount(0),points(nullptr)
{
}

PointShape::PointShape(const PointShape & cpy) : pointCount(cpy.pointCount)
{
	points = new Point[pointCount];
	for (int i = 0; i < pointCount; i++)
	{
		points[i] = cpy.points[i];
	}
}

PointShape & PointShape::operator=(const PointShape & cpy)
{
	if (this != &cpy)
	{
		//iztrivane na stara pamet
		delete[] points;
		//copirane na promenlivi
		pointCount = cpy.pointCount;
		//zadelqne na nova pamet
		points = new Point[pointCount];
		//deep copy
		for (int i = 0; i < pointCount; i++)
		{
			points[i] = cpy.points[i];
		}
	}
	return *this;
}

float PointShape::getPerimeter() const
{
	int perimeter = 0;
	//0-1 1-2 2-3...... pointCount-2 - pointCount -1
	for (int i = 0; i < pointCount; i++)
	{
		perimeter += dist(points[i], points[i + 1]);
	}
	//0 - pointCount - 1 
	perimeter += dist(points[0], points[pointCount - 1]);
	return perimeter;
}


PointShape::~PointShape()
{
	delete[] points;
}
