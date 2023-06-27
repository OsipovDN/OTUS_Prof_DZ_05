#pragma once
#include "IShapes.h"
#include "Observ.h"
#include <list>
#include <memory>


class ModelEdit :public Observable {
private:
	std::list<std::shared_ptr<IShapes>> pul_fig;
public:
	void addShape(std::string tp) {
		if (tp == "Triangle") {
			pul_fig.emplace_back(std::make_shared<Triangle>());
			notifyUpdate();
		}
		else if (tp == "Square") {
			pul_fig.emplace_back(std::make_shared <Square>());
			notifyUpdate();
		}
		else if (tp == "Circle") {
			pul_fig.emplace_back(std::make_shared<Circle>());
			notifyUpdate();
		}
	}
	void removeShape(int num) {};
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
	}
	bool importFromFile(std::string filename) {
		//...
		notifyUpdate();
	};
	bool exportToFile(std::string filename) {
		//...
		notifyUpdate();
	};
};