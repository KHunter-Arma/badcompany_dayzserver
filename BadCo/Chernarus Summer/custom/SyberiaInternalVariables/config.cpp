class CfgPatches { class SyberiaInternalVariables { units[] = {}; requiredAddons[] = {"SyberiaServer"}; }; };

class CfgSyberia {
    class SleepingSystem {
       sleepingUnconsionEnabled = 1;
       sleepingIncPerUnconsionBoostValue = 35;
       sleepingIncPerUnconsionBoostTime = 60;
       sleepingIncPerSleepingLvl1Sec = 80;
       sleepingIncPerSleepingLvl2Sec = 120;
       sleepingHealPerSec01 = 0.0002;
       sleepingHealInfluenzaChance = 0.03;
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
       zvirusBloodLosePerSec = 0.08;
       zvirusHealthLosePerSec = 0.00625;
       zvirusCuthitSpawnChance = 0.0001;
       zvirusPainSpawnChance = 0.0006;
       zvirusOnHitIncrementTimer = 0;
       zvirusZombieHitChance = 0.0025;
       zvirusZombieBloodTransferChance = 0.25;
       zvirusAntidotHealthDmg01 = 0.075;
       painLvl1TimeSec = 600;
       painLvl2TimeSec = 1800;
       painLvl3TimeSec = 3600;
       painMaxDurationSec = 5400;
       bleedingBullethitRemoveBandagedTimeSec = -1;
       bleedingKnifehitZombieChance = 0.0015;
       bleedingKnifehitRemoveBandagedTimeSec = -1;
       bleedingVisceraHealthlosePerSecond = 0.03;
       bleedingHematomaHealthlosePerSecond = 0.00125;
       bleedingZombieHitChance = 0;
       hematomaPlayerhandsHitChance = 0;
       hematomaZombieHitChance = 0.05;
       hematomaRegenTimerSec = 7200;
       hematomaRegenTimeBoostOnSalve = 15;
       hematomaPainChance = 0.75;
       cuthitRegenTimerSec = 600;
       visceraKnifehitTorsoChance = 0.33;
       visceraBullethitTorsoChance = 0.2;
       concussionRegenTimeSec = 7200;
       concussionZombieHitChance = 0.02;
       hematopoiesisEffectBloodPerSec = 1;
       mindstateHealPerSec = 0.003;
       mindstateEmptyDeadtimeSec = 135;
       influenzaIncubatePeriodsSec[] = { 1800, 9000, 10800 };
       influenzaDeathTime[] = { 0, 0, 5400 };
       influenzaApplyOnColdWarnChance = 0.0003;
       influenzaApplyOnColdCritChance = 0.003;
       stomatchpoisonChanceDrinkWell = 0.1;
       stomatchpoisonDefaultTimes[] = { 600, 1200, 900 };
       radiationSleepingDec = 1;
       shockDecrementOnLowHealthAndBlood = 0.55;
       zombieHitDecreaseMind[] = { 0.02, 5 };
       zombieKillDecreaseMind[] = { 0.1, 10 };
    };
    class AttackSystem {
       damageGlovesOnHandsOnAttack = 0.5;
       damageHandsOnAttackChance = 0;
    };
    class ZombieSystem {
       zombieOpenDoorEnable = 0;
       zombieBloodHandsChanceOnLooting = 0.5;
       zombieAttackPlayersInUnconscious = 1;
       zombieDetectPlayerVisibilityMultiplier = 1;
    };
    class AnimalsSystem {
       animalsButchingKnifeDamage = 20;
    };
    class IngameSystem {
       bookPagesCountToCut = 20;
    };
    class SkillsExperienceSystem {
       skillsExpStealthCrouchIncrement = 12;
    };
    class WorldSystem {
       airDayTemperatureMin = 21;
       airDayTemperatureMax = 30;
       airNightTemperatureMin = 15;
       airNightTemperatureMax = 22;
       temperatureDrinkPondPenalty = -0.0005;
       temperatureDrinkWellPenalty = -0.01;
       temperatureHeightReduction = 0.015;
       clothingDrenchedHeatDrain = -0.5;
       clothingWetHeatDrain = -0.2;
       additionalTemperatureResistForSurvivalSkill = 30;
    };
};
