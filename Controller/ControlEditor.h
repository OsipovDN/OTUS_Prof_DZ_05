#pragma once
#include "ViewEditor.h"
#include "ModelEditor.h"
#include <memory>


class ControlEdit {
private:
	std::unique_ptr <ModelEdit> Edit;
	std::unique_ptr <ViewEdit> View;
public:
	ControlEdit(std::unique_ptr<ModelEdit> m) :Edit(std::move(m)),View(std::make_unique<ViewEdit>(ViewEdit())) {};
	void AddFig(std::unique_ptr<IShapes> fig) {
		Edit->addShape(std::move(fig));
	}

};
