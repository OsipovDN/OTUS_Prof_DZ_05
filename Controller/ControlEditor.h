#pragma once
#include "ModelEditor.h"
#include <memory>


class ControlEdit {
private:
	std::unique_ptr <ModelEdit> Model;
public:
	ControlEdit(std::unique_ptr<ModelEdit>& m) :Model(std::move(m)) {};
	void AddFig(std::unique_ptr<IShapes> fig) {
		Model->addShape(std::move(fig));
	}
};
