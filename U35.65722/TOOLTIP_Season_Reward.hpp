#ifndef UE4SS_SDK_TOOLTIP_Season_Reward_HPP
#define UE4SS_SDK_TOOLTIP_Season_Reward_HPP

class UTOOLTIP_Season_Reward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UNamedSlot* BelowTooltipSlot;
    class UNamedSlot* BottomSlot;
    class UHorizontalBox* HorizontalBox_Cost;
    class UImage* Image_213;
    class UImage* Image_Background;
    class UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    class UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    class UOverlay* Overlay_Skin;
    class UTextBlock* Text_Cost;
    class UTextBlock* Text_Count;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Title;
    class UReward* Reward;

    void SetInfo(FText InTitle, FText InCategory, class UPlayerCharacterID* InCharacterID, const bool inShowIcon, FText CallFunc_TextToUpper_ReturnValue);
    void SetData(class UMaterialInstanceDynamic* DynMat, class UReward* Reward, bool ShowCost, int32 Cost);
    void SetCount(int32 count);
    void SetDataFromReward(class UReward* Reward, bool ShowCost, int32 Cost);
    void setup(bool ShowCost, int32 Cost);
    void ExecuteUbergraph_TOOLTIP_Season_Reward(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_GetRewardText_Title, FText CallFunc_GetRewardText_Category, FText CallFunc_GetRewardText_Description, bool CallFunc_GetRewardText_HasOptionalCharacterID, class UPlayerCharacterID* CallFunc_GetRewardText_CharacterID, class UReward* K2Node_CustomEvent_Reward, bool K2Node_CustomEvent_ShowCost_1, int32 K2Node_CustomEvent_Cost_1, int32 K2Node_CustomEvent_Count, FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_CustomEvent_ShowCost, int32 K2Node_CustomEvent_Cost, FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UMaterialInstanceDynamic* K2Node_CustomEvent_DynMat, class UReward* K2Node_CustomEvent_Reward_1, bool K2Node_CustomEvent_ShowCost_2, int32 K2Node_CustomEvent_Cost_2);
};

#endif
