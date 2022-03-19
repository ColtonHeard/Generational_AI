#include <stdio.h>
#include <stdlib.h>
#include "Board/Board.c"

int main(void) {

    /* Board, Tile, Lake, Woods, Berries, City, Mountain, Actions */

    Board game_board;
    
    initBoard(10, 10);
    
    printf("%d\n", game_board.tiles[5][5].value);

    exit(EXIT_SUCCESS);
}