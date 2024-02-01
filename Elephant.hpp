#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP

#include "Animal.hpp"

using namespace std;

class Elephant : public Animal {
    private:
        int nbTusk;
        double qttGrassNeeded;
    public:
        Elephant(string name = "Gloria", int a = 0, double l = 0.50, double h = 0.50, double weight = 100, bool isMale = false, int nbTusk = 2, double qttGrassNeeded = 2);
        Elephant(Animal animal, int nbStripes, double qttGrassNeeded);

        int getTusk(void) const;
        double getGrass(void) const;

        void setTusk(int nb);
        void setGrass(double qtt);

        void print(void);
};

#endif