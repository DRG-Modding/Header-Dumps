#ifndef UE4SS_SDK_HUD_BoscoAbillityIcon_HPP
#define UE4SS_SDK_HUD_BoscoAbillityIcon_HPP

class UHUD_BoscoAbillityIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UImage* Border;
    class UProgressBar* FlareProduction;
    class UInventoryComponent* Inventory;
    int32 Index;
    float LastProgress;
    class UBoscoAbillityComponent* Abillity;
    FLinearColor FilledColor;
    FLinearColor UnFilledColor;
    float PreviewProgress;

    void SetProgress(float Percent, bool DisableAnim, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
    void Init(int32 Index, class UBoscoAbillityComponent* Abillity);
    void PreConstruct(bool IsDesignTime);
    void On Flare Production Finished();
    void OnChargeUsed(int32 aCurrentCharges);
    void ExecuteUbergraph_HUD_BoscoAbillityIcon(int32 EntryPoint, float Temp_float_Variable, int32 K2Node_CustomEvent_Index, class UBoscoAbillityComponent* K2Node_CustomEvent_Abillity, FExecuteUbergraph_HUD_BoscoAbillityIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_aCurrentCharges, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable, FLinearColor K2Node_MakeStruct_LinearColor, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

#endif
