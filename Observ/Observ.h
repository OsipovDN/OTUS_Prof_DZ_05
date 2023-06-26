#pragma once
#include <memory>

class Observer {
public:
	virtual void update() = 0;
	virtual ~Observer() = default;
};

class Observable {
private:
	std::vector<std::unique_ptr<Observer>> _observers;
public:
	void addObserver(std::unique_ptr<Observer> observer) {
		_observers.push_back(std::move(observer));
	}
	void notifyUpdate() {
		size_t size = _observers.size();
		for (auto i = 0; i < size; i++)
			_observers[i]->update();
	}
};
