#ifndef UE4SS_SDK_ITM_Craft_Resource_HPP
#define UE4SS_SDK_ITM_Craft_Resource_HPP

class UITM_Craft_Resource_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UBorder* Border_3;
    UTextBlock* DATA_ResourceAmount;
    UTextBlock* DATA_ResourceName;
    UResourceData* ResourceData;
    bool AmountOverriden;

    void OnResourceAmountChanged(UResourceData* Resource, float currentAmount);
    void SetAmount(float Amount);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Craft_Resource(int32 EntryPoint, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool Temp_bool_Variable, UResourceData* K2Node_DynamicCast_AsResource_Data, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetOwnedAmount_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UResourceData* K2Node_CustomEvent_Resource, float K2Node_CustomEvent_currentAmount, FText CallFunc_Conv_FloatToText_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, float K2Node_CustomEvent_Amount, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility K2Node_Select_Default_1, FText CallFunc_Conv_FloatToText_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, float CallFunc_GetOwnedAmount_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_2, ResourceAmountChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FLinearColor K2Node_Select_Default_2, FSlateColor K2Node_MakeStruct_SlateColor_2, bool K2Node_Event_IsDesignTime, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue);
}

#endif
