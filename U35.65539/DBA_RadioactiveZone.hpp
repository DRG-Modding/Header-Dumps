#ifndef UE4SS_SDK_DBA_RadioactiveZone_HPP
#define UE4SS_SDK_DBA_RadioactiveZone_HPP

class ADBA_RadioactiveZone_C : ADebrisDataActor
{
    UDebrisItemComponent* I_FallenTreeTrunks--DISABLED;
    UDebrisItemComponent* I_MoreTreeTrunks--DISABLED;
    UDebrisItemComponent* I_Child_BrokenDNAChunks--2K(31-70);
    UDebrisItemComponent* I_TreeTrunks--15K(81-100)--DISABLED;
    UDebrisDataComponent* D_SmallDebrisFromDNA;
    UDebrisDataComponent* D_DNASmallCrystals--DISABLED;
    UDebrisItemComponent* I_BrokenDNA--15K(51-70)_2K(31-70);
    UDebrisDataComponent* C_Uranium_BigCrystals--10(0-4);
    UDebrisDataComponent* D_Uranium_SmallCrystals--10(10-15);
    UDebrisDataComponent* DebrisData;
    UDebrisItemComponent* I_SwarmerTunnels--15K(51-95)_r2K(0-25);
    UDebrisItemComponent* I_StickySpiderWeb--r50K(0-85)_r15K(0-50)_r2K(0-50)_5C(25-75);
    UDebrisItemComponent* I_BlobPlant--3C(0-1);
    UDebrisItemComponent* I_MouthPlant--15K(50-100)_2K(51-100)_1C(0-1);
    UDebrisItemComponent* I_PingPongPlant--15K(0-50)_2K(0-50);
    UDebrisItemComponent* I_WormPlant--15K(25-75)_3C(10-11)_1C(10-11);
    UDebrisItemComponent* I_GlowingGreenCrystals--15K(0-30)_2K(80-100)_5C(0-50);
    UDebrisDataComponent* D_CobWebs-DISABLED;
    UDebrisItemComponent* I_SmartCaveVines--15K(31-80)_2K(40-80)_3C(20-60);
    UDebrisItemComponent* I_DeadTree--15K(25-75)_5K(0-40)_5C(20-50);
    UDebrisItemComponent* I_CreepyEyes--r50K(0-10)_15K(51-100)_2K(0-50);
    USceneComponent* Active;
    UDebrisDataComponent* C_Roof_SharpRock_Fat;
    UDebrisDataComponent* C_Roof_SharpRock;
    UDebrisDataComponent* DebrisBulb;
    UDebrisDataComponent* DebrisSmall;
    UDebrisDataComponent* DebrisBasic;
    UDebrisDataComponent* C_Roof_BigSpikes;
    UDebrisDataComponent* D_Rubble;
    USceneComponent* Basic;
    USceneComponent* Root;
}

#endif
