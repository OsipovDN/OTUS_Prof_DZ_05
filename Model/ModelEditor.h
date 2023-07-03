#pragma once
#include "IShapes.h"
#include <vector>
#include <memory>

class ModelEdit {
private:
	std::vector<std::unique_ptr<IShapes>> pul_fig;
public:
	void addShape(std::string tp) {
		if (tp == "Triangle") {
			pul_fig.push_back(std::make_unique<Triangle>());
		}
		else if (tp == "Square") {
			pul_fig.push_back(std::make_unique <Square>());
		}
		else if (tp == "Circle") {
			pul_fig.push_back(std::make_unique<Circle>());
		}
	}
	void removeShape(int&) {};
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
		std::cout << std::endl;
	}
	bool importFromFile(std::string filename) {
		//...
	};
	bool exportToFile(std::string filename) {
		//...
	};

};