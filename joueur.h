//
// Created by jonapy on 02/12/2018.
//

#ifndef JEUDAMES_JOUEUR_H
#define JEUDAMES_JOUEUR_H


class Joueur {

private:
    couleur couleur;
    string name;

public:
    list<std::tuple<char,int>> getAllPossibleMoves();

};


#endif //JEUDAMES_JOUEUR_H
