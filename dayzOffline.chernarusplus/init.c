void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 6, reset_day = 21;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);
	GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	
	//test
/* 	GetGame().GetMission().GetWorldData().m_TemperaturePerHeightReductionModifier = 0.015;
	GetGame().GetMission().GetWorldData().m_WaterContactTemperatureModifier = 0.0000001;
	GetGame().GetMission().GetWorldData().m_CloudsTemperatureEffectModifier = 0.0000001;
	GetGame().GetMission().GetWorldData().m_TemperatureInsideBuildingsModifier = 0.0000001;	
	GetGame().GetWeather().SetDynVolFogHeightBias(1, 0);
	GetGame().GetWeather().SetDynVolFogDistanceDensity(0, 0);
	GetGame().GetWeather().SetDynVolFogHeightDensity(0, 0); */
	
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{

		player.RemoveAllItems();
		player.GetStatEnergy().Set(7500);
		player.GetStatWater().Set(7500);
		
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}