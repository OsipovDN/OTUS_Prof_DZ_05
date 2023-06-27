#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include "Observ.h"
#include <memory>
#include <vector>


class ControlEdit {
	using PointParam = std::vector<std::pair<int, int>>;
private:
	std::shared_ptr <ModelEdit> Edit;
	std::shared_ptr <ViewEdit> View;
public:
	ControlEdit(std::shared_ptr<ModelEdit> m) {
		Edit = std::make_shared<ModelEdit>(m);
		View = std::make_shared<ViewEdit>(Edit);
	};

	void AddFig(std::string tp) {
		Edit->addShape(tp);
	}
	void openFromFile(std::string filename) {
		Edit->importFromFile(filename);
	};
	void saveToFile(std::string filename) {
		Edit->exportToFile(filename);
	};

};
