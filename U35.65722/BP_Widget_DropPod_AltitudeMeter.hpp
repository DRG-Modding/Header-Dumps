#ifndef UE4SS_SDK_BP_Widget_DropPod_AltitudeMeter_HPP
#define UE4SS_SDK_BP_Widget_DropPod_AltitudeMeter_HPP

class ABP_Widget_DropPod_AltitudeMeter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget1;
    class USceneComponent* DefaultSceneRoot;
    class UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float NewDepth;
    float currentDepth;

    void TriggerCountdown();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, FExecuteUbergraph_BP_Widget_DropPod_AltitudeMeterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, float K2Node_Event_DeltaSeconds, class UWidget_DropPod_AltitudeMeter_C* K2Node_DynamicCast_AsWidget_Drop_Pod_Altitude_Meter, bool K2Node_DynamicCast_bSuccess, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWidget_DropPod_AltitudeMeter_C* K2Node_DynamicCast_AsWidget_Drop_Pod_Altitude_Meter_1, bool K2Node_DynamicCast_bSuccess_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue);
};

#endif
