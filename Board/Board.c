#include "Board.h"
#include <stdlib.h>

Board initBoard(int length, int width) {
    Tile*** tiles = calloc(width + 1, sizeof(void*));

    for (int x; x <= length; x++) {
        tiles[x] = calloc(length + 1, sizeof(Tile*));
    }




    Agent* nullAgents = calloc(0, sizeof(Agent));

    Board board = {tiles, nullAgents, agentCount};

    return board;
}
