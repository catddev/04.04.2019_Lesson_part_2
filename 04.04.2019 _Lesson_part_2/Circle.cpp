#include"Circle.h"
//в принципе если классы маленькие, то можно без .CPP все в заголовочных записать


Circle::Circle(const Circle & obj)
{
	R = obj.R;
	center.setX(obj.center.getX()); //ERROR: center.x; because x and y are PRIVATE for another class
	center.setY(obj.center.getY());
}

void Circle::setR(double R)
{
	this->R = R;
}

double Circle::getR()
{
	return R;
}

void Circle::move(double x, double y)
{
	center.setX(center.getX() + x);
	center.setY(center.getY() + y);
}

void Circle::changeRadius(double value)
{
	R += value;
}

double Circle::len()
{
	double len = 2 * pi*R;
	return len;
}

bool Circle::isEqual(Circle obj)
{
	if (R == obj.R) {
		cout << "Circles are equal" << endl;
		return true;
	}
	else {
		cout << "Circles are diffenrent" << endl;
		return false;
	}
}

void Circle::print()
{
	cout << "(" << center.getX() << ", " << center.getY() << "); " << "R=" << R << endl;
}
