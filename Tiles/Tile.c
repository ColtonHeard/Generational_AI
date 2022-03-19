#include "Tile.h"

OceanTile* tileAsOcean(Tile* tile) {
    if (tile->type == ocean) {
        return ((OceanTile*)(tile));
    }
    else {
        return NULL;
    }
}

void applyTileEffect(Tile* tile, Agent* agent) {
    switch (tile->type) {
        case ocean:
            // stuff
        case mou
    }
}