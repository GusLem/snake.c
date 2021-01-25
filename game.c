#include "game.h"


int newBody = 1;

int RunsGame(Head* head, Food* food, int* newBody, int* lastK) {

    //Input
    if (input(head,lastK))
        return 10;

    //Update
    if (*newBody) {
        Body* nBody; 
        nBody = malloc(sizeof(Body));
        nBody->next = NULL;
        if (head->last == NULL)  
            head->next = nBody;
        else 
            head->last->next = nBody;;
        head->last = nBody;   
        *newBody = false;
    }

    if (head->next != NULL) {
        UpdateSnake(head->next,head->x,head->y);
    }

    head->x += head->vx;
    head->y += head->vy;

    SnakeChecksFood(head->x,head->y,food,newBody);

    if (CollisionWalls(head->x,head->y) || CollisionBody(head->x,head->y,head->next))
        return GAMEOVER;

    //Draw
    DrawLevel();
    if (head->next != NULL) {
        DrawSnake(head->next);
    }

    //Draw Head
    mvaddch(head->y,head->x,'0');

    //Draw Food
    mvaddch(food->y,food->x,'X');

    return GAME;
}