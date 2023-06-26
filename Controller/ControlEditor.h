#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include <memory>


class ControlEdit {
	using PointParam = std::vector<std::pair<int, int>>;
private:
	std::shared_ptr <ModelEdit> Edit;
	std::shared_ptr <ViewEdit> View;
public:
	ControlEdit(std::shared_ptr<ModelEdit> m) :Edit(m) {
		View = std::make_shared<ViewEdit>(Edit);
	};

	void AddFig(std::string tp) {
		Edit->addShape(tp);
	}

};
