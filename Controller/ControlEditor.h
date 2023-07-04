/*! \file
	\brief Заголовочный файл ControlEditor.h
	\details Файл содержит реализацию класса Controller модели MVC
*/
/*!
	\defgroup Controller
	\brief данный модуль является Контроллером модели MVC
*/
///@{
#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include "SLManager.h"
#include <memory>
/*! \brief Класса "ControlEdit"- Контроллер модели MVC

	Класс содержит описание полей и методов для взаимодействия пользователя с моделью графического редактора и обновлени отображения в классе View.
*/
class ControlEdit {
private:
	std::shared_ptr <ModelEdit> Edit;	///< указатель на объект Model (графического редактора).
	std::unique_ptr <ViewEdit> View;	///< указатель на объект view (графическое представление/отображение)
	std::unique_ptr <SLManager> Slm;	///< указатель на объект Service(сервис для работы с файлами)
public:
	/// \brief Конструктор класса для формирования объекта и инициализации полей.
	ControlEdit() {
		Edit = std::make_shared<ModelEdit>();
		View = std::make_unique<ViewEdit>(Edit);
		Slm = std::make_unique<SLManager>(Edit);
	};
	/*! \brief Метод добавления новой фигуры.
		\details После добавления нового объекта (геометричекой фигуры) производится обновление отображения объекта View
		\param tp тип создоваемой фигуры
		\return не имеет возвращаемого значения.
	*/
	void AddFig(std::string tp) {
		Edit->addShape(tp);
		View->update();
	}
	/*! \brief Метод загрузки данных для отображения из файла
		\details После загрузки данных модели производится обновление отображения объекта View
		\param filename имя файла для загрузки данных.
		\return не имеет возвращаемого значения.
	*/
	void openFromFile(std::string filename) {
		Slm->importFromFile(filename);
		View->update();
	};
	/*! \brief Метод сохранения данных модели в файл.
		\details После зсохранения данных модели производится обновление отображения объекта View
		\param filename имя файла для загрузки данных.
		\return не имеет возвращаемого значения.
	*/
	void saveToFile(std::string filename) {
		Slm->exportToFile(filename);
		View->update();
	};

};
///@}
