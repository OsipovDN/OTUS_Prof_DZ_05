#pragma once
#include "ModelEditor.h"

class ViewEdit {
private:
	std::shared_ptr<ModelEdit> Mod;
public:
	ViewEdit(std::shared_ptr<ModelEdit> md) {
		Mod = md;
	};
	void update() {
		Mod->getFig();
	};
};