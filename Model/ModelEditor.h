/*! \file
	\brief header file ModelEditor.h
	\details The file contains the implementation of the business logic of the editor application
*/
/*!
	\defgroup Model
	\brief this module is an MVC Model
	\details this module is designed to form the business logic of the application
*/
///@{
#pragma once
#include "IShapes.h"
#include <vector>
#include <memory>
/*! \brief The "ModelEdit" class is a graphic editor

	The class contains a description of fields and methods of geometric shapes.
*/
class ModelEdit {
private:
	std::vector<std::shared_ptr<IShapes>> pul_fig;	///< Vector field containing all displayed geometric shapes
public:
	/*! A method for adding a new geometric primitive.
		\param tp name of the geometric primitive
		\return has no return value.
	*/
	void addShape(std::string tp) {
		if (tp == "Triangle") {
			pul_fig.push_back(std::make_shared<Triangle>());
		}
		else if (tp == "Square") {
			pul_fig.push_back(std::make_shared <Square>());
		}
		else if (tp == "Circle") {
			pul_fig.push_back(std::make_shared<Circle>());
		}
	}
	/*! A method for removing a geometric primitive.
		\param  index of the primitive being deleted
		\return has no return value.
	*/
	void removeShape(int&) {};
	/*! A method that provides data for displaying geometric primitives.
		\return has no return value.
	*/
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
		std::cout << std::endl;
	}
	/*! A method that provides save data in a file.
		\return vector of pointers to objects of geometric shapes.
	*/
	std::vector<std::shared_ptr<IShapes>> getDate() { return pul_fig; }
	/*! A method that provides save data in a file.
		\return has no return value.
	*/
	void setDate (/*std::vector<std::shared_ptr<IShapes>>*/){}
};
///@}