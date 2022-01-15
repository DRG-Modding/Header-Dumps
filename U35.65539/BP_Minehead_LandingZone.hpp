#ifndef UE4SS_SDK_BP_Minehead_LandingZone_HPP
#define UE4SS_SDK_BP_Minehead_LandingZone_HPP

class ABP_Minehead_LandingZone_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Opacity_814ACDB147BE4FC050CAA2ADBE2674C9;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_814ACDB147BE4FC050CAA2ADBE2674C9;
    UTimelineComponent* Timeline_0;
    float Timeline_1_Opacity_9715CE204D350BB8464289A30A16CA29;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_9715CE204D350BB8464289A30A16CA29;
    UTimelineComponent* Timeline_1;
    bool FadingOut;
    TArray<UMaterialInstanceDynamic*> Materials;

    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Minehead_LandingZone(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TArray<UMaterialInstanceDynamic*>& CallFunc_CreateDynamicMaterialInstances_ReturnValue);
}

#endif
