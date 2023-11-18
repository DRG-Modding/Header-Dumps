#ifndef UE4SS_SDK_TOOLTIP_Season_Reward_HPP
#define UE4SS_SDK_TOOLTIP_Season_Reward_HPP

class UTOOLTIP_Season_Reward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UNamedSlot* BelowTooltipSlot;
    class UNamedSlot* BottomSlot;
    class UBasic_Label_C* BottomText;
    class UHorizontalBox* HorizontalBox_Cost;
    class UImage* Image_213;
    class UImage* Image_Background;
    class UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    class UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    class UOverlay* Overlay_Skin;
    class UTextBlock* Text_Cost;
    class UTextBlock* Text_Count;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Description;
    class UTextBlock* TextBlock_Title;
    class UReward* Reward;

    void SetInfo(FText inTitle, FText InCategory, FText InDescription, class UPlayerCharacterID* InCharacterID, const bool inShowIcon);
    void SetData(class UMaterialInstanceDynamic* DynMat, class UReward* Reward, bool ShowCost, int32 Cost);
    void SetCount(int32 Count);
    void SetDataFromReward(class UReward* Reward, bool ShowCost, int32 Cost);
    void Setup(bool ShowCost, int32 Cost);
    void SetDataFromSkin(class UItemSkin* InSkin, class UItemID* InOptionalItem, class UPlayerCharacterID* InOptionalCharacter);
    void SetBottomText(FText InBottomText);
    void ExecuteUbergraph_TOOLTIP_Season_Reward(int32 EntryPoint);
};

#endif
