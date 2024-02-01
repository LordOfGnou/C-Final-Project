#include "Zebra.hpp"

using namespace std;

Zebra::Zebra(string name, int age, double length, double height, double weight, bool isMale, int nbStripes, double qttGrassgetGrassNeeded) : Animal(name, age, length, height, weight, isMale), nbStripes(nbStripes), qttGrassNeeded(qttGrassNeeded) {}
//Zebra::Zebra(Animal animal, int nbStripes, double qttGrassNeeded) : Animal(name, age, length, height, weight, isMale), nbStripes(nbStripes), qttGrassNeeded(qttGrassNeeded) {}

int Zebra::getStripes(void) const {
    return nbStripes;
}

double Zebra::getGrass(void) const {
    return qttGrassNeeded;
}
void Zebra::setStripes(int nbStripes) {
    this->nbStripes = nbStripes;
}

void Zebra::setGrass(double qtt) {
    this->qttGrassNeeded = qtt;
}

void Zebra::print(void) {
    cout << "Here are this Zebra's " << name << " characteristics:" << endl;
    cout << "Age: " << getAge() << "\r\nLength: " << getLength() << "\r\nheight: " << getHeight() << "\r\nWeight: " << getWeight() << endl;
    cout << "It needs " << qttGrassNeeded << " kg of grass per day and has " << nbStripes << " Stripes in total." << endl;
}