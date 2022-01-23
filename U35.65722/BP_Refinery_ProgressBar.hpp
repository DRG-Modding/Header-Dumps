#ifndef UE4SS_SDK_BP_Refinery_ProgressBar_HPP
#define UE4SS_SDK_BP_Refinery_ProgressBar_HPP

class ABP_Refinery_ProgressBar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* ProgressMaterial;
    float Progress;
    class AFSDRefinery* Refinery;
    ERefineryState State;

    void SetColors(FLinearColor InStartColor, FLinearColor InEndColor, FLinearColor InBackgroundColor, bool CallFunc_IsValid_ReturnValue);
    void SetProgress(float InProgress01, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void OnTick_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
    void Completed_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_ProgressBar(int32 EntryPoint, FExecuteUbergraph_BP_Refinery_ProgressBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_Refinery_ProgressBarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_DeltaTime_1, float K2Node_CustomEvent_NormalizedTime_1, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_NormalizedTime, FExecuteUbergraph_BP_Refinery_ProgressBarK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMiniTimerAction* CallFunc_MiniTimer_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetParentActor_ReturnValue, FExecuteUbergraph_BP_Refinery_ProgressBarK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class AFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetRefiningProgress_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

#endif
