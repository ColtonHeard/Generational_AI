#define BOARD_LENGTH 5
#define BOARD_WIDTH 5
#define BOARD_SIZE BOARD_LENGTH * BOARD_WIDTH

enum TileType {
    mountain,
    forest,
    lake,
    woods,
    empty
};

typedef struct Tile {
    int value;

} Tile;

typedef struct Board {
	Tile board[BOARD_SIZE];
} Board;
