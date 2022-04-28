#ifndef UE4SS_SDK_BP_HackingPodDrillDebris_HPP
#define UE4SS_SDK_BP_HackingPodDrillDebris_HPP

class ABP_HackingPodDrillDebris_C : public ABP_DropToTerrainDebris_Base_C
{
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class USkeletalMeshComponent* SK_DropPod_Drill;

};

#endif
