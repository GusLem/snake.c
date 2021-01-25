#include "ends.h"

void ResetSnake(Body* body) {
    if (body->next == NULL)
        return;
    ResetSnake(body->next);
    free(body->next);
    body->next = NULL;
}

void GameOver(Head* head, Food* food, int* lastK) {
    if (head->next != NULL) {
        ResetSnake(head->next);
        free(head->next);
        head->next = NULL;
        head->last = NULL;
    }
    head->x = 25;
    head->y = 7;
    head->vx = 0;
    head->vy = 0;
    *lastK = 0;
    SpawnsFood(food);
}
