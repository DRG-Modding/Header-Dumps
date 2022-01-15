#ifndef UE4SS_SDK_DBA_IceCaves_HPP
#define UE4SS_SDK_DBA_IceCaves_HPP

class ADBA_IceCaves_C : ADebrisDataActor
{
    UDebrisItemComponent* I_ExplodingPlants--10K(50-90)_5K(0-35)_2K(0-30);
    UDebrisItemComponent* I_IcePlantPlatform--10K(40-70);
    UDebrisDataComponent* C_TallRocks--10K(70-100)_1K(0-15);
    UDebrisItemComponent* I_Crevasse_Trap--5K(0-35);
    UDebrisDataComponent* D_GeyserPods;
    UDebrisDataComponent* D_EggPlant;
    UDebrisDataComponent* D_Grass;
    UDebrisItemComponent* I_HotSpring--5K(71-100)__A(10-15);
    UDebrisItemComponent* I_FrostGeyser--10K(20-80)_5K(50-70);
    UDebrisItemComponent* I_IceFormation2Platuaes;
    UDebrisDataComponent* C_FlatRocks--10K(60-90);
    USceneComponent* rocks;
    UDebrisItemComponent* I_ClawRockFormation--10K(50-75);
    UDebrisItemComponent* I_ClawRockFormation_Dense--10K(75-100);
    UDebrisItemComponent* I_Glaciers--5K(40-70)__A(1-5);
    UDebrisDataComponent* C_BigCrystal_Roof--10K(0-70)_5C(0-5);
    UDebrisDataComponent* C_BigCrystal_Floor--10K(0-70)_5C(0-5);
    UDebrisItemComponent* IceLights;
    USceneComponent* DECORATIVE;
    UDebrisDataComponent* DeepSnow--2K(0-75);
    UDebrisItemComponent* I_DropIceSpikes_Cave--10K(75-100)_5K(0-50);
    UDebrisDataComponent* C_BigIcicles_Floor--10K(0-70)_5C(0-20);
    UDebrisDataComponent* C_BigIcicles_Roof--10K(0-70)_5C(0-20);
    UDebrisDataComponent* D_RoofSpikes--10K(0-70)_5C(30-100);
    USceneComponent* Debris;
    USceneComponent* INTERACTIVE;
    USceneComponent* Root;
}

#endif
