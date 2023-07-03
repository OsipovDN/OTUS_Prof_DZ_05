#pragma once
#include "IShapes.h"
#include <vector>

class ModelEdit {
private:
	std::vector<std::shared_ptr<IShapes>> pul_fig;
public:
	void addShape(std::string tp) {
		if (tp == "Triangle") {
			pul_fig.push_back(std::make_shared<Triangle>());
		}
		else if (tp == "Square") {
			pul_fig.push_back(std::make_shared <Square>());
		}
		else if (tp == "Circle") {
			pul_fig.push_back(std::make_shared<Circle>());
		}
	}
	void removeShape(int&) {};
	void getFig() {
		for (const auto& it : pul_fig) {
			it->showShape();
		}
		std::cout << std::endl;
	}
	std::vector<std::shared_ptr<IShapes>> getDate() { return pul_fig; }
	void setDate (/*std::vector<std::shared_ptr<IShapes>>*/){}

	

};