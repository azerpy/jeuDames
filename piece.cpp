//
// Created by jonapy on 02/12/2018.
//

#include "piece.h"
#include "boost/tuple/tuple.hpp"
#include <vector>

using namespace std;
using boost::tuple;

/*bool isMovePossible(char posX, int posY){
    bool res;
    if(this.couleur == couleur::BLANC){
        res = abs(this.posX - posX == 1) && this.posY - posY == 1;
        return res || (abs(this.posX - posX == 2) && this.posY - posY == 2);
    } else {
        res = abs(this.posX - posX == 1) && posY - this.posY == 1;
        return res || (abs(this.posX - posX == 2) && posY - this.posY == 2);
    }
}*/

char getPositionX'){
    return this.posX;
}

int getPositionY(){
    return this.posY;
}

void moveTo(char posX, int posY){
    this.posX = posX;
    this.posY = posY;
}

vector<tuple<char,int>> getMovesPossible(){
    vector<tuple<char,int>> moves;
    if(this.couleur == couleur.BLANC){
        moves.push_back(tuple<char,int>(this.posX -1,this.posY+1));
        moves.push_back(tuple<char,int>(this.posX +1,this.posY+1));
        moves.push_back(tuple<char,int>(this.posX -2,this.posY+2));
        moves.push_back(tuple<char,int>(this.posX +2,this.posY+2));
    } else {
        moves.push_back(tuple<char,int>(this.posX -1,this.posY-1));
        moves.push_back(tuple<char,int>(this.posX +1,this.posY-1));
        moves.push_back(tuple<char,int>(this.posX -2,this.posY-2));
        moves.push_back(tuple<char,int>(this.posX +2,this.posY-2));
    }
}