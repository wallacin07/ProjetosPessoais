#include <stdio.h>
#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#define L 9
#define C 15
#define ENEMY_SYMBOL 'E'
#define CHAR_SYMBOL 'P'
#define BOMB_SYMBOL 'O'

struct Character {
    int x;
    int y;
    int lives;
};

struct Enemy {
    int xEnemy;
    int yEnemy;
    int direction;
    int alive;
};

#endif // !Inicio