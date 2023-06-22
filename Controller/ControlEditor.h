#pragma once
#include "ModelEditor.h"
#include <memory>


class ControlEdit {
private:
	std::unique_ptr <ModelEdit> Edit;
public:
	ControlEdit(std::unique_ptr<ModelEdit> m) :Edit(std::move(m)) {};
	void AddFig(std::unique_ptr<IShapes> fig) {
		Edit->addShape(std::move(fig));
	}

};
