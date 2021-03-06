#ifndef UE4SS_SDK_BP_Heartstone_Claw_HPP
#define UE4SS_SDK_BP_Heartstone_Claw_HPP

class ABP_Heartstone_Claw_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class UTerrainDetectComponent* TerrainDetect1;
    class UStaticMeshComponent* Spike_Carver;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* DefaultSceneRoot;
    bool NoGround;
    float RelativeScaleMin;
    float RelativeScaleMax;

    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void CheckForGroundAndCarve();
    void ExecuteUbergraph_BP_Heartstone_Claw(int32 EntryPoint, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
};

#endif
