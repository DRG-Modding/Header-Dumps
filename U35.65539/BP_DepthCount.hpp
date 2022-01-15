#ifndef UE4SS_SDK_BP_DepthCount_HPP
#define UE4SS_SDK_BP_DepthCount_HPP

class ABP_DepthCount_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget Pinger;
    UWidgetComponent* DepthWidget;
    USceneComponent* DefaultSceneRoot;
    UBP_DepthCountWidget_C* Widget;
    float Duration;
    float Start;
    float End;
    float NewDepth;
    float currentDepth;

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DepthCount(int32 EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UBP_DepthCountWidget_C* K2Node_DynamicCast_AsBP_Depth_Count_Widget, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1);
}

#endif
