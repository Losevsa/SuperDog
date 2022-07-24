#include <iostream>

class Animal
{
public:
	virtual void voice() = 0;

};

class Dog : virtual public Animal
{
public:
	void voice()
	{
		std::cout << "Meow" << std::endl;
	}
};

class Cat : virtual public Animal
{
public:
	void voice()
	{
		std::cout << "Bark" << std::endl;
	}
};


int main()
{
	Dog d;
	d.voice();
	Animal* cat = new Cat();
	cat->voice();
	return 0;
}
