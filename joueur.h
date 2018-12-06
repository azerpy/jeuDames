//
// Created by jonapy on 02/12/2018.
//

#ifndef JEUDAMES_JOUEUR_H
#define JEUDAMES_JOUEUR_H


#include <string.h>
#include <vector>

class Joueur {

private:
    std::string couleur;

public:
    virtual std::string choisirCoup();

};


#endif //JEUDAMES_JOUEUR_H
