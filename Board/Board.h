#pragma once

#include "common_types.c"
#include "Agents/Agent.c"
#include "Tiles/Tile.h"

#define BOARD_LENGTH 5
#define BOARD_WIDTH 5
#define BOARD_SIZE BOARD_LENGTH * BOARD_WIDTH

typedef struct Board {
	Tile** tiles;

    Agent* agents;
    unsigned char agentCount;
} Board;

Board initBoard(int length, int width);