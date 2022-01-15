#ifndef UE4SS_SDK_ITM_CommunityGoalReward_HPP
#define UE4SS_SDK_ITM_CommunityGoalReward_HPP

class UITM_CommunityGoalReward_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UOverlay* BronzeImage;
    UUI_ImageTinted_C* Frame;
    UHorizontalBox* FreeBeerBox;
    UOverlay* GoldImage;
    UImage* Icon;
    UOverlay* IconBox;
    UHorizontalBox* NoReward;
    UTextBlock* NoRewardTextBlock;
    UImage* OuterImageB;
    UImage* OuterImageG;
    UImage* OuterImageS;
    UHorizontalBox* RewardAchieved;
    UVerticalBox* RewardMainBox;
    UWidgetSwitcher* RewardSwitcher;
    UOverlay* SilverImage;
    UTextBlock* TextBlock_2;
    UTextBlock* TierTextBlock;
    UTextBlock* TitleTextBlock;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    UUI_ImageTinted_C* UI_ImageTinted;
    UUI_ImageTinted_C* UI_ImageTinted_C_2;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    UCommunityGoalFaction* Faction;
    FText ResultText;
    FText BronzeText;
    FText SilverText;
    FText GoldText;
    FVector2D TierIconSize;
    UCommunityGoal* CurrentGoal;
    FText ResultTextN;
    FSlateBrush FrameBrush;

    int32 TotalTiers(int32 CallFunc_Array_Length_ReturnValue);
    void SetGoalResultTier(int32 Tier, UCommunityGoal* Goal, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_TotalTiers_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Divide_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, FText CallFunc_Format_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_TotalTiers_ReturnValue_1, UOverlay* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_1, FText K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, UOverlay* K2Node_Select_Default_2);
    void BuildResources(int32 Tier, UHorizontalBox* TempHBox, TMap<UResourceData*, int32> ResourceMap, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_CommunityRewardResource_C* CallFunc_Create_ReturnValue, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UResourceData* CallFunc_Array_Get_Item, UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TMap<UResourceData*, int32> CallFunc_GetResourcesReward_ReturnValue);
    void SetGoalResult(float Score, int32 Members, UCommunityGoal* Goal, int32 Tier, int32 CallFunc_RewardTier_ReturnValue);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(UCommunityGoalFaction* Faction, ESlateVisibility Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CommunityGoalReward(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
