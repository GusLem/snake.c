#include <ncurses.h>
#include <stdlib.h>
#include "data.h"
#include "spawn.h"

void ResetSnake(Body* body);
void GameOver(Head* head, Food* food, int* lastK);