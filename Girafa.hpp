#ifndef GIRAFA_HPP
#define GIRAFA_HPP

#include "Animal.hpp"

using namespace std;

class Girafa : public Animal {
    private:
        int neckLength;
        double qttGrassNeeded;
    public:
        Girafa(string name = "Melanie", int a = 0, double l = 0.40, double h = 0.30, double weight = 30, bool isMale = false, int neckLength = 15, double qttGrassNeeded = 2);
        Girafa(Animal animal, int neckLength, double qttGrassNeeded);

        int getNeckLength(void) const;
        double getGrass(void) const;

        void setNeckLength(int nb);
        void setGrass(double qtt);

        void print(void);
};

#endif