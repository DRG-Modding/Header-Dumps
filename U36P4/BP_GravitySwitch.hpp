#ifndef UE4SS_SDK_BP_GravitySwitch_HPP
#define UE4SS_SDK_BP_GravitySwitch_HPP

class ABP_GravitySwitch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UAudioComponent* Alarm;
    class UStaticMeshComponent* ButtonSphere;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_LightIntensity_2CB0110A43F837100C1A68A2642737BF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2CB0110A43F837100C1A68A2642737BF;
    class UTimelineComponent* Timeline_0;
    int32 Normal Gravity;
    bool Can Use;
    class ASkyLight* SkyLight;
    FLinearColor OriginalSkylightClour;
    float OriginalSkyLightIntensity;
    class APlayerCharacter* User;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ChangeSkyLight();
    void ResetSkyLight();
    void ExecuteUbergraph_BP_GravitySwitch(int32 EntryPoint);
};

#endif
