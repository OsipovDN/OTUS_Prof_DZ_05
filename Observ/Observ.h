#pragma once
#include"ModelEditor.h"
#include"ViewEditor.h"
#include <vector>
#include <memory>

class Observer {
public:
	virtual void update() = 0;
	virtual ~Observer() = default;
};

class Observable {
private:
	std::vector<std::shared_ptr<ViewEdit>> _observers;
public:
	virtual ~Observable() = default;
	void addObserver(std::shared_ptr<ViewEdit> observer) {
		_observers.push_back(observer);
	}
	void notifyUpdate() {
		size_t size = _observers.size();
		for (auto i = 0; i < size; i++) {
			std::cout << "Observer number: " << i << std::endl;
			_observers[i]->update();
		}
	}
};
