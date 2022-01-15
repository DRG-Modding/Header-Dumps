#ifndef UE4SS_SDK_BP_Refinery_LandingZone_HPP
#define UE4SS_SDK_BP_Refinery_LandingZone_HPP

class ABP_Refinery_LandingZone_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    float Timeline_1_Opacity_8C6DF8B84585B4B9E8DB819DF676DC1F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8C6DF8B84585B4B9E8DB819DF676DC1F;
    UTimelineComponent* Timeline_1;
    float Timeline_0_Opacity_C78A9FAB4BAA9C550373C2B47F9E0A4F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C78A9FAB4BAA9C550373C2B47F9E0A4F;
    UTimelineComponent* Timeline_0;
    TArray<UMaterialInstanceDynamic*> Materials;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Refinery_LandingZone(int32 EntryPoint, TArray<UMaterialInstanceDynamic*>& CallFunc_CreateDynamicMaterialInstances_ReturnValue);
}

#endif
