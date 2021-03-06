#ifndef UE4SS_SDK_ITM_CommunityGoalResult_ConsoleScreenV1_HPP
#define UE4SS_SDK_ITM_CommunityGoalResult_ConsoleScreenV1_HPP

class UITM_CommunityGoalResult_ConsoleScreenV1_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* BronzeImage;
    class UOverlay* GoldImage;
    class UImage* Icon;
    class UImage* ImageB;
    class UImage* ImageG;
    class UImage* ImageNT;
    class UImage* Images;
    class UOverlay* NoTierImage;
    class UOverlay* SilverImage;
    class UTextBlock* TierTextBlock;
    class UTextBlock* TitleTextBlock;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    class UCommunityGoalFaction* Faction;
    FVector2D TierIconSize;

    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void SetResult(int32 Score, int32 Tier);
    void ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int32 EntryPoint, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, bool K2Node_Event_IsDesignTime, int32 CallFunc_Subtract_IntInt_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, int32 K2Node_CustomEvent_Score, int32 K2Node_CustomEvent_Tier, bool CallFunc_Less_IntInt_ReturnValue, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, int32 Temp_int_Variable_1, class UOverlay* K2Node_Select_Default_1);
};

#endif
