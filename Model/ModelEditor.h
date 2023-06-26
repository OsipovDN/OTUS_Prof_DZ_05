#pragma once
#include "IShapes.h"
#include "Observ.h"
#include <list>
#include <memory>



class ModelEdit :public Observable {
private:
	std::list<std::unique_ptr<IShapes>> pul_fig;
public:
	void addShape(std::string tp) {
		if (tp == "Triangle") {
			pul_fig.emplace_back(std::make_unique<Triangle>());
			notifyUpdate();
		}
		else if (tp == "Square") {
			pul_fig.emplace_back(std::make_unique <Square>());
			notifyUpdate();
		}
		else if (tp == "Circle") {
			pul_fig.emplace_back(std::make_unique<Circle>());
			notifyUpdate();
		}
	}
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
	}
};