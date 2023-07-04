/*! \file
	\brief ������������ ���� ControlEditor.h
	\details ���� �������� ���������� ������ Controller ������ MVC
*/
/*!
	\defgroup Controller
	\brief ������ ������ �������� ������������ ������ MVC
*/
///@{
#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include "SLManager.h"
#include <memory>
/*! \brief ������ "ControlEdit"- ���������� ������ MVC

	����� �������� �������� ����� � ������� ��� �������������� ������������ � ������� ������������ ��������� � ��������� ����������� � ������ View.
*/
class ControlEdit {
private:
	std::shared_ptr <ModelEdit> Edit;	///< ��������� �� ������ Model (������������ ���������).
	std::unique_ptr <ViewEdit> View;	///< ��������� �� ������ view (����������� �������������/�����������)
	std::unique_ptr <SLManager> Slm;	///< ��������� �� ������ Service(������ ��� ������ � �������)
public:
	/// \brief ����������� ������ ��� ������������ ������� � ������������� �����.
	ControlEdit() {
		Edit = std::make_shared<ModelEdit>();
		View = std::make_unique<ViewEdit>(Edit);
		Slm = std::make_unique<SLManager>(Edit);
	};
	/*! \brief ����� ���������� ����� ������.
		\details ����� ���������� ������ ������� (������������� ������) ������������ ���������� ����������� ������� View
		\param tp ��� ����������� ������
		\return �� ����� ������������� ��������.
	*/
	void AddFig(std::string tp) {
		Edit->addShape(tp);
		View->update();
	}
	/*! \brief ����� �������� ������ ��� ����������� �� �����
		\details ����� �������� ������ ������ ������������ ���������� ����������� ������� View
		\param filename ��� ����� ��� �������� ������.
		\return �� ����� ������������� ��������.
	*/
	void openFromFile(std::string filename) {
		Slm->importFromFile(filename);
		View->update();
	};
	/*! \brief ����� ���������� ������ ������ � ����.
		\details ����� ����������� ������ ������ ������������ ���������� ����������� ������� View
		\param filename ��� ����� ��� �������� ������.
		\return �� ����� ������������� ��������.
	*/
	void saveToFile(std::string filename) {
		Slm->exportToFile(filename);
		View->update();
	};

};
///@}
