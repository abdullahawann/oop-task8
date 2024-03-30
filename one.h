class Shape
{
protected :

	int length,breath,height;

public:

	Shape(int l=8, int b=15, int h=20)
	{
	    length = l;
	    breath = b;
	    height = h;
	}
};

class Painting 
{
	int Cost;

public:

	int getCost(int c)
	{
		return c*3;
	}
};

class Square : protected Shape, public Painting
{
	int Area;

public:

	Square(int A=5)
	{
		Area=A;
	}

	int getArea()
	{
		Area =  length * length;

		return Area;
	}
};

class Rectangle: protected Shape,public Painting
{
	int Area;

public:

	int getArea()
	{
		Area = length * breath;
		return Area;
	}
};

class Triangle: protected Shape,public Painting
{
	int Area;

public:

	int getArea()
	{
		Area = (height * breath) / 2;
		return Area;
	}
};