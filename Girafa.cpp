#include "Girafa.hpp"

using namespace std;

Girafa::Girafa(string name, int age, double length, double height, double weight, bool isMale, int neckLength, double qttGrassgetGrassNeeded) : Animal(name, age, length, height, weight, isMale), neckLength(neckLength), qttGrassNeeded(qttGrassNeeded) {}
//Girafa::Girafa(Animal animal, int neckLength, double qttGrassNeeded) : Animal(name, age, length, height, weight, isMale), neckLength(neckLength), qttGrassNeeded(qttGrassNeeded) {}

int Girafa::getNeckLength(void) const {
    return neckLength;
}

double Girafa::getGrass(void) const {
    return qttGrassNeeded;
}
void Girafa::setNeckLength(int neckLength) {
    this->neckLength = neckLength;
}

void Girafa::setGrass(double qtt) {
    this->qttGrassNeeded = qtt;
}

void Girafa::print(void) {
    cout << "Here are this Girafa's " << name << " characteristics:" << endl;
    cout << "Age: " << getAge() << "\r\nLength: " << getLength() << "\r\nheight: " << getHeight() << "\r\nWeight: " << getWeight() << endl;
    cout << "It needs " << qttGrassNeeded << " kg of grass per day and has a " << neckLength << " centimiters neck in total." << endl;
}