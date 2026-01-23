// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Dog
{
private:
    string name;
    int age;
    string breed;

public:
    void setName(string);
    void setAge(int);
    void setBreed(string);
    string getName();
    int getAge();
    string getBreed();
    void bark();
};

void Dog::setName(string n)
{
    name = n;
}

void Dog::setAge(int a)
{
    age = a;
}

void Dog::setBreed(string b)
{
    breed = b;
}

string Dog::getName()
{
    return name;
}

int Dog::getAge()
{
    return age;
}

string Dog::getBreed()
{
    return breed;
}

void Dog::bark()
{
    cout << "Woof! Woof!";
}

int main()
{
    Dog puppy;

    puppy.setName("Theo");
    puppy.setAge(1);
    puppy.setBreed("Dachshund");

    cout << "Name: " << puppy.getName() << endl << "Age: " << puppy.getAge() << endl << "Breed: " << puppy.getBreed() << endl;

    puppy.bark();
}