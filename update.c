#include "update.h"

void SnakeChecksFood(int x, int y, Food* food, int* newBody) {
    if ((food->x == x) && (food->y == y)) {
        *newBody = true;
        SpawnsFood(food);
    }
}

void UpdateSnake(Body* body, int x, int y) {
    if (body->next != NULL)
        UpdateSnake(body->next,body->x,body->y);
    body->x = x;
    body->y = y;
}
