#pragma once
#include "IShapes.h"
#include "Observ.h"
#include <vector>
#include <list>
#include <memory>



class ModelEdit :public Observable {
	using PointsParam = std::vector<std::pair<int, int>>;
private:
	std::list<std::unique_ptr<IShapes>> pul_fig;
public:
	void addShape(std::string tp) {
		if (tp == "Triangle") {
			pul_fig.emplace_back(new Triangle());
			notifyUpdate();
		}
		else if (tp == "Square") {
			pul_fig.emplace_back(new Square());
			notifyUpdate();
		}
		else if (tp == "Circle") {
			pul_fig.emplace_back(new Circle());
			notifyUpdate();
		}
	}
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
	}
};