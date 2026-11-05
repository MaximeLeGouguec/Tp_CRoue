#ifndef CROUE_H
#define CROUE_H

using namespace std;
class CRoue {
    private:
        int dimension;
        string marque;
        float pression;
    
    public:
        CRoue();
        CRoue(int dimension, string marque, float pression);
        ~CRoue();
        void gonflet(float augmenter);
        void degonflet(float diminuer);
        void creuver();
        void afficher();
};
#endif