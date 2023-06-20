#pragma once
#include <memory>
#include <utility>

class IShapes{
public:
	virtual void setColor() = 0;
	virtual int getColor() = 0;
	virtual int getArea() = 0;
	virtual int getPerimeter() = 0;
	virtual ~IShapes() = 0;
};

class Triangle :public IShapes {
public:
	Triangle() {};

	void setColor()override();
	int getColor() override();
	int getArea() override();
	int getPerimeter() override();

	~Triangle()override = default;
};

class Square :public IShapes {
public:
	Square() {};

	void setColor()override();
	int getColor() override();
	int getArea() override();
	int getPerimeter() override();

	~Square()override = default;
};