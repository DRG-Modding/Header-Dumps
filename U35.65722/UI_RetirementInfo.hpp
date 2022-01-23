#ifndef UE4SS_SDK_UI_RetirementInfo_HPP
#define UE4SS_SDK_UI_RetirementInfo_HPP

class UUI_RetirementInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AdditionalBenefitsBox;
    class UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader;
    class UVerticalBox* BenefitsBox;
    class UVerticalBox* Character1stBox;
    class UFSDLabelWidget* FSDLabelWidget_0;
    class UFSDLabelWidget* FSDLabelWidget_9;
    class UFSDLabelWidget* FSDLabelWidget_10;
    class UHorizontalBox* HorizontalBox_Cost;
    class UImage* Image_0;
    class UImage* Image_1;
    class UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig;
    class UVerticalBox* NoPromotionsBox;
    bool NoCharactersPromoted;
    int32 CharacterRetirementCount;
    bool Enable Preview;

    void UpdateBenefits(bool InNoCharactersPromoted, int32 InCharacterRetirementCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
    void SetData(TSubclassOf<class APlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RetirementInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_character, FLinearColor CallFunc_MenuColors_OutputColor, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, const FRetirementCostItem CallFunc_GetCharacterRetirementCost_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys, class UResourceData* CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UITM_Craft_ResourceSmall_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_HasAnyCharacterRetired_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCharacterRetirementCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

#endif
