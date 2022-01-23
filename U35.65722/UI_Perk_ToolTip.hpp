#ifndef UE4SS_SDK_UI_Perk_ToolTip_HPP
#define UE4SS_SDK_UI_Perk_ToolTip_HPP

class UUI_Perk_ToolTip_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIntro;
    class UWidgetAnimation* FancyIntro;
    class UImage* BackgroundShadow;
    class UBorder* Border_151;
    class UBorder* Border_153;
    class UBorder* Border_155;
    class UHorizontalBox* CostBox;
    class UTextBlock* CostText;
    class UOverlay* Holder_CostBox;
    class URichTextSizable* PerkDescriptionRich;
    class UTextBlock* Perktitle;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UUI_Perks_Item_C* PerkWidget;
    class UPerkAsset* PerkAsset;
    int32 Rank;
    int32 Tier;

    void PreConstruct(bool IsDesignTime);
    void OnPerkClaimed_Event(class UPerkAsset* Perk, int32 ClaimedTier);
    void SetPerkAsset(class UPerkAsset* PerkAsset, int32 Rank, bool ShowRank);
    void FancyDelayedIntro();
    void FadeInIntro();
    void Show Rank(bool InShowRank);
    void StopAnimations();
    void ExecuteUbergraph_UI_Perk_ToolTip(int32 EntryPoint, class UPerkDelegateItem* CallFunc_GetDelegates_ReturnValue, FText CallFunc_GetRankDescription_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_GetRankCost_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class UPerkAsset* K2Node_CustomEvent_Perk, int32 K2Node_CustomEvent_ClaimedTier, bool K2Node_Event_IsDesignTime, class UPerkAsset* K2Node_CustomEvent_PerkAsset, int32 K2Node_CustomEvent_Rank, bool K2Node_CustomEvent_ShowRank, FExecuteUbergraph_UI_Perk_ToolTipK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, EPerkTierState CallFunc_GetStateAtTier_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetRankTier_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, EPerkUsageType CallFunc_GetUsageType_ReturnValue, bool K2Node_CustomEvent_InShowRank, FLinearColor CallFunc_PerkColorFromType_OutColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
