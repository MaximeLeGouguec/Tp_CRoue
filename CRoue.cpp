#include "CRoue.h"
#include <iostream>
using namespace std;

// Constructeur
CRoue::CRoue(int dimension, string modele, float pression) {
    this->dimension = dimension;
    this->marque = modele;
    this->pression = pression;
}

// Destructeur
CRoue::~CRoue() {}

void CRoue::gonflet(float augmenter) {
    pression += augmenter;
}

void CRoue::degonflet(float diminuer) {
    pression -= diminuer;
}

void CRoue::creuver() {
    pression = 0;
}

void CRoue::afficher() {
    cout << "Dimension: " << dimension << endl;
    cout << "Marque: " << marque << endl;
    cout << "Pression: " << pression << endl;
}