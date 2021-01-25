#include <ncurses.h>
#include <stdlib.h>
#include "data.h"
#include "input.h"
#include "collisions.h"
#include "update.h"
#include "draw.h"

int RunsGame(Head* head, Food* food, int* newBody, int* lastK);