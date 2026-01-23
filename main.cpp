// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Dog // Created Class
{
private: // Private variables
    string name;
    int age;
    string breed;

public: // Public setter and getter function
    void setName(string);
    void setAge(int);
    void setBreed(string);
    string getName();
    int getAge();
    string getBreed();
    void bark();
};

void Dog::setName(string n) // set name function
{
    name = n;
}

void Dog::setAge(int a) // set age function
{
    age = a;
}

void Dog::setBreed(string b) // set breed function
{
    breed = b;
}

string Dog::getName() // get name function
{
    return name;
}

int Dog::getAge() // get age function
{
    return age;
}

string Dog::getBreed() // get breed function
{
    return breed;
}

void Dog::bark() // bark function
{
    cout << "Woof! Woof!";
}

int main() // main
{
    Dog puppy; // create Dog object named puppy

    puppy.setName("Theo"); // set puppy name using setter
    puppy.setAge(1); // set puppy age using setter
    puppy.setBreed("Dachshund"); // set puppy breed using setter

    cout << "Name: " << puppy.getName() << endl << "Age: " << puppy.getAge() << endl << "Breed: " << puppy.getBreed() << endl; // print output

    puppy.bark(); // call bark function
}