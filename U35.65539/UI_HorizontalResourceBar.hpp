#ifndef UE4SS_SDK_UI_HorizontalResourceBar_HPP
#define UE4SS_SDK_UI_HorizontalResourceBar_HPP

class UUI_HorizontalResourceBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* NoResourcesLabel;
    UHorizontalBox* ResourcesBox;
    bool IconsOnRight;
    int32 IconSize;
    bool ShowRequiredAmount;
    FText No Resources Text;
    FSlateFontInfo NoResourcesFont;
    TEnumAsByte<ENUM_MenuColors::Type> NoResourcesColor;
    TMap<UResourceData*, UITM_UpgGear_ResourceCounter_C*> ResourceWidgets;
    TMap<UResourceData*, int32> PreviewDict;

    void SetFromDict(TMap<UResourceData*, int32> InResources, float DictAmount, UResourceData* Resource, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UResourceData* CallFunc_Array_Get_Item, float CallFunc_GetResourceAmount_ReturnValue, float K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void SetCraftingCost(TArray<FCraftingCost>& Cost, bool& OutCanAfford, bool Affordable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FCraftingCost CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void AddResource(UResourceData* InResource, float InAmount, float InRequiredAmount);
    void Clear(int32 Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void AddResourceCustom(UResourceData* InResource, float InAmount, float InRequiredAmount, bool IconOnRight, bool ShowRequiredAmount, UITM_UpgGear_ResourceCounter_C* Widget, bool CallFunc_IsValid_ReturnValue, UITM_UpgGear_ResourceCounter_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UITM_UpgGear_ResourceCounter_C* CallFunc_Create_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HorizontalResourceBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
