/*! \file
	\brief Заголовочный файл ModelEditor.h
	\details Файл содержит реализацию бизнес логики приложения editor
*/
/*!
	\defgroup Model
	\brief данный модуль является Моделью MVC
	\details данный модуль предназначен для формирования бизнес логики приложения
*/
///@{
#pragma once
#include "IShapes.h"
#include <vector>
/*! \brief Класса "ModelEdit"- Графический редактор

	Класс содержит описание полей и методов геометрических фигур.
*/
class ModelEdit {
private:
	std::vector<std::shared_ptr<IShapes>> pul_fig;	///< Поле вектор содержащее все отображаемые геометрические фигуры
public:
	/*! Метод для добавления нового геометрического приметива.
		\param tp наименование геометрического примитива
		\return не имеет возвращаемого значения.
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
	/*! Метод для удаления геометрического приметива.
		\param  индекс удаляемого примитива 
		\return не имеет возвращаемого значения.
	*/
	void removeShape(int&) {};
	/*! Метод предоставляющий данные для отображения геометрических примитивов.
		\return не имеет возвращаемого значения.
	*/
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
		std::cout << std::endl;
	}
	/*! Метод предоставляющий данные сохранения в файле.
		\return вектор указателей на объекты геометрических фигур.
	*/
	std::vector<std::shared_ptr<IShapes>> getDate() { return pul_fig; }
	/*! Метод предоставляющий данные сохранения в файле.
		\return не имеет возвращаемого значения.
	*/
	void setDate (/*std::vector<std::shared_ptr<IShapes>>*/){}
};
///@}