/*! \file
	\brief ������������ ���� SLManager.h
	\details ���� �������� ���������� ������� �������� � ���������� ������ ������ � ����.
*/
/*!
	\defgroup Service
	\ingroup Controller
	\brief ������ ������ ������������ ��� �������������� ������ � �������.
*/
///@{
#pragma once
#include "ModelEditor.h"
/*! \brief ��������� ������ "Save/Load Manager".

	����� ��������� ������ ���������� � �������� ������ �� ������ �/�� ����(�).
*/
class SLManager {
private:
	std::shared_ptr<ModelEdit> Mod;	///< ��������� �� ������ ������.
public:
	/*!����������� ������ ��� ������������ ������� ������������������ � �������.
		
		\param md ��������� �� ������ ������.
		
	*/
	SLManager(std::shared_ptr<ModelEdit> md) {
		Mod = md;
	}
	/*! ����� ��������������� ������ ���������� � �����.
		\param filename ��� ����� ��� �������.
		\return ������ �������� (true- ������ ������).
	*/
	bool importFromFile(std::string filename) {
		//...
		Mod->setDate();
	}
	/*! ����� ��������������� ������ ���������� � �����.
		\param filename ��� ����� ��� ��������.
		\return ������ �������� (true- ������� ������).
	*/
	bool exportToFile(std::string filename) {
		//...
		Mod->getDate();
	}
};
///@}
