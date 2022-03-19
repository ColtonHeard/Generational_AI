#include "Agent.h"

static int agentCount = 0;

void initAgent(Agent agent) {
    agent.id = agentCount;
    agentCount++;

    agent.food = 100;
    agent.water = 100;
    agent.wood = 0;
}

void updateAgent(Agent agent) {
    agent.food -= 1;
    agent.water -= 1;
}
