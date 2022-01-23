#ifndef UE4SS_SDK_UI_PerkIcon_HPP
#define UE4SS_SDK_UI_PerkIcon_HPP

class UUI_PerkIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* IconSizeBox;
    class UImage* PerkIcon;
    class UTextBlock* PerkLevel;
    float ImageDimension;
    bool ShowPerkLevel;

    void SetPerkLevelVisibility(bool InVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void ShowPerkAs(class UPerkAsset* InPerk, FLinearColor InIconColor, int32 InRank, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void ShowPerkByRank(class UPerkAsset* InPerk, int32 InRank, int32 CallFunc_GetRankTier_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, EPerkTierState CallFunc_GetStateAtTier_ReturnValue, FLinearColor CallFunc_PerkColorByState_OutBackground, FLinearColor CallFunc_PerkColorByState_OutBorder, FLinearColor CallFunc_PerkColorByState_OutIcon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void ShowAs(class UTexture2D* InIconTexture, FLinearColor InIconColor, int32 InRank, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FString CallFunc_IntToRomanNumeral_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetDimensions(float InDiminsions, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void PreConstruct(bool IsDesignTime);
    void Set Perk Asset Last Claimed(class UPerkAsset* PerkAsset);
    void ExecuteUbergraph_UI_PerkIcon(int32 EntryPoint, class UPerkAsset* K2Node_CustomEvent_PerkAsset, int32 CallFunc_GetCurrentRank_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
