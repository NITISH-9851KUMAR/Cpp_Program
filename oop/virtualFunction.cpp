#include <iostream>
using namespace std;

class Animal {
public:
virtual void makeSound() {
cout << "Animal makes a sound.\n";}
};

class Cat : public Animal {
public:
void makeSound() override {
cout << "Cat meows.\n";}
};

class Dog : public Animal {
public:
void makeSound() override {
cout << "Dog barks.\n";}
};

int main() {

Animal* animalPtr;
Cat cat;
Dog dog;
animalPtr = &cat;
animalPtr->makeSound(); // Calls Cat's makeSound()
animalPtr = &dog;
animalPtr->makeSound(); // Calls Dog's makeSound()
return 0;
}