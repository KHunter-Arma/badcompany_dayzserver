class CfgPatches { class SyberiaInternalVariables { units[] = {}; requiredAddons[] = {"SyberiaServer"}; }; };

class CfgSyberia {
    class SleepingSystem {
       sleepingHealPerSec01 = 0.0002;
       sleepingHealInfluenzaChance = 0.33;
    };
    class MedicineSystem {
       sepsisStage1TimeSec = 3600;
       sepsisStage2TimeSec = 14400;
       sepsisDeathTimeSec = 7200;
       sepsisZombieHitChance = 0.005;
       sepsisKnifeHitChance = 0.33;
       zvirusStage1TimeSec = 10800;
       zvirusStage2TimeSec = 43200;
       zvirusDeathTimeSec = 21600;
       zvirusBloodLosePerSec = 0.005;
       zvirusHealthLosePerSec = 0.0025;
       zvirusCuthitSpawnChance = 0.008;
       zvirusPainSpawnChance = 0.0006;
       zvirusOnHitIncrementTimer = 0;
       zvirusZombieHitChance = 0.005;
       zvirusZombieBloodTransferChance = 0.2;
       painLvl1TimeSec = 600;
       painLvl2TimeSec = 1800;
       painLvl3TimeSec = 3600;
       painMaxDurationSec = 5400;
       bleedingKnifehitZombieChance = 0.004;
       bleedingKnifehitRemoveBandagedTimeSec = -1;
       bleedingVisceraHealthlosePerSecond = 0.03;
       bleedingHematomaHealthlosePerSecond = 0.001;
       hematomaPlayerhandsHitChance = 0.33;
       hematomaZombieHitChance = 0.4;
       hematomaRegenTimerSec = 900;
       hematomaRegenTimeBoostOnSalve = 15;
       cuthitRegenTimerSec = 600;
       visceraKnifehitTorsoChance = 0.33;
       visceraBullethitTorsoChance = 0.2;
       concussionRegenTimeSec = 7200;
       mindstateHealPerSec = 0.01;
       mindstateEmptyDeadtimeSec = 300;
       influenzaIncubatePeriodsSec[] = { 1800, 9000, 10800 };
       influenzaDeathTime[] = { 0, 0, 5400 };
       influenzaApplyOnColdWarnChance = 0.0003;
       influenzaApplyOnColdCritChance = 0.003;
       stomatchpoisonChanceDrinkWell = 0.1;
       stomatchpoisonDefaultTimes[] = { 600, 1200, 900 };
       zombieHitDecreaseMind[] = { 0.133, 5 };
       zombieKillDecreaseMind[] = { 0.1, 10 };
    };
    class AttackSystem {
    };
    class ZombieSystem {
       zombieOpenDoorEnable = 0;
       zombieBloodHandsChanceOnLooting = 0.5;
       zombieAttackPlayersInUnconscious = 0;
    };
    class AnimalsSystem {
       animalsButchingKnifeDamage = 20;
    };
    class IngameSystem {
       bookPagesCountToCut = 20;
    };
    class SkillsExperienceSystem {
    };
    class WorldSystem {
       airDayTemperatureMin = 21;
       airDayTemperatureMax = 32;
       airNightTemperatureMin = 15;
       airNightTemperatureMax = 22;
       temperatureDrinkPondPenalty = -0.0005;
       temperatureDrinkWellPenalty = -0.01;
       temperatureHeightReduction = 0.01;
       clothingDrenchedHeatDrain = -0.5;
       clothingWetHeatDrain = -0.2;
       additionalTemperatureResistForSurvivalSkill = 30;
    };
};
