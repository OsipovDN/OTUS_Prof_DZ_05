/*! \file
	\brief header file SLManager.h
	\details The file contains the implementation of methods for loading and saving model data to a file.
*/
/*!
	\defgroup Service
	\ingroup Controller
	\brief this module is designed for the interaction of the model with files.
*/
///@{
#pragma once
#include "ModelEditor.h"
#include <iostream>
#include <memory>
/*! \brief Class Interface "Save/Load Manager".

	The class describes methods for saving and loading data from a model to/from a file.
*/
class SLManager {
private:
	std::shared_ptr<ModelEdit> Mod;	///< a pointer to the model object.
public:
	/*!Constructor of a class for forming an object interacting with the model.
		
		\param md a pointer to the model object.
		
	*/
	SLManager(std::shared_ptr<ModelEdit> md) {
		Mod = md;
	}
	/*! A method that provides save data in a file.
		\param filename the name of the file to import.
		\return boolean value (true- import was successful).
	*/
	bool importFromFile(std::string filename) {
		//...
		Mod->setDate(filename);
	}
	/*! A method that provides save data in a file.
		\param filename the name of the file to export.
		\return boolean value (true- export was successful).
	*/
	bool exportToFile(std::string filename) {
		//...
		Mod->getDate(filename);
	}
};
///@}
