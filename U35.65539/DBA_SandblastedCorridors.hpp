#ifndef UE4SS_SDK_DBA_SandblastedCorridors_HPP
#define UE4SS_SDK_DBA_SandblastedCorridors_HPP

class ADBA_SandblastedCorridors_C : ADebrisDataActor
{
    UDebrisItemComponent* I_GiantFossils_Rare--r50K(0-50)_15K(40-70)_5K(0-50);
    UDebrisProbabilityComponent* DebrisProbability;
    UDebrisItemComponent* I_SandArches--15K(0-50)_5K(0-30);
    UDebrisItemComponent* I_SpikeyPlant--15K(0-20)_5K(50-100);
    UDebrisItemComponent* I_SandGeyser--b15K(30-100)_5K(50-100);
    UDebrisDataComponent* DebrisData2;
    UDebrisItemComponent* I_SwarmerTunnels--b15K(0-30)_r2K(0-25);
    UDebrisItemComponent* I_ElectricPlantTunnels--15K(0-30)_5K(70-100)--DISABLED;
    UDebrisDataComponent* D_Rubble_Dark--r60(0-2);
    UDebrisDataComponent* D_IslandRubble;
    UDebrisItemComponent* I_DeadTree--15K(0-40)_1K(10-40);
    UDebrisItemComponent* I_RockIslandCarvers--15K(50-80)_5K(50-100);
    UDebrisItemComponent* I_ElectricPlantCave--15K(0-30)_5K(85-100)--DISABLED;
    UDebrisItemComponent* I_Honeycomb--15K(30-60);
    UDebrisItemComponent* I_GlowTree--15K(0-50)_5C(30-40)--DISABLED;
    UDebrisDataComponent* DebrisData1;
    UDebrisDataComponent* DebrisData;
    UDebrisDataComponent* C_RockFormations03--15K(0-50)_1K(0-30);
    UDebrisDataComponent* C_RockFormations--r5C(0-5);
    UDebrisItemComponent* I_BombSpitter--15K(70-100)_1K(0-20);
    USceneComponent* Active;
    UDebrisDataComponent* D_Rubble-Sparce;
    UDebrisDataComponent* D_Rubble--r2C(0-1);
    USceneComponent* Passive;
    USceneComponent* Root;
}

#endif
