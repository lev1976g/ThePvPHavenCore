#include "ScriptPCH.h"

enum class_racials
{
	ESCAPE_ARTIST=20589,
	EVERY_MAN_FOR_HIMSELF=59752,
	PERCEPTION=20600,
	SHADOWMELD=58984,
	GIFT_OF_THE_NAARU=59547,
	STONEFORM=20594,
	BLOODFURY=20572,
	WAR_STOMP=20549,
	BERSERKING=26297,
	WILL_OF_THE_FORSAKEN=7744,
	ARCANE_TORRENT=28730,
	TEST_FOR_GITHUB=5555555,
	FIND_TREASURE=2481,
	HEROIC_PRESENCE=6562
};

class racials : public CreatureScript
{
public:
	racials() : CreatureScript("racials") {}

	bool OnGossipHello(Player* player, Creature* creature)
	{
		if(!player->HasSpell(ESCAPE_ARTIST) && !player->HasSpell(EVERY_MAN_FOR_HIMSELF) && !player->HasSpell(PERCEPTION) && !player->HasSpell(SHADOWMELD) &&
		!player->HasSpell(GIFT_OF_THE_NAARU) && !player->HasSpell(STONEFORM) && !player->HasSpell(BLOODFURY) && !player->HasSpell(WAR_STOMP) &&
		!player->HasSpell(BERSERKING) && !player->HasSpell(WILL_OF_THE_FORSAKEN) && !player->HasSpell(ARCANE_TORRENT) && !player->HasSpell(FIND_TREASURE) &&
		!player->HasSpell(HEROIC_PRESENCE))
		{
			player->ADD_GOSSIP_ITEM(5, "Pick a Racial", GOSSIP_SENDER_MAIN, 0);
			player->ADD_GOSSIP_ITEM(5, "Nevermind", GOSSIP_SENDER_MAIN, 100);
			player->SEND_GOSSIP_MENU(1, creature->GetGUID());
		}
		else if (player->HasSpell(ESCAPE_ARTIST) || player->HasSpell(EVERY_MAN_FOR_HIMSELF) || player->HasSpell(PERCEPTION) || player->HasSpell(SHADOWMELD) ||
		player->HasSpell(GIFT_OF_THE_NAARU) || player->HasSpell(STONEFORM) || player->HasSpell(BLOODFURY) || player->HasSpell(WAR_STOMP) ||
		player->HasSpell(BERSERKING) || player->HasSpell(WILL_OF_THE_FORSAKEN) || player->HasSpell(ARCANE_TORRENT) || player->HasSpell(FIND_TREASURE) ||
		player->HasSpell(HEROIC_PRESENCE))
		{
			player->ADD_GOSSIP_ITEM(5, "Unlearn My Racial", GOSSIP_SENDER_MAIN, 50);
			player->ADD_GOSSIP_ITEM(5, "Nevermind", GOSSIP_SENDER_MAIN, 100);
			player->SEND_GOSSIP_MENU(1, creature->GetGUID());
		}	
		return true;
	}

