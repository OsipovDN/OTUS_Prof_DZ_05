/*! \authors Dmitry Osipov
	\warning Данный проект представлен исключительно в учебных целях
*/ 
/*! \file
	\brief файл MVC_pattern.cpp
	\details Файл содержит пример взаимодейсвия пользователя и графического редактора реализованного
	с использованием паттерна MVC
*/
#include <iostream>
#include "ControlEditor.h"

int main()
{
	ControlEdit Controller;
	Controller.AddFig("Triangle");
	Controller.AddFig("Triangle");
	Controller.AddFig("Triangle");
	Controller.AddFig("Circle");

	return 0;
}
