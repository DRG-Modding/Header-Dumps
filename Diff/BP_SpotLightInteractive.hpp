#ifndef UE4SS_SDK_BP_SpotLightInteractive_HPP
#define UE4SS_SDK_BP_SpotLightInteractive_HPP

class ABP_SpotLightInteractive_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* SM_Minehead_Floodlight;
    class UStaticMeshComponent* StaticMesh2;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* StaticMesh4;
    class USpotLightComponent* SpotLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* SpotLightsBase;
    class UAudioComponent* audio;
    class UOutlineComponent* outline;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_1_0_1_Anim_A1CDCF1443534FDED095F0B3C5DBCF10;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A1CDCF1443534FDED095F0B3C5DBCF10;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_5573B4554C24184CF01708BDE578A95F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5573B4554C24184CF01708BDE578A95F;
    class UTimelineComponent* Timeline_0;
    float LightIntensity;

    void ConditionallyEnableShadows();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Activate();
    void ReceiveBeginPlay();
    void UpdateShadows();
    void ExecuteUbergraph_BP_SpotLightInteractive(int32 EntryPoint);
};

#endif
