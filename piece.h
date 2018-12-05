//
// Created by jonapy on 02/12/2018.
//

#ifndef JEUDAMES_PIECE_H
#define JEUDAMES_PIECE_H


class piece {

private:
    couleur couleur;
    char posX;
    int posY;

public:
    char getPositionX();
    int getPositionY();
    void moveTo(char posX, int posY);
    //bool isMovePossible(char posX, int posY);
    vector<tuple<char,int>> getMovesPossible();
};


#endif //JEUDAMES_PIECE_H
