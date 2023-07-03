#pragma once
#include "ModelEditor.h"

class SLManager {
private:
	std::shared_ptr<ModelEdit> Mod;
public:
	SLManager(std::shared_ptr<ModelEdit> md) {
		Mod = md;
	}
	bool importFromFile(std::string filename) {
		//...
		Mod->setDate();
	}
	bool exportToFile(std::string filename) {
		//...
		Mod->getDate();
	}
};
