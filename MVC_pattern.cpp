#include <iostream>
#include "ModelEditor.h"
#include "ViewEditor.h"
#include "ControlEditor.h"

int main()
{
	std::unique_ptr<ModelEdit> Model;
	ViewEdit View(std::make_unique<ControlEdit>(std::move(Model)));
	

	return 0;
}
