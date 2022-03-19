#pragma once

#include "common_types.c"

#define AGENT_COUNT_MAX 10

typedef struct Agent {
    Id id;
    int health;
    int food;
    int water;
    int wood;
} Agent;

void initAgent(Agent agent);
void updateAgent(Agent agent);