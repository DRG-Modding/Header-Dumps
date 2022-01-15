#ifndef UE4SS_SDK_BP_HeightenedSenses_HPP
#define UE4SS_SDK_BP_HeightenedSenses_HPP

class UBP_HeightenedSenses_C : UHeightenedSenseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_OnInitialized();
    void OnKilledGrabber_Event(AActor* Grabber);
    void ExecuteUbergraph_BP_HeightenedSenses(int32 EntryPoint, KilledGrabber__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* K2Node_CustomEvent_Grabber, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_Conv_VectorToTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_HeightenedSense_Discharge_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
