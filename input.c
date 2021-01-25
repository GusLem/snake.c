#include "input.h"

int input(Head* head, int* lastK) {
    int ch;
    ch = getch();

    if (ch == 'f')
        return 1;

    switch (ch) {
        case KEY_UP:
            if (*lastK != KEY_DOWN) {
                head->vx = 0;
                head->vy = -1;
                *lastK = ch;
            }
            
        break;

        case KEY_DOWN:
            if (*lastK  != KEY_UP) {
                head->vx = 0;
                head->vy = 1;
                *lastK = ch;
            }
        break;

        case KEY_LEFT:
            if (*lastK  != KEY_RIGHT) {
                head->vx = -1;
                head->vy = 0;
                *lastK = ch;
            }
        break;

        case KEY_RIGHT:
            if (*lastK  != KEY_LEFT) {
                head->vx = 1;
                head->vy = 0;
                *lastK = ch;
            }
        break;

        default:
        break;

    }

    return 0; 
}

