#ifndef UE4SS_SDK_DBA_SandblastedCorridors_HPP
#define UE4SS_SDK_DBA_SandblastedCorridors_HPP

class ADBA_SandblastedCorridors_C : public ADebrisDataActor
{
    class UDebrisItemComponent* I_GiantFossils_Rare--r50K(0-50)_15K(40-70)_5K(0-50);
    class UDebrisProbabilityComponent* DebrisProbability;
    class UDebrisItemComponent* I_SandArches--15K(0-50)_5K(0-30);
    class UDebrisItemComponent* I_SpikeyPlant--15K(0-20)_5K(50-100);
    class UDebrisItemComponent* I_SandGeyser--b15K(30-100)_5K(50-100);
    class UDebrisDataComponent* DebrisData2;
    class UDebrisItemComponent* I_SwarmerTunnels--b15K(0-30)_r2K(0-25);
    class UDebrisItemComponent* I_ElectricPlantTunnels--15K(0-30)_5K(70-100)--DISABLED;
    class UDebrisDataComponent* D_Rubble_Dark--r60(0-2);
    class UDebrisDataComponent* D_IslandRubble;
    class UDebrisItemComponent* I_DeadTree--15K(0-40)_1K(10-40);
    class UDebrisItemComponent* I_RockIslandCarvers--15K(50-80)_5K(50-100);
    class UDebrisItemComponent* I_ElectricPlantCave--15K(0-30)_5K(85-100)--DISABLED;
    class UDebrisItemComponent* I_Honeycomb--15K(30-60);
    class UDebrisItemComponent* I_GlowTree--15K(0-50)_5C(30-40)--DISABLED;
    class UDebrisDataComponent* DebrisData1;
    class UDebrisDataComponent* DebrisData;
    class UDebrisDataComponent* C_RockFormations03--15K(0-50)_1K(0-30);
    class UDebrisDataComponent* C_RockFormations--r5C(0-5);
    class UDebrisItemComponent* I_BombSpitter--15K(70-100)_1K(0-20);
    class USceneComponent* Active;
    class UDebrisDataComponent* D_Rubble-Sparce;
    class UDebrisDataComponent* D_Rubble--r2C(0-1);
    class USceneComponent* Passive;
    class USceneComponent* Root;

};

#endif
