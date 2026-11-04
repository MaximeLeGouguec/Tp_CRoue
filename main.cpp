#include "CRoue.h"
#include <iostream>
using namespace std;

int main() {
    CRoue roue(15, "Michelin", 2.5);
    roue.gonflet(0.5);
    roue.afficher();
    roue.degonflet(1.0);
    roue.afficher();
    roue.creuver();
    roue.afficher();
    return 0;
}