#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
class Dog :public Animal {
public:
	void sound();
};
class Cat : Animal {
	void sound();
};
#endif