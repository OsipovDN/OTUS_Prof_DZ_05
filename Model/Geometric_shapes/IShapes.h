/*! \file
	\brief header file

	The file contains a description of the classes of the simplest geometric shapes and their interface.
*/
/*!
	\defgroup Shapes
	\ingroup Model
	\brief this module is designed to implement the interface of geometric shapes
*/
///@{
#pragma once
#include <iostream>
/*! \brief Interface of the "Shape" class

	The class is an interface for describing fields and methods of geometric shapes.
*/

class IShapes {
public:
	/*! \brief Virtual Interface method

		A purely virtual method of the interface class that provides data for mapping a
	*/
	virtual void showShape() const = 0;
	/// \brief Virtual Interface Destructor
	virtual ~IShapes() = default;
};

/*! \brief The "Triangle" class

	The class contains methods for interacting with the geometric shape "Triangle".
*/
class Triangle :public IShapes {
public:
	/*! \brief Constructor of the "Triangle" class

		Initializes class fields (coordinates, etc.), if any.
	*/
	Triangle() {};
	/*! A constant redefined method for displaying class field data and providing them to the View.
		\return has no return value.
	*/
	void showShape()const override { std::cout << "Triangle" << std::endl; }
	/// \brief Virtual Interface Destructor
	~Triangle()override = default;
};
/*! \brief The "Square" class

	The class contains methods for interacting with the geometric figure "Square".
*/
class Square :public IShapes {
public:
	/*! \brief Constructor of the "Square" class

		Initializes class fields (coordinates, etc.), if any.
	*/
	Square()  {};
	/*! A constant redefined method for displaying class field data and providing them to the View.
		\return has no return value.
	*/
	void showShape()const override { std::cout << "Square" << std::endl; }
	/// \brief Virtual Interface Destructor
	~Square()override = default;
};
/*! \brief Circle class

	The class contains methods for interacting with the geometric shape "Circle".
*/
class Circle :public IShapes {
public:
	/*! \brief Constructor of the Circle class

		Initializes class fields (coordinates, etc.), if any.
	*/
	Circle() {};
	/*! A constant redefined method for displaying class field data and providing them to the View.
		\return has no return value.
	*/
	void showShape()const override { std::cout << "Circle" << std::endl; }
	/// \brief Virtual Interface Destructor
	~Circle()override = default;
};
///@}