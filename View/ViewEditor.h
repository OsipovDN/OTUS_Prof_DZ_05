/*! \file
	\brief header file ViewEditor.h
	\details The file contains the implementation of the display of geometric shapes located in the model
*/
/*!
	\defgroup View
	\brief this module is designed to display geometric shapes
*/
///@{
#pragma once
#include "ModelEditor.h"
/*! \brief View class for console output

	Displays the changes made by the user through the Controller interface
*/
class ViewEdit {
private:
	std::shared_ptr<ModelEdit> Mod;	///< Pointer to the model object
public:
	/*! Constructor for forming the View object
		\param md pointer to the model object
	*/
	ViewEdit(std::shared_ptr<ModelEdit> md) {
		Mod = md;
	};
	/*! Method for updating the display
		
		The method is used to update the display data in case the model changes.
		The display update is started via the Controller module.
		\return has no return value
	*/
	void update() {
		Mod->getFig();
	};
};
///@}