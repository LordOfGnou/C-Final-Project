#include "Lion.hpp"

using namespace std;

Lion::Lion(string name, int age, double length, double height, double weight, bool isMale, int nbClaws, double qttMeatNeeded) : Animal(name, age, length, height, weight, isMale), nbClaws(nbClaws), qttMeatNeeded(qttMeatNeeded) {}
//Lion::Lion(Animal animal, int nbClaws, double qttMeatNeeded) : Animal(name, age, length, height, weight, isMale), nbClaws(nbClaws), qttMeatNeeded(qttMeatNeeded) {}

int Lion::getClaws(void) const {
    return nbClaws;
}

double Lion::getMeat(void) const {
    return qttMeatNeeded;
}
void Lion::setClaws(int claws) {
    this->nbClaws = claws;
}

void Lion::setMeat(double qtt) {
    this->qttMeatNeeded = qtt;
}

void Lion::print(void) {
    cout << "Here are this lion's " << name << " characteristics:" << endl;
    cout << "Age: " << getAge() << "\r\nLength: " << getLength() << "\r\nheight: " << getHeight() << "\r\nWeight: " << getWeight() << endl;
    cout << "It needs " << qttMeatNeeded << " kg of meat per day and has " << nbClaws << " claws in total." << endl;
}