#include <ncurses.h>
#include <stdlib.h>
#include "data.h"
#include "spawn.h"


void SnakeChecksFood(int x, int y, Food* food, int* newBody);
void UpdateSnake(Body* body, int x, int y);