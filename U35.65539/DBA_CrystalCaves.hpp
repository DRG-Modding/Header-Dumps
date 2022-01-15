#ifndef UE4SS_SDK_DBA_CrystalCaves_HPP
#define UE4SS_SDK_DBA_CrystalCaves_HPP

class ADBA_CrystalCaves_C : ADebrisDataActor
{
    UDebrisItemComponent* I_HugeCrystalStar--15K(0-50)_2K(0-50);
    UDebrisDataComponent* D_SmallInfluencerCrystals2;
    UDebrisItemComponent* I_Child_SlantedCrystalPillar_Solo--2K(11-50);
    UDebrisItemComponent* I_Child_SlantedCrystalPillars--2K(11-50);
    UDebrisItemComponent* I_SlantedCrystalPillars--15K(51-100)_2K(11-50);
    UDebrisItemComponent* I_CrystalArch--15K(51-100)_2K(11-50);
    UDebrisDataComponent* D_SmallInfluencerCrystals_Tunnels1;
    UDebrisDataComponent* C_BigCrystals_Tunnels_Roof--2K(51-70)1;
    UDebrisDataComponent* D_SmallInfluencerCrystals1;
    UDebrisDataComponent* C_BigCrystals_Floor01--2K(51-100);
    UDebrisDataComponent* D_SmallInfluencerCrystalsArch;
    UDebrisDataComponent* D_RubbleFromCrystals_Tunnels;
    UDebrisDataComponent* D_RubbleFromCrystals_Rooms;
    UDebrisProbabilityComponent* LargeStructureProbability_R(51-100);
    UDebrisProbabilityComponent* LargeStructureProbability_R(0-50);
    UDebrisItemComponent* I_LargeSpikeyBunch--15K(0-50)_2K(0-50);
    UDebrisDataComponent* D_RoofSpikes_Medium;
    UDebrisDataComponent* C_BigCrystals_Roof01--2K(51-100);
    UDebrisDataComponent* C_Rocks01;
    UDebrisDataComponent* D_Rubble;
    UDebrisDataComponent* C_MediumCrystals_Floor01--2K(51-100);
    UDebrisDataComponent* D_RoofSpikes_Small;
    UDebrisDataComponent* C_BigCrystals_Tunnels_Floor--2K(51-70);
    USceneComponent* Debris;
    UDebrisItemComponent* I_CrystalRockPillars--PROTOTYPE--DISABLED;
    UDebrisDataComponent* DebrisData;
    UDebrisItemComponent* I_StickySpiderWeb--r50K(0-50)_r15K(0-50)_2K(0-50)_5C(40-60);
    UDebrisProbabilityComponent* DebrisProbability_R(0-50);
    UDebrisItemComponent* I_SwarmerTunnels--r15K(0-40)_5K(0-70)_r2K(0-30);
    UDebrisItemComponent* I_ElectricPlant_Tunnels--15K(0-30)_5K(70-100);
    UDebrisItemComponent* I_ElectricPlant_Cave--15K(0-30)_5K(80-100);
    UDebrisDataComponent* D_SmallInfluencerCrystals_Tunnels;
    UDebrisItemComponent* I_GlowingBlueCrystals_Tunnels--15K(40-100)_2K(0-15);
    UDebrisDataComponent* D_SulfurDeposits;
    UDebrisItemComponent* I_SulfurChimneys--50K(0-50)_15K(30-100)_2K(90-95);
    UDebrisItemComponent* I_CreepyEyes_Tunnels--r50K(0-5)_2K(15-20);
    UDebrisItemComponent* I_GlowingBlueCrystals--15K(41-100)_2K(0-5);
    USceneComponent* INTERACTIVE;
    UDebrisDataComponent* DebrisNoise;
    UDebrisDataComponent* DebrisUniform;
    UDebrisDataComponent* D_SmallInfluencerCrystals;
    USceneComponent* Root;
}

#endif
