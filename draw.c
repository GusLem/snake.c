#include "draw.h"

void DrawSnake(Body* body) {
    mvaddch(body->y,body->x,'0');
    if (body->next != NULL)
        DrawSnake(body->next);
}

void DrawLevel(void) {
    for (int i=0;i<50;i++) {
        for (int j=0;j<15;j++) {
            mvaddch(j,i,'.');
        }
    }
}