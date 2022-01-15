#ifndef UE4SS_SDK_ITM_TopBar_ResourceCounter_HPP
#define UE4SS_SDK_ITM_TopBar_ResourceCounter_HPP

class UITM_TopBar_ResourceCounter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_AnimatedNumber_C* Number;
    UBasic_ResourceIcon_C* ResourceLeft;
    UBasic_ResourceIcon_C* ResourceRight;
    UResourceData* Resource;
    float Amount;
    float RequiredAmount;
    bool IconOnRight;
    bool HideWhenZero;
    UBasic_ToolTip_C* ToolTip;
    bool DoCountAnim;

    void SetResourceData(UResourceData* InResource, float InAmount, float InRequiredAmount, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, uint8 K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void UpdateAmount(float InAmount);
    void Construct();
    void OnResourceAmountChanged_Event(UResourceData* Resource, float currentAmount);
    void UpdateFromSave();
    void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
    void ExecuteUbergraph_ITM_TopBar_ResourceCounter(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, ResourceAmountChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default, float K2Node_CustomEvent_InAmount, ESlateVisibility Temp_byte_Variable_5, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UResourceData* K2Node_CustomEvent_resource, float K2Node_CustomEvent_currentAmount, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ESlateVisibility K2Node_Select_Default_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, float CallFunc_GetResourceAmount_ReturnValue, bool K2Node_CustomEvent_HideWhenZero, bool K2Node_CustomEvent_DoCountAnim, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_2);
}

#endif
