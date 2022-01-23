#ifndef UE4SS_SDK_Tutorial_Hint_LaserPointer_HPP
#define UE4SS_SDK_Tutorial_Hint_LaserPointer_HPP

class UTutorial_Hint_LaserPointer_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;
    FTutorialHint ReminderHint;

    void ReceiveOnInitialized();
    void OnMarkerPlaced_Event(FVector Location, const FText& Name, FLinearColor Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget);
    void ExecuteUbergraph_Tutorial_Hint_LaserPointer(int32 EntryPoint, FVector K2Node_CustomEvent_Location, const FText K2Node_CustomEvent_Name, FLinearColor K2Node_CustomEvent_Color, class AActor* K2Node_CustomEvent_Target, ELaserPointerTargetType K2Node_CustomEvent_TypeOfTarget, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_Tutorial_Hint_LaserPointerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasTutorialBeenShown_ReturnValue, float K2Node_Select_Default, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

#endif
