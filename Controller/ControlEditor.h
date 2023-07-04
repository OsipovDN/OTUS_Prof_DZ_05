/*! \file
	\brief header file ControlEditor.h
	\details The file contains an implementation of the Controller class of the MVC model
*/
/*!
	\defgroup Controller
	\brief this module is a Controller of the MVC model
*/
///@{
#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include "SLManager.h"
#include <memory>
/*! \brief Class "controlEdit"- Controller of the MVC model

	The class contains a description of fields and methods for user interaction with the graphical editor model and updating the display in the View class.
*/
class ControlEdit {
private:
	std::shared_ptr <ModelEdit> Edit;	///< pointer to the Model object (graphic editor).
	std::unique_ptr <ViewEdit> View;	///< pointer to the view object (graphical representation/display)
	std::unique_ptr <SLManager> Slm;	///< pointer to the Service object (service for working with files)
public:
	/// \brief Constructor of the class for object formation and initialization of fields.
	ControlEdit() {
		Edit = std::make_shared<ModelEdit>();
		View = std::make_unique<ViewEdit>(Edit);
		Slm = std::make_unique<SLManager>(Edit);
	};
	/*! \brief The method of adding a new shape.
		\details After adding a new object (geometric shape), the display of the View object is updated
		\param tp the type of shape being created
		\return has no return value.
	*/
	void AddFig(std::string tp) {
		Edit->addShape(tp);
		View->update();
	}
	/*! \brief Method of loading data to display from a file
		\details After loading the model data, the display of the View object is updated
		\param filename the name of the file to download the data.
		\return has no return value.
	*/
	void openFromFile(std::string filename) {
		Slm->importFromFile(filename);
		View->update();
	};
	/*! \brief Method for saving model data to a file.
		\details After saving the model data, the display of the View object is updated
		\param filename the name of the file to download the data.
		\return has no return value.
	*/
	void saveToFile(std::string filename) {
		Slm->exportToFile(filename);
		View->update();
	};

};
///@}
