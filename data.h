#ifndef DATA_H
#define DATA_H 

typedef struct Food {
    int x,y;
} Food;

typedef struct Body {
    int x,y;
    struct Body* next;
} Body;

typedef struct Head {
    int x,y,vx,vy;
    Body* next;
    Body* last;
} Head;

enum gameStates {INTRO, GAME, GAMEOVER} gameState;

#endif