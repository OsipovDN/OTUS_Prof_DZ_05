/*! \file
	\brief ������������ ���� ModelEditor.h
	\details ���� �������� ���������� ������ ������ ���������� editor
*/
/*!
	\defgroup Model
	\brief ������ ������ �������� ������� MVC
	\details ������ ������ ������������ ��� ������������ ������ ������ ����������
*/
///@{
#pragma once
#include "IShapes.h"
#include <vector>
/*! \brief ������ "ModelEdit"- ����������� ��������

	����� �������� �������� ����� � ������� �������������� �����.
*/
class ModelEdit {
private:
	std::vector<std::shared_ptr<IShapes>> pul_fig;	///< ���� ������ ���������� ��� ������������ �������������� ������
public:
	/*! ����� ��� ���������� ������ ��������������� ���������.
		\param tp ������������ ��������������� ���������
		\return �� ����� ������������� ��������.
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
	/*! ����� ��� �������� ��������������� ���������.
		\param  ������ ���������� ��������� 
		\return �� ����� ������������� ��������.
	*/
	void removeShape(int&) {};
	/*! ����� ��������������� ������ ��� ����������� �������������� ����������.
		\return �� ����� ������������� ��������.
	*/
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
		std::cout << std::endl;
	}
	/*! ����� ��������������� ������ ���������� � �����.
		\return ������ ���������� �� ������� �������������� �����.
	*/
	std::vector<std::shared_ptr<IShapes>> getDate() { return pul_fig; }
	/*! ����� ��������������� ������ ���������� � �����.
		\return �� ����� ������������� ��������.
	*/
	void setDate (/*std::vector<std::shared_ptr<IShapes>>*/){}
};
///@}