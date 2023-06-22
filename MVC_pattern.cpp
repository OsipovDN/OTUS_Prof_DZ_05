#include <iostream>
#include "ModelEditor.h"
#include "ViewEditor.h"
#include "ControlEditor.h"

int main()
{
	std::unique_ptr<ModelEdit> Model;
	ControlEdit Controller(std::move(Model));
	

	return 0;
}
