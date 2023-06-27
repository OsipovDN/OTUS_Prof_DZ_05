#include <iostream>
#include "ModelEditor.h"
#include "ControlEditor.h"

int main()
{
	auto Model=std::make_shared<ModelEdit>();
	ControlEdit Controller(Model);
	Controller.AddFig("Triangle");
	Controller.AddFig("Triangle");
	Controller.AddFig("Triangle");
	Controller.AddFig("Circle");

	return 0;
}
