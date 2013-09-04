/*
Created by Michael923
For: Talents


*/
#include "ScriptPCH.h"

enum classes
{
Warrior = 1,
Paladin = 2,
Hunter = 3,
Rogue = 4,
Priest = 5,
Deathknight = 6,
Shaman = 7,
Mage = 8,
Warlock = 9,
Druid = 11
};

class spec_talents : public PlayerScript
{
public:
	spec_talents() : PlayerScript("spec_talents") {}

	void OnFreeTalentPointsChanged(Player* player, uint32 spell)
	{
		if (player->getClass() == Hunter)
		{
			if (player->HasSpell(19434))
			{
				player->learnSpell(20901, false);
			}
		}
		else if (player->getClass() == Warlock) // i wanna test this before i keep adding
		{
			if (player->HasSpell(29341))
			{
				player->learnSpell(18868, false);
			}
		}
	}
};

void AddSC_spec_talents()
{
	new spec_talents();
}