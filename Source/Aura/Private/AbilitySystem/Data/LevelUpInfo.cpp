


#include "AbilitySystem/Data/LevelUpInfo.h"

int32 ULevelUpInfo::FindLevelForEXP(int32 XP) const
{
	int32 Level = 1;
	bool bSearching = true;
	while (bSearching)
	{
		// LevelUpInformation[1] = Level 1 information
		// LevelUpInformation[2] = Level 2 information
		if (LevelUpInfo.Num() - 1 <= Level) return Level;

		if (XP >= LevelUpInfo[Level].LevelUpRequirement)
		{
			++Level;
		} else
		{
			bSearching = false;
		}
		
	};

	return Level;
}
