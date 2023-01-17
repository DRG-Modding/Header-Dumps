#ifndef UE4SS_SDK_UI_RewardUnlock_HPP
#define UE4SS_SDK_UI_RewardUnlock_HPP

class UUI_RewardUnlock_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UImage* BigImage;
    class USizeBox* BigImageSize;
    class UHorizontalBox* HorizontalBox_1;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UWidgetSwitcher* ImageSwitcher;
    class UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon;
    class UTextBlock* UnlockedText;
    class UTextBlock* UnlockTitle;

    void SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID*& OutputPin);
    void GetUnlockDetails(bool& IsHidden, FText& OutTitle, class UTexture*& Icon, FLinearColor& IconTint, class UTexture2D*& BigImage);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void ExecuteUbergraph_UI_RewardUnlock(int32 EntryPoint);
};

#endif
