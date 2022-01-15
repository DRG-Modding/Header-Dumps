#ifndef UE4SS_SDK_DBA_AzureWeald_HPP
#define UE4SS_SDK_DBA_AzureWeald_HPP

class ADBA_AzureWeald_C : ADebrisDataActor
{
    UDebrisDataComponent* DebrisData;
    UDebrisItemComponent* I_MagicCrystal;
    UDebrisProbabilityComponent* MagicCrystals_DebrisProbability--Shared(70-100);
    UDebrisItemComponent* I_Magichole;
    UDebrisProbabilityComponent* MagicHole_DebrisProbability--Shared(0-30);
    UDebrisItemComponent* I_LargeRootsCarversSingleGround--b15K(0-50)_5K(50-100)_1K(50-100)2;
    UDebrisItemComponent* I_LargeRootsCarversSingle--b15K(0-50)_5K(50-100)_1K(50-100)1;
    UDebrisItemComponent* I_LargeRootsCarversGround--b15K(0-50)_5K(50-100)_1K(50-100)1;
    UDebrisItemComponent* I__OrcheyShyEverywhere;
    UDebrisItemComponent* I__SprayFlower;
    UDebrisItemComponent* I__Nenup;
    UDebrisItemComponent* I__OrcheyShy;
    UDebrisItemComponent* I_MagicCrystal_Companions;
    UDebrisItemComponent* I_ThinHangingRootsCarvers--b15K(0-50)_5K(50-100)_1K(50-100)1;
    UDebrisDataComponent* D_Small_Variant_ Wall Leafs;
    UDebrisItemComponent* I_Gurken;
    UDebrisItemComponent* I__Flower_BigEgg;
    UDebrisItemComponent* I__Flower_HollowBall;
    UDebrisItemComponent* I_Flower_Cluster;
    USceneComponent* DEBRIS_SEPERATION;
    UDebrisDataComponent* D_Rubble1--1K(71-100);
    UDebrisItemComponent* I_LargeRootsCarvers--b15K(0-50)_5K(50-100)_1K(50-100);
    UDebrisDataComponent* D_SmallFlowers;
    UDebrisDataComponent* D_Big Wall Leafs;
    UDebrisDataComponent* D_Grass_LargerFerns_LagerSpots;
    UDebrisItemComponent* I_DustClouds;
    UDebrisItemComponent* I_AzureRockFormations--15K(0-50)_5K(0-30)1;
    UDebrisItemComponent* I_Random_InsectSwarms-15K(30-60);
    UDebrisItemComponent* I_SwarmerTunnels--b15K(0-30)_r2K(0-25);
    UDebrisDataComponent* D_Grass_Ferns_LagerSpots;
    USceneComponent* Items;
    UDebrisDataComponent* D_Grass_TinyCover_LagerSpots;
    UDebrisDataComponent* D_Vines--2K(0-50)_b5C(0-30)1;
    UDebrisDataComponent* D_Grass_TinyCover_Roof;
    UDebrisDataComponent* D_GrassRoof--15C(0-50)_b5C(0-25);
    UDebrisDataComponent* D_StickPod_Teal;
    UDebrisDataComponent* D_Grass_TinyCover--1K(0-70);
    UDebrisDataComponent* D_OrganicRubble_Pink;
    UDebrisDataComponent* D_GrassBlue_LongCeiling;
    UDebrisDataComponent* D_GrassGlow_PurpleClusters;
    UDebrisDataComponent* D_HolePlant_Blue;
    UDebrisDataComponent* D_BlobSphere_Red;
    UDebrisItemComponent* I_AzureArches--15K(0-50)_5K(0-30);
    USceneComponent* Carvers;
    UDebrisDataComponent* D_Anemone01;
    UDebrisDataComponent* C_Rocks01;
    UDebrisDataComponent* D_Rubble;
    USceneComponent* Debris;
    USceneComponent* Root;
}

#endif
