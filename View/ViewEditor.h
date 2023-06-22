#pragma once
#include "ControlEditor.h"

class ViewEdit {
private:
	std::unique_ptr<ControlEdit> Controller;
public:
	ViewEdit(std::unique_ptr<ModelEdit>& Model):Controller(ControlEdit(Model)) {};
	
};