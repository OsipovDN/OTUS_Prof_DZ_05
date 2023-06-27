#pragma once
#include "Observ.h"
#include "ModelEditor.h"
#include "ControlEditor.h"


class ViewEdit :public Observer {
private:
	std::shared_ptr<ModelEdit> Mod;
public:
	ViewEdit(std::shared_ptr<ModelEdit> md):Mod(std::make_shared<ModelEdit>(md)) {
		Mod->addObserver(std::make_unique<Observer>(this));
	};
	void update()override {
		Mod->getFig();
	};
};