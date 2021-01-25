#include <ncurses.h>
#include <stdlib.h>
#include "data.h"

int CollisionWalls(int x, int y);
int CollisionBody(int x, int y, Body* body);