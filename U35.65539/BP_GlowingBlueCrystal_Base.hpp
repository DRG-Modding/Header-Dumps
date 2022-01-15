#ifndef UE4SS_SDK_BP_GlowingBlueCrystal_Base_HPP
#define UE4SS_SDK_BP_GlowingBlueCrystal_Base_HPP

class ABP_GlowingBlueCrystal_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    UPointLightComponent* PointLight;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_LightIntensity_5C2F14DB41CC7BBBF75EB3A983726871;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5C2F14DB41CC7BBBF75EB3A983726871;
    UTimelineComponent* Timeline_0;
    float IntialIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void HeartDestroyed();
    void ExecuteUbergraph_BP_GlowingBlueCrystal_Base(int32 EntryPoint, PointRemovedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue);
}

#endif
