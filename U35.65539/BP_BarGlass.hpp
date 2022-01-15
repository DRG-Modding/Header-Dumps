#ifndef UE4SS_SDK_BP_BarGlass_HPP
#define UE4SS_SDK_BP_BarGlass_HPP

class ABP_BarGlass_C : ADrinkableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UInstantUsable* InstantUsable;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    FVector StartLocation;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnRep_DrinkableData();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BarGlass(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText CallFunc_TextToUpper_ReturnValue);
}

#endif
