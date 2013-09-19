#ifndef LIZARDFS_MFSCOMMON_GOAL_H
#define LIZARDFS_MFSCOMMON_GOAL_H

#include <inttypes.h>

typedef uint8_t GoalID;

const uint8_t MinXorLevel = 2;
const uint8_t MaxXorLevel = 10;

GoalID xorGoalID(uint8_t xorLevel);
GoalID ordinaryGoalID(uint8_t goalLevel);

#endif // LIZARDFS_MFSCOMMON_GOAL_H
