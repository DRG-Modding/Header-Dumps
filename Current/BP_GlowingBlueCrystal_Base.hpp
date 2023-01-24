#ifndef UE4SS_SDK_BP_GlowingBlueCrystal_Base_HPP
#define UE4SS_SDK_BP_GlowingBlueCrystal_Base_HPP

class ABP_GlowingBlueCrystal_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class UPointLightComponent* PointLight;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_LightIntensity_5C2F14DB41CC7BBBF75EB3A983726871;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5C2F14DB41CC7BBBF75EB3A983726871;
    class UTimelineComponent* Timeline_0;
    float IntialIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void HeartDestroyed(class USceneComponent* Point);
    void ExecuteUbergraph_BP_GlowingBlueCrystal_Base(int32 EntryPoint);
};

#endif
