#ifndef UE4SS_SDK_BP_BarGlass_HPP
#define UE4SS_SDK_BP_BarGlass_HPP

class ABP_BarGlass_C : public ADrinkableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstantUsable* InstantUsable;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    FVector StartLocation;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnRep_DrinkableData();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BarGlass(int32 EntryPoint);
};

#endif
