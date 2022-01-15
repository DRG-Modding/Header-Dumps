#ifndef UE4SS_SDK_UI_RetirementInfo_HPP
#define UE4SS_SDK_UI_RetirementInfo_HPP

class UUI_RetirementInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* AdditionalBenefitsBox;
    UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader;
    UVerticalBox* BenefitsBox;
    UVerticalBox* Character1stBox;
    UFSDLabelWidget* FSDLabelWidget_0;
    UFSDLabelWidget* FSDLabelWidget_9;
    UFSDLabelWidget* FSDLabelWidget_10;
    UHorizontalBox* HorizontalBox_Cost;
    UImage* Image_0;
    UImage* Image_1;
    UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig;
    UVerticalBox* NoPromotionsBox;
    bool NoCharactersPromoted;
    int32 CharacterRetirementCount;
    bool Enable Preview;

    void UpdateBenefits(bool InNoCharactersPromoted, int32 InCharacterRetirementCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
    void SetData(TSubclassOf<UPlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RetirementInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_character, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, const FRetirementCostItem CallFunc_GetCharacterRetirementCost_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UResourceData* CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UITM_Craft_ResourceSmall_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_HasAnyCharacterRetired_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCharacterRetirementCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
