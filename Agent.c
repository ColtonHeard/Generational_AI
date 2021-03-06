#include "Agents/Agent.h"

static Id agentCount = 0;

void initAgent(Agent agent) {
    agent.id = agentCount;
    agentCount++;

    agent.health = 100;
    agent.food = 100;
    agent.water = 100;
    agent.wood = 0;
}

void updateAgent(Agent agent) {
    agent.food -= 1;
    agent.water -= 1;
}
