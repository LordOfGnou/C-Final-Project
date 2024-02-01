#ifndef DINOSAUR_HPP
#define DINOSAUR_HPP

#include "Animal.hpp"

using namespace std;

class Dinosaur : public Animal {
    private: 
        double qttMeatNeeded;
        int nbClaws;
    public:
        Dinosaur(string name = "Ted", int a = 0, double l = 0.40, double h = 0.25, double weight = 1.5, bool isMale = true, int nbClaws = 0, double qttMeatNeeded = 1);
        Dinosaur(Animal animal, int nbClaws, double qttMeatNeeded);

        int getClaws(void) const;
        double getMeat(void) const;

        void setClaws(int nb);
        void setMeat(double qtt);

        void print(void);
};

#endif // DINOSAUR_HPP