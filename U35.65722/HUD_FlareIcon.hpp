#ifndef UE4SS_SDK_HUD_FlareIcon_HPP
#define UE4SS_SDK_HUD_FlareIcon_HPP

class UHUD_FlareIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UProgressBar* FlareProduction;
    class UInventoryComponent* Inventory;
    int32 Index;
    float LastProgress;

    void SetProgress(float Percent, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, float CallFunc_Ease_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
    void Init(int32 Index, class UInventoryComponent* Inventory);
    void OnFlareCountChanged(int32 CurrentCount, class UInventoryComponent* Inventory);
    void PreConstruct(bool IsDesignTime);
    void On Flare Production Finished();
    void ExecuteUbergraph_HUD_FlareIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FExecuteUbergraph_HUD_FlareIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 K2Node_CustomEvent_Index, class UInventoryComponent* K2Node_CustomEvent_inventory_1, int32 K2Node_CustomEvent_CurrentCount, class UInventoryComponent* K2Node_CustomEvent_inventory, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default);
};

#endif
