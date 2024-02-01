#include "Animal.hpp"
#include <iostream>

using namespace std;

Animal::Animal(string name, int a, double l, double h, double w, bool iM) : name(name), age(a), length(l), height(h), weight(w), isMale(iM) {}

string Animal::getName(void) const {
    return name;
}

int Animal::getAge(void) const {
    return age;
}
double Animal::getLength(void) const {
    return length;
}
double Animal::getHeight(void) const {
    return height;
}
double Animal::getWeight(void) const {
    return weight;
}

string Animal::getSexe(void) const {
    return (isMale?"Male":"Female");
}

void Animal::setName(string name) {
    this->name = name;
}

void Animal::setAge(int age) {
    this->age = age;
}
void Animal::setLength(double length) {
    this->length = length;
}
void Animal::setHeight(double height) {
    this->height = height;
}
void Animal::setWeight(double w) {
    this->weight = w;
}

void Animal::setSexe(bool isMale) {
    this->isMale = isMale;
}