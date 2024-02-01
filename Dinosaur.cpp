#include "Dinosaur.hpp"

using namespace std;

Dinosaur::Dinosaur(string name, int age, double length, double height, double weight, bool isMale, int nbClaws, double qttMeatNeeded) : Animal(name, age, length, height, weight, isMale), nbClaws(nbClaws), qttMeatNeeded(qttMeatNeeded) {}
//Dinosaur::Dinosaur(Animal animal, int nbClaws, double qttMeatNeeded) : Animal(name, age, length, height, weight, isMale), nbClaws(nbClaws), qttMeatNeeded(qttMeatNeeded) {}

int Dinosaur::getClaws(void) const {
    return nbClaws;
}

double Dinosaur::getMeat(void) const {
    return qttMeatNeeded;
}
void Dinosaur::setClaws(int claws) {
    this->nbClaws = claws;
}

void Dinosaur::setMeat(double qtt) {
    this->qttMeatNeeded = qtt;
}

void Dinosaur::print(void) {
    cout << "Here are this Dinosaur's " << name << " characteristics:" << endl;
    cout << "Age: " << getAge() << "\r\nLength: " << getLength() << "\r\nheight: " << getHeight() << "\r\nWeight: " << getWeight() << endl;
    cout << "It needs " << qttMeatNeeded << " kg of meat per day and has " << nbClaws << " claws in total." << endl;
}