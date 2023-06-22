#pragma once
#include "ControlEditor.h"

class ViewEdit {
private:
	std::unique_ptr<ControlEdit> Controller;
public:
	ViewEdit(std::unique_ptr<ControlEdit> c):Controller(std::move(c)) {};
};