#pragma once
#include "IShapes.h"
#include <list>
#include <memory>


class ModelEdit {
private:
	std::list<std::unique_ptr<IShapes>> pul_fig;
public:
	void addShape(std::unique_ptr<IShapes> Shape) {
		pul_fig.push_back(std::move(Shape));
	}

};