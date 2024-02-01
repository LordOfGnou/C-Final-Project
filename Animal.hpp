#ifndef ANIMAL_HPP_INCLUDED
#define ANIMAL_HPP_INCLUDED

#include <string>
#include <iostream>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
        double length;
        double height;
        double weight;
        bool isMale;
    public:
        Animal(string name = "nameless", int a = 0, double l = 0, double h = 0, double weight = 0, bool isMale = false);

        string getName(void) const;
        int getAge(void) const;
        double getLength(void) const;
        double getHeight(void) const;
        double getWeight(void) const;
        string getSexe() const;

        void setName(string name);
        void setAge(int age);
        void setLength(double length);
        void setHeight(double height);
        void setWeight(double weight);
        void setSexe(bool isMale);

        virtual void print() = 0;
};

#endif