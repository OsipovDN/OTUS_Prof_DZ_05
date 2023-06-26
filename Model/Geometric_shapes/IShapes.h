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
public:
	Triangle() {};
	void showShape()const override { std::cout << "Triangle" << std::endl; }
	~Triangle()override = default;
};

class Square :public IShapes {
public:
	Square()  {};
	void showShape()const override { std::cout << "Square" << std::endl; }
	~Square()override = default;
};

class Circle :public IShapes {
public:
	Circle() {};
	void showShape()const override { std::cout << "Circle" << std::endl; }
	~Circle()override = default;
};