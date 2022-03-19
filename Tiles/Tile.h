#pragma once
#include <stddef.h>
#include "Agents/Agent.h"

typedef enum TileType {
    empty, 
    mountain,
    ocean,
    forest,
    berries
} TileType;

typedef struct Tile {
    TileType type;
    int value;
} Tile;

typedef struct ForestTile {
    struct Tile;
    unsigned int treCount;
    char* treeType[128];
} ForestTile;

typedef struct OceanTile {
    struct Tile;
    unsigned int fishCount;
} OceanTile;

void applyTileEffect(Tile* tile, Agent* agent);
