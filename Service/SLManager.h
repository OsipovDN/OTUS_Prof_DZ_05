/*! \file
	\brief Заголовочный файл SLManager.h
	\details Файл содержит реализацию методов загрузки и сохранения данных модели в файл.
*/
/*!
	\defgroup Service
	\ingroup Controller
	\brief данный модуль предназначен для взаимодействия модели с файлами.
*/
///@{
#pragma once
#include "ModelEditor.h"
/*! \brief Интерфейс класса "Save/Load Manager".

	Класс описывает методы сохранения и загрузки данных из модели в/из файл(а).
*/
class SLManager {
private:
	std::shared_ptr<ModelEdit> Mod;	///< указатель на объект модели.
public:
	/*!Конструктор класса для формирования объекта взаимодействующего с моделью.
		
		\param md указатель на объект модели.
		
	*/
	SLManager(std::shared_ptr<ModelEdit> md) {
		Mod = md;
	}
	/*! Метод предоставляющий данные сохранения в файле.
		\param filename имя файла для импорта.
		\return булево значение (true- импорт удался).
	*/
	bool importFromFile(std::string filename) {
		//...
		Mod->setDate();
	}
	/*! Метод предоставляющий данные сохранения в файле.
		\param filename имя файла для экспорта.
		\return булево значение (true- экспорт удался).
	*/
	bool exportToFile(std::string filename) {
		//...
		Mod->getDate();
	}
};
///@}
