#pragma once
#include <iostream>
#include <memory>
#include <utility>

using Point = std::pair<int, int>;

class IShapes {
public:
	virtual void showShape() const = 0;
	virtual ~IShapes() = default;
};


class Triangle :public IShapes {
private:
	Point _a;
	Point _b;
	Point _c;
public:
	Triangle(Point a, Point b, Point c) :_a(a), _b(b), _c(c) {};
	void showShape()const override { std::cout << "Triangle" << std::endl; }

	~Triangle()override = default;
};

class Square :public IShapes {
private:
	Point _a;
	int sidelengh;
public:
	Square(Point a, int l) :_a(a), sidelengh(l) {};

	void showShape()const override { std::cout << "Square" << std::endl; }
	~Square()override = default;
};

class Circle :public IShapes {
private:
	Point _a;
	int radius;
public:
	Circle(Point a, int r) :_a(a), radius(r) {};

	void showShape()const override { std::cout << "Circle" << std::endl; }
	~Circle()override = default;
};