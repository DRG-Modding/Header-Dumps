#ifndef UE4SS_SDK_BP_Refinery_LandingZone_HPP
#define UE4SS_SDK_BP_Refinery_LandingZone_HPP

class ABP_Refinery_LandingZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_1_Opacity_8C6DF8B84585B4B9E8DB819DF676DC1F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8C6DF8B84585B4B9E8DB819DF676DC1F;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Opacity_C78A9FAB4BAA9C550373C2B47F9E0A4F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C78A9FAB4BAA9C550373C2B47F9E0A4F;
    class UTimelineComponent* Timeline_0;
    TArray<class UMaterialInstanceDynamic*> Materials;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Refinery_LandingZone(int32 EntryPoint);
};

#endif
