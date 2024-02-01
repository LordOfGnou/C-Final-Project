#ifndef ZEBRA_HPP
#define ZEBRA_HPP

#include "Animal.hpp"

using namespace std;

class Zebra : public Animal {
    private:
        int nbStripes;
        double qttGrassNeeded;
    public:
        Zebra(string name = "Marty", int a = 0, double l = 0.40, double h = 0.30, double weight = 30, bool isMale = true, int nbStripes = 15, double qttGrassNeeded = 2);
        Zebra(Animal animal, int nbStripes, double qttGrassNeeded);

        int getStripes(void) const;
        double getGrass(void) const;

        void setStripes(int nb);
        void setGrass(double qtt);

        void print(void);
};

#endif