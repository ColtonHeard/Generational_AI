#include <stdio.h>
#include <stdlib.h>
#include "Board.c"

int main(void) {

    /* Board, Tile, Lake, Woods, Berries, City, Mountain, Actions */

    Board game_board;
    
    for (int i = 0; i < 50; i++)
    {
        game_board.board[i].value = i;
    }
    
    printf("%d\n", game_board.board[10].value);

    exit(EXIT_SUCCESS);
}