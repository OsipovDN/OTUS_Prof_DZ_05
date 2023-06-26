#pragma once
#include "ViewEditor.h"
#include "ModelEditor.h"
#include <memory>


class ControlEdit {
	using PointParam = std::vector<std::pair<int, int>>;
private:
	std::shared_ptr <ModelEdit> Edit;
public:
	ControlEdit(std::unique_ptr<ModelEdit> m) :Edit(std::move(m)) {};

	void AddFig(std::string tp) {
		Edit->addShape(tp);
	}

};
