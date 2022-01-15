#ifndef UE4SS_SDK_UI_Perk_ToolTip_HPP
#define UE4SS_SDK_UI_Perk_ToolTip_HPP

class UUI_Perk_ToolTip_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIntro;
    UWidgetAnimation* FancyIntro;
    UImage* BackgroundShadow;
    UBorder* Border_151;
    UBorder* Border_153;
    UBorder* Border_155;
    UHorizontalBox* CostBox;
    UTextBlock* CostText;
    UOverlay* Holder_CostBox;
    URichTextSizable* PerkDescriptionRich;
    UTextBlock* Perktitle;
    UUI_PerkIcon_C* UI_PerkIcon;
    UUI_Perks_Item_C* PerkWidget;
    UPerkAsset* PerkAsset;
    int32 Rank;
    int32 Tier;

    void PreConstruct(bool IsDesignTime);
    void OnPerkClaimed_Event(UPerkAsset* Perk, int32 ClaimedTier);
    void SetPerkAsset(UPerkAsset* PerkAsset, int32 Rank, bool ShowRank);
    void FancyDelayedIntro();
    void FadeInIntro();
    void Show Rank(bool InShowRank);
    void StopAnimations();
    void ExecuteUbergraph_UI_Perk_ToolTip(int32 EntryPoint, UPerkDelegateItem* CallFunc_GetDelegates_ReturnValue, FText CallFunc_GetRankDescription_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_GetRankCost_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, UPerkAsset* K2Node_CustomEvent_Perk, int32 K2Node_CustomEvent_ClaimedTier, bool K2Node_Event_IsDesignTime, UPerkAsset* K2Node_CustomEvent_PerkAsset, int32 K2Node_CustomEvent_Rank, bool K2Node_CustomEvent_ShowRank, PerkClaimedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EPerkTierState CallFunc_GetStateAtTier_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetRankTier_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, EPerkUsageType CallFunc_GetUsageType_ReturnValue, bool K2Node_CustomEvent_InShowRank, FLinearColor CallFunc_PerkColorFromType_OutColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
