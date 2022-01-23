#ifndef UE4SS_SDK_BP_IntoxicationComponent_HPP
#define UE4SS_SDK_BP_IntoxicationComponent_HPP

class UBP_IntoxicationComponent_C : public UCharacterIntoxicationComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Seed;
    float DrunkEffectCoolDown;
    float DrunkenMovementNoiseStrength;
    float DrunkenYawNoiseStrength;
    float DrunkenPitchNoiseStrength;
    bool IgnoreMovement;
    bool IgnoreYaw;
    bool IgnorePitch;
    class UMaterialInstanceDynamic* DrunkenEffect;
    FName EffectID;
    float IntoxicationVisualStrength;
    float IntoxicationMovementStrength;
    float DrunkenShoutCoolDown;
    float ShoutCooldownMax;
    float ShoutCooldownMin;
    float BeginShoutIntoxicationLimit;

    void ToPercentStr(float Progress, FString& PercentString, float CallFunc_Multiply_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void MyLerp(float Current Value, float Target Value, float Delta Time, float& Result, float CallFunc_FInterpEaseInOut_ReturnValue);
    void SetPostProcessStrength(float NewStrength, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
    int32 GetAlcoholPct(EDrinkableAlcoholStrength Strengthint32 CallFunc_GetAlcoholStrengthPct_Percent);
    void Lerp Movement Stength(float DeltaTime);
    void Push Effects();
    void Pop Effects(FString DebugReason);
    void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
    void ReceivePassOutDrunk();
    void Lerp Post Process Strength(float DeltaTime);
    void ReceiveDrunkEnd();
    void ReceiveDrunkBegin();
    void ExecuteUbergraph_BP_IntoxicationComponent(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetIntoxicationProgressMapped_ReturnValue, float K2Node_CustomEvent_DeltaTime_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MyLerp_Result, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, FString K2Node_CustomEvent_DebugReason, class UMaterialInstanceDynamic* CallFunc_ApplyPostProcessingMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_ApplyPostProcessingMaterial_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Noise2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_GetActorRightVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Noise2D_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Noise2D_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_GetIntoxicationProgressMapped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_12, float CallFunc_Noise2D_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_Event_DrunkTime, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsPassOutDrunk_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float K2Node_CustomEvent_DeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue_15, float CallFunc_MyLerp_Result_1);
};

#endif
