#include <string>
#include <iostream>
#include "Lion.hpp"
#include "Zebra.hpp"
#include "Elephant.hpp"
#include "Girafa.hpp"
#include "Dinosaur.hpp"

using namespace std;

void registerAnimal(Animal* zoo[], int specie, int zooFill);
int rqSpecie(void);


int main(void) {
    int zooFill = 0;
    Animal* zoo[50];
    bool exit = true;
    int lionFill = 0;
    int zebraFill = 0;
    int elephantFill = 0;
    int girafaFill = 0;
    int dinosaursFill = 0;
    Lion lions[10];
    Zebra zebras[10];
    Elephant elephants[10];
    Girafa girafas[10];
    Dinosaur dinosaurs[10];
    Lion *Felix = new Lion("Felix",8, 1.9, 1.2, 127.8, false, 20, 8);
    zoo[0] = Felix;
    zooFill ++;
    cout << "Welcome to Cambyse's Zoo !" << endl;
    while (exit) {
        int choice = 0;
        cout << "--------------------------------------------------------" << endl;
        cout << "What do you want to do ?" << endl;
        cout << "1. Register a new animal" << endl;
        cout << "2. Display all the animals in the Zoo" << endl;
        cout << "3. Quit this programm" << endl;
        cout << "--------------------------------------------------------" << endl;
        while (choice == 0) cin >> choice;
        if (choice == 1) {
            int specie = rqSpecie();
            registerAnimal(zoo, specie, zooFill);
            zooFill++;
        } else if (choice == 2) {
            for (int i = 0; i < zooFill; i++) {
                zoo[i]->print();
            }
            } else if (choice == 3) {
            exit = false;
            break;
        } else {
            cout << "Choose a correct option !";
        }
        
    }
    cout << "Thank you for your visit at the Cambyse Zoo, and have a great day !";
}

void registerAnimal(Animal* zoo[], int specie, int zooFill) {
    int characteristic;
    double food;
    string name;
    int age;
    double length;
    double height;
    double weight;
    bool isMale;
    cout << "You can now enter the other characteristic of the animal :" << endl;
    cout << "Name :" << endl; cin >> name;
    cout << "Age: " << endl; cin >> age;
    cout << "Length: " << endl; cin >> length;
    cout << "Height: " << endl; cin >> height;
    cout << "Weight: " << endl; cin >> weight;
    cout << "Is it a male (0 = true/1 = false): " << endl; cin >> isMale;
    switch (specie) {
        case 1 :
            cout << "How many claws it has: " << endl; cin >> characteristic;
            cout << "How much meat it needs per day: " << endl; cin >> food;
            zoo[zooFill] = new Lion(name, age, length, height, weight, isMale, characteristic, food);
            break;
        case 2 :
            cout << "How many stripes it has: " << endl; cin >> characteristic;
            cout << "How much grass it needs per day: " << endl; cin >> food;
            zoo[zooFill] = new Zebra(name, age, length, height, weight, isMale, characteristic, food);
            break;
        case 3 :
            cout << "How many tusk it has: " << endl; cin >> characteristic;
            cout << "How much grass it needs per day: " << endl; cin >> food;
            zoo[zooFill] = new Elephant(name, age, length, height, weight, isMale, characteristic, food);
            break;
        case 4:
            cout << "How long is its neck (cm): " << endl; cin >> characteristic;
            cout << "How much grass it needs per day: " << endl; cin >> food;
            zoo[zooFill] = new Girafa(name, age, length, height, weight, isMale, characteristic, food);
            break;
        case 5:
            cout << "How many claws it has: " << endl; cin >> characteristic;
            cout << "How much meat it needs per day: " << endl; cin >> food;
            zoo[zooFill] = new Dinosaur(name, age, length, height, weight, isMale, characteristic, food);
            break;
    }
}

int rqSpecie(void) {
    int specie;
    cout << "Enter the specie of the animal you would like to register :\r\n\t1.Lion\r\n\t2.Zebra\r\n\t3.Elephant\r\n\t4.Girafa\r\n\t5.Dinosaurs\r\n";
    cin >> specie;
    return specie;
}