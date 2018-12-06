//
// Created by jonapy on 02/12/2018.
//

#ifndef JEUDAMES_DAMIER_H
#define JEUDAMES_DAMIER_H

#include "joueurHumain.h"
#include "joueurOrdi.h"

class damier {

private:
    char damier[10][10];
    JoueurHumain joueur1;
    JoueurOrdi joueur2;

public:
    vector<> getListCoupsBlanc();
    vector<> getListCoupsNoir();
    bool isVictoire();
    damier clone();
    void jouerCoup();
    void afficher();
};


#endif //JEUDAMES_DAMIER_H
