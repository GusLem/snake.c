#include "spawn.h"

void SpawnsFood(Food* food) {
    food->x = rand() % 50;
    food->y = rand() % 15;
}