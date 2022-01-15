#ifndef UE4SS_SDK_HUD_BoscoAbillityIcon_HPP
#define UE4SS_SDK_HUD_BoscoAbillityIcon_HPP

class UHUD_BoscoAbillityIcon_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Ping;
    UImage* Border;
    UProgressBar* FlareProduction;
    UInventoryComponent* Inventory;
    int32 Index;
    float LastProgress;
    UBoscoAbillityComponent* Abillity;
    FLinearColor FilledColor;
    FLinearColor UnFilledColor;
    float PreviewProgress;

    void SetProgress(float Percent, bool DisableAnim, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
    void Init(int32 Index, UBoscoAbillityComponent* Abillity);
    void PreConstruct(bool IsDesignTime);
    void On Flare Production Finished();
    void OnChargeUsed(int32 aCurrentCharges);
    void ExecuteUbergraph_HUD_BoscoAbillityIcon(int32 EntryPoint, float Temp_float_Variable, int32 K2Node_CustomEvent_Index, UBoscoAbillityComponent* K2Node_CustomEvent_Abillity, AbillityChargeUsedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_aCurrentCharges, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable, FLinearColor K2Node_MakeStruct_LinearColor, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue);
}

#endif
