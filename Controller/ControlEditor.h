#pragma once
#include "ModelEditor.h"
#include"ViewEditor.h"
#include "SLManager.h"
#include <memory>

class ControlEdit {
private:
	std::shared_ptr <ModelEdit> Edit;
	std::unique_ptr <ViewEdit> View;
	std::unique_ptr <SLManager> Slm;
public:
	ControlEdit() {
		Edit = std::make_shared<ModelEdit>();
		View = std::make_unique<ViewEdit>(Edit);
		Slm = std::make_unique<SLManager>(Edit);
	};
	void AddFig(std::string tp) {
		Edit->addShape(tp);
		View->update();
	}
	void openFromFile(std::string filename) {
		Slm->importFromFile(filename);
		View->update();
	};
	void saveToFile(std::string filename) {
		Slm->exportToFile(filename);
		View->update();
	};

};
