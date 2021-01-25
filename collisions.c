#include "collisions.h"

int CollisionWalls(int x, int y) {
    return ((x < 0) || x >= 50 || y < 0 || y >= 15);
}

int CollisionBody(int x, int y, Body* body) {
    if (body == NULL)
        return 0;
    if ((body->x == x) && (body->y == y))
        return 1;
    return CollisionBody(x,y,body->next);
}