	bool OnGossipSelect(Player* player, Creature* creature, uint32 sender, uint32 action)
	{
		switch (action)
		{
		case 100:
			player->CLOSE_GOSSIP_MENU();
			break;
		case 0:
			player->PlayerTalkClass->ClearMenus();
			player->ADD_GOSSIP_ITEM(5, "Escape Artist", GOSSIP_SENDER_MAIN, 5);
			player->ADD_GOSSIP_ITEM(5, "Every Man for Himself", GOSSIP_SENDER_MAIN, 6);
			player->ADD_GOSSIP_ITEM(5, "Perception", GOSSIP_SENDER_MAIN, 7);
			player->ADD_GOSSIP_ITEM(5, "Shadowmeld", GOSSIP_SENDER_MAIN, 8);
			player->ADD_GOSSIP_ITEM(5, "Gift of the Naaru", GOSSIP_SENDER_MAIN, 9);
			player->ADD_GOSSIP_ITEM(5, "Stoneform", GOSSIP_SENDER_MAIN, 10);
			player->ADD_GOSSIP_ITEM(5, "Bloodfury", GOSSIP_SENDER_MAIN, 11);
			player->ADD_GOSSIP_ITEM(5, "War Stomp", GOSSIP_SENDER_MAIN, 12);
			player->ADD_GOSSIP_ITEM(5, "Berserking", GOSSIP_SENDER_MAIN, 13);
			player->ADD_GOSSIP_ITEM(5, "Will of the Forsaken", GOSSIP_SENDER_MAIN, 14);
			player->ADD_GOSSIP_ITEM(5, "Arcane Torrent", GOSSIP_SENDER_MAIN, 15);
			player->ADD_GOSSIP_ITEM(5, "Find Treasure", GOSSIP_SENDER_MAIN, 20);
			player->ADD_GOSSIP_ITEM(5, "Heroic Presence", GOSSIP_SENDER_MAIN, 21);
			player->ADD_GOSSIP_ITEM(5, "Nevermind", GOSSIP_SENDER_MAIN, 100);
			player->SEND_GOSSIP_MENU(1, creature->GetGUID());
			break;
		}
	

		if (action == 5)
		{
			player->learnSpell(20589, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 6)
		{
			player->learnSpell(59752, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 7)
		{
			player->learnSpell(20600, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 8)
		{
			player->learnSpell(58984, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 9)
		{
			player->learnSpell(59547, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 10)
		{
			player->learnSpell(20594, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 11)
		{
			player->learnSpell(20572, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 12)
		{
			player->learnSpell(20549, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 13)
		{
			player->learnSpell(26297, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 14)
		{
			player->learnSpell(7744, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 15)
		{
			player->learnSpell(28730, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 20)
		{
			player->learnSpell(2481, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 21)
		{
			player->learnSpell(6562, false);
			player->CLOSE_GOSSIP_MENU();
		}
		else if (action == 50)
		{
			uint32 racial;
			if (racial = player->HasSpell(ESCAPE_ARTIST)){
			player->removeSpell(ESCAPE_ARTIST);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(EVERY_MAN_FOR_HIMSELF)){
			player->removeSpell(EVERY_MAN_FOR_HIMSELF);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(PERCEPTION)){
			player->removeSpell(PERCEPTION);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(SHADOWMELD)){
			player->removeSpell(SHADOWMELD);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(GIFT_OF_THE_NAARU)){
			player->removeSpell(GIFT_OF_THE_NAARU);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(STONEFORM)){
			player->removeSpell(STONEFORM);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(BLOODFURY)){
			player->removeSpell(BLOODFURY);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(WAR_STOMP)){
			player->removeSpell(WAR_STOMP);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(BERSERKING)){
			player->removeSpell(BERSERKING);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(WILL_OF_THE_FORSAKEN)){
			player->removeSpell(WILL_OF_THE_FORSAKEN);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(ARCANE_TORRENT)){
			player->removeSpell(ARCANE_TORRENT);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(FIND_TREASURE)){
			player->removeSpell(FIND_TREASURE);
			player->CLOSE_GOSSIP_MENU();}
			else if (racial = player->HasSpell(HEROIC_PRESENCE)){
			player->removeSpell(HEROIC_PRESENCE);
			player->CLOSE_GOSSIP_MENU();}
		}
		return true;
	}
};

class nagrand_tele : public CreatureScript
{
public:
	nagrand_tele() : CreatureScript("nagrand_tele") {}

	bool OnGossipHello(Player* player, Creature* creature)
	{
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_TAXI, "Nagrand Mall.", GOSSIP_SENDER_MAIN, 0);
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_TAXI, "Trainers.", GOSSIP_SENDER_MAIN, 2);
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Nevermind.", GOSSIP_SENDER_MAIN, 1);
		player->SEND_GOSSIP_MENU(1, creature->GetGUID());
		return true;
	}

	bool OnGossipSelect(Player* player, Creature* creature, uint32 sender, uint32 action)
	{
		player->PlayerTalkClass->ClearMenus();

		switch(action)
		{
		case 0:
			if (player->GetTeam() == ALLIANCE){
				player->TeleportTo(530, -2768.87f, 7323.51f, 56.29f, 5.63f, 1);}
			else if (player->GetTeam() == HORDE){
				player->TeleportTo(530, -1232.60f, 7162.75f, 57.26f, 2.57f, 1);}
			break;
		case 1:
			player->PlayerTalkClass->SendCloseGossip();
			break;
		case 2:
			if (!player->IsInCombat()){
			if (player->getClass() == CLASS_PALADIN || player->getClass() == CLASS_WARRIOR 
				|| player->getClass() == CLASS_SHAMAN || player->getClass() == CLASS_ROGUE){
					player->TeleportTo(0, -11031.20f, -1606.07f, 27.97f, 4.76f, 1);
			}
			else if (player->getClass() == CLASS_HUNTER || player->getClass() == CLASS_MAGE 
				|| player->getClass() == CLASS_PRIEST || player->getClass() == CLASS_WARLOCK
				|| player->getClass() == CLASS_DRUID){
					player->TeleportTo(0, -11063.00f, -1604.07f, 27.97f, 4.76f, 1);
			}}else{ChatHandler(player->GetSession()).PSendSysMessage("You can't do that in combat!");}
			break;
		}

		return true;
	}
};

class neutralzone : public PlayerScript
{
public:
	neutralzone() : PlayerScript("neutralzone") {}

	void OnUpdateZone(Player* player, uint32 sender, uint32 action)
	{
		switch (player->GetZoneId())
		{
		case 41:
			player->SetFlag(PLAYER_FLAGS, PLAYER_FLAGS_UNK16);
			break;
		case 10:
			player->SetFlag(PLAYER_FLAGS, PLAYER_FLAGS_UNK16);
			break;
		}
	}

};



void AddSC_racials()
{
	new racials;
	new nagrand_tele;
	new neutralzone;
}