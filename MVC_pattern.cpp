/*! \authors Dmitry Osipov
	\warning This project is presented exclusively for educational purposes
*/ 
/*! \file
	\brief файл MVC_pattern.cpp
	\details The file contains an example of user interaction and a graphical editor implemented
		using the MVC pattern
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
