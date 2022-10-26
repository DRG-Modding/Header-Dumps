#ifndef UE4SS_SDK_BP_InflatablePretzel_HPP
#define UE4SS_SDK_BP_InflatablePretzel_HPP

class ABP_InflatablePretzel_C : public ABP_Kickable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* UsableCollision;
    FVector Timeline_0_Scale_8D1DAE2E44C68148BBBEA09A6109BAED;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8D1DAE2E44C68148BBBEA09A6109BAED;
    class UTimelineComponent* Timeline_0;
    FVector OriginalScale;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BP_InflatablePretzel_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_InflatablePretzel(int32 EntryPoint);
};

#endif
