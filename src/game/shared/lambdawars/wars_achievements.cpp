#include "cbase.h"
#include "wars_achievements.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

#ifdef CLIENT_DLL
CWarsAchievementMgr g_WarsAchievementMgr;	// global achievement manager for Lambda Wars
CWarsAchievementMgr* WarsAchievementManager() { return &g_WarsAchievementMgr; }

CWarsAchievementMgr::CWarsAchievementMgr()
{

}


bool CWarsAchievementMgr::Init()
{
	return BaseClass::Init();
}

void CWarsAchievementMgr::Shutdown()
{
	BaseClass::Shutdown();
}

void CWarsAchievementMgr::LevelInitPreEntity()
{
	BaseClass::LevelInitPreEntity();
}

void CWarsAchievementMgr::FireGameEvent( IGameEvent *event )
{
	//const char *name = event->GetName();
	//if ( !V_strcmp( name, "some_event" ) )
	//{
	//}
	//else
	{
		BaseClass::FireGameEvent( event );
	}
}

// =====================

CWarsAchievement::CWarsAchievement()
{
}

// =====================

class CAchievement_Graduated : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		SetGoal( 1 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_Graduated, ACHIEVEMENT_WARS_GRADUATED, "WARS_GRADUATED", 5, 1 );

class CAchievement_MissionRadioTower : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		SetGoal( 1 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_MissionRadioTower, ACHIEVEMENT_WARS_MISSION_RADIO_TOWER, "WARS_MISSION_RADIO_TOWER", 5, 10 );

class CAchievement_MissionAbandoned : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		SetGoal( 1 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_MissionAbandoned, ACHIEVEMENT_WARS_MISSION_ABANDONED, "WARS_MISSION_ABANDONED", 5, 20 );

class CAchievement_MissionValley : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		SetGoal( 1 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_MissionValley, ACHIEVEMENT_WARS_MISSION_VALLEY, "WARS_MISSION_VALLEY", 5, 30 );

class CAchievement_AnnihilationVictorious : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		SetGoal( 1 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_AnnihilationVictorious, ACHIEVEMENT_WARS_ANNIHILATION_VICTORIOUS, "WARS_ANNIHILATION_VICTORIOUS", 5, 40 );

class CAchievement_AnnihilationKingOfTheHill : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		//SetStoreProgressInSteam( true );
		SetGoal( 20 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_AnnihilationKingOfTheHill, ACHIEVEMENT_WARS_ANNIHILATION_KINGOFTHEHILL, "WARS_ANNIHILATION_KINGOFTHEHILL", 5, 50 );

class CAchievement_AnnihilationGladiator : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		//SetStoreProgressInSteam( true );
		SetGoal( 100 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_AnnihilationGladiator, ACHIEVEMENT_WARS_ANNIHILATION_GLADIATOR, "WARS_ANNIHILATION_GLADIATOR", 5, 60 );
	
class CAchievement_DestroyHQVandalism : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		//SetStoreProgressInSteam( true );
		SetGoal( 20 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_DestroyHQVandalism, ACHIEVEMENT_WARS_DESTROYHQ_VANDALISM, "WARS_DESTROYHQ_VANDALISM", 5, 70 );

class CAchievement_DestroyHQWreckingBall : public CWarsAchievement
{
	void Init() 
	{
		SetFlags( ACH_SAVE_GLOBAL );
		//SetStoreProgressInSteam( true );
		SetGoal( 20 );
	}
	// server fires an event for this achievement, no other code within achievement necessary
};
DECLARE_ACHIEVEMENT_ORDER( CAchievement_DestroyHQWreckingBall, ACHIEVEMENT_WARS_DESTROYHQ_WRECKINGBALL, "WARS_DESTROYHQ_WRECKINGBALL", 5, 70 );
	

#endif