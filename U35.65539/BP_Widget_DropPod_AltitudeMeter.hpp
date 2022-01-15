#ifndef UE4SS_SDK_BP_Widget_DropPod_AltitudeMeter_HPP
#define UE4SS_SDK_BP_Widget_DropPod_AltitudeMeter_HPP

class ABP_Widget_DropPod_AltitudeMeter_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget1;
    USceneComponent* DefaultSceneRoot;
    UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float NewDepth;
    float currentDepth;

    void TriggerCountdown();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, float K2Node_Event_DeltaSeconds, UWidget_DropPod_AltitudeMeter_C* K2Node_DynamicCast_AsWidget_Drop_Pod_Altitude_Meter, bool K2Node_DynamicCast_bSuccess, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UWidget_DropPod_AltitudeMeter_C* K2Node_DynamicCast_AsWidget_Drop_Pod_Altitude_Meter_1, bool K2Node_DynamicCast_bSuccess_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue);
}

#endif
