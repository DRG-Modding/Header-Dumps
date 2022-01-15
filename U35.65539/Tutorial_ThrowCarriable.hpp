#ifndef UE4SS_SDK_Tutorial_ThrowCarriable_HPP
#define UE4SS_SDK_Tutorial_ThrowCarriable_HPP

class UTutorial_ThrowCarriable_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 PickupCount;

    void ReceiveOnInitialized();
    void OnCarriableChangedEvent(AActor* carriedActor);
    void OnThrowCarriableProgress(float Progress, float timeToCancel, bool isDone);
    void ExecuteUbergraph_Tutorial_ThrowCarriable(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, CarriableChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ThrowCarriableDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, AActor* K2Node_CustomEvent_carriedActor, float K2Node_CustomEvent_progress, float K2Node_CustomEvent_timeToCancel, bool K2Node_CustomEvent_isDone, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
}

#endif
