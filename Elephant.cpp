#include "Elephant.hpp"

using namespace std;

Elephant::Elephant(string name, int age, double length, double height, double weight, bool isMale, int nbTusk, double qttGrassNeeded) : Animal(name, age, length, height, weight, isMale),nbTusk(nbTusk), qttGrassNeeded(qttGrassNeeded) {}
//Elephant::Elephant(Animal animal, int nbTusk, double qttGrassNeeded) : Animal(name, age, length, height, weight, isMale), nbTusk(nbTusk), qttGrassNeeded(qttGrassNeeded) {}

int Elephant::getTusk(void) const {
    return nbTusk;
}

double Elephant::getGrass(void) const {
    return qttGrassNeeded;
}
void Elephant::setTusk(int nbTusk) {
    this->nbTusk =nbTusk;
}

void Elephant::setGrass(double qtt) {
    this->qttGrassNeeded = qtt;
}

void Elephant::print(void) {
    cout << "Here are this Elephant's " << name << " characteristics:" << endl;
    cout << "Age: " << getAge() << "\r\nLength: " << getLength() << "\r\nheight: " << getHeight() << "\r\nWeight: " << getWeight() << endl;
    cout << "It needs " << qttGrassNeeded << " kg of grass per day and has " << nbTusk << " tusk in total." << endl;
}