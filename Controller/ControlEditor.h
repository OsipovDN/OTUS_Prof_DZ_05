#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include <memory>
#include <vector>

class ControlEdit {
private:
	std::shared_ptr <ModelEdit> Edit;
	std::unique_ptr <ViewEdit> View;
public:
	ControlEdit() {
		Edit = std::make_shared<ModelEdit>();
		View = std::make_unique<ViewEdit>(Edit);
	};
	void AddFig(std::string tp) {
		Edit->addShape(tp);
		View->update();
	}
	void openFromFile(std::string filename) {
		Edit->importFromFile(filename);
	};
	void saveToFile(std::string filename) {
		Edit->exportToFile(filename);
	};

};
