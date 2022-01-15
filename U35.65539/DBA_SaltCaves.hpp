#ifndef UE4SS_SDK_DBA_SaltCaves_HPP
#define UE4SS_SDK_DBA_SaltCaves_HPP

class ADBA_SaltCaves_C : ADebrisDataActor
{
    UDebrisItemComponent* I_SaltColumnGrowths--15K(0-60)_5K(71-100);
    UDebrisDataComponent* D_SmallInfluencerSaltFlakes;
    UDebrisDataComponent* SMC_LargeSaltFlakes--15K(61-100)_2K(10-30);
    UDebrisDataComponent* D_SmallInfluencerSaltCubes;
    UDebrisItemComponent* I_HugeSaltCubes--15K(0-60)_5K(71-100)_2K(0-35);
    UDebrisDataComponent* D_InfluencerCrystals;
    UDebrisItemComponent* I_FragilePlatforms--b15K(51-100)_5K(0-70)_2K(0-20)_1K(0-50);
    UDebrisItemComponent* I_SuckingPlant--Max_0-4--DISABLED;
    UDebrisDataComponent* D_SmallInfluencerCrystals_Tunnels--15K(25-75)_5K(0-25);
    UDebrisDataComponent* SwarmerTunnelDebris;
    UDebrisItemComponent* I_SwarmerTunnels--r15K(0-25)_r2K(0-25);
    UDebrisItemComponent* I_DropSpikes_Cave--b15K(0-50)_5K(0-70);
    UDebrisDataComponent* D_SmallInfluencerCrystals;
    UDebrisDataComponent* D_SmallInfluencerSaltCrystals;
    UDebrisDataComponent* C_SaltCrystals_Wall--15K(61-100);
    UDebrisDataComponent* C_BigCrystals_Caves--2K(41-100)_50(51-70);
    UDebrisDataComponent* C_Rocks01;
    UDebrisDataComponent* D_Rubble;
    UDebrisDataComponent* C_BigCrystals_Floor01--2K(41-100);
    UDebrisDataComponent* C_SaltCrystals_Floor--15K(61-100)_5K(0-50);
    UDebrisItemComponent* I_DustClouds;
    UDebrisDataComponent* C_BigCrystals_Tunnels--2K(31-40)_50(0-20);
    UDebrisDataComponent* D_RoofSpikes--50(100-10000);
    USceneComponent* Basic;
    UDebrisItemComponent* I_GlowingRedCrystals_Tunnels--15K(0-50)_2K(0-15);
    UDebrisItemComponent* I_GlowingRedCrystals--15K(0-50)_2K(0-5);
    USceneComponent* INTERACTIVE;
    USceneComponent* Root;
}

#endif
