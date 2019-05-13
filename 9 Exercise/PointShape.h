#pragma once

struct Point
{
	float x;
	float y;
	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	Point() {}
};

class PointShape
{
	float dist(const Point& A, const Point& B) const;
protected:
	int pointCount;
	Point* points;
public:
	PointShape();
	PointShape(const PointShape&);
	PointShape& operator=(const PointShape&);

	float getPerimeter() const;

	~PointShape();
};

