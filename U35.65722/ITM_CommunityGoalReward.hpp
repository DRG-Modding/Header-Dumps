#ifndef UE4SS_SDK_ITM_CommunityGoalReward_HPP
#define UE4SS_SDK_ITM_CommunityGoalReward_HPP

class UITM_CommunityGoalReward_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UOverlay* BronzeImage;
    class UUI_ImageTinted_C* Frame;
    class UHorizontalBox* FreeBeerBox;
    class UOverlay* GoldImage;
    class UImage* Icon;
    class UOverlay* IconBox;
    class UHorizontalBox* NoReward;
    class UTextBlock* NoRewardTextBlock;
    class UImage* OuterImageB;
    class UImage* OuterImageG;
    class UImage* OuterImageS;
    class UHorizontalBox* RewardAchieved;
    class UVerticalBox* RewardMainBox;
    class UWidgetSwitcher* RewardSwitcher;
    class UOverlay* SilverImage;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TierTextBlock;
    class UTextBlock* TitleTextBlock;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_C_2;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    class UCommunityGoalFaction* Faction;
    FText ResultText;
    FText BronzeText;
    FText SilverText;
    FText GoldText;
    FVector2D TierIconSize;
    class UCommunityGoal* CurrentGoal;
    FText ResultTextN;
    FSlateBrush FrameBrush;

    int32 TotalTiers(int32 CallFunc_Array_Length_ReturnValue);
    void SetGoalResultTier(int32 Tier, class UCommunityGoal* Goal, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_TotalTiers_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Divide_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, FText CallFunc_Format_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_TotalTiers_ReturnValue_1, class UOverlay* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_1, FText K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, class UOverlay* K2Node_Select_Default_2);
    void BuildResources(int32 Tier, class UHorizontalBox* TempHBox, TMap<UResourceData*, int32> ResourceMap, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_CommunityRewardResource_C* CallFunc_Create_ReturnValue, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys, class UResourceData* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TMap<UResourceData*, int32> CallFunc_GetResourcesReward_ReturnValue);
    void SetGoalResult(float Score, int32 Members, class UCommunityGoal* Goal, int32 Tier, int32 CallFunc_RewardTier_ReturnValue);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, ESlateVisibility Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CommunityGoalReward(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
