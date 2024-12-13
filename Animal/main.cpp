#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
	Dog dog;
    dog.sound();
	Animal* ptr = &dog;
	ptr->sound();

}
