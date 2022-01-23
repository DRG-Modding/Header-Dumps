#ifndef UE4SS_SDK_ITM_TopBar_ResourceCounter_HPP
#define UE4SS_SDK_ITM_TopBar_ResourceCounter_HPP

class UITM_TopBar_ResourceCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_AnimatedNumber_C* Number;
    class UBasic_ResourceIcon_C* ResourceLeft;
    class UBasic_ResourceIcon_C* ResourceRight;
    class UResourceData* Resource;
    float Amount;
    float RequiredAmount;
    bool IconOnRight;
    bool HideWhenZero;
    class UBasic_ToolTip_C* ToolTip;
    bool DoCountAnim;

    void SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void UpdateAmount(float InAmount);
    void Construct();
    void OnResourceAmountChanged_Event(class UResourceData* Resource, float currentAmount);
    void UpdateFromSave();
    void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
    void ExecuteUbergraph_ITM_TopBar_ResourceCounter(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, FExecuteUbergraph_ITM_TopBar_ResourceCounterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default, float K2Node_CustomEvent_InAmount, ESlateVisibility Temp_byte_Variable_5, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UResourceData* K2Node_CustomEvent_resource, float K2Node_CustomEvent_currentAmount, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ESlateVisibility K2Node_Select_Default_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, float CallFunc_GetResourceAmount_ReturnValue, bool K2Node_CustomEvent_HideWhenZero, bool K2Node_CustomEvent_DoCountAnim, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_2);
};

#endif
