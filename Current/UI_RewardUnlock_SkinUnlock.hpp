#ifndef UE4SS_SDK_UI_RewardUnlock_SkinUnlock_HPP
#define UE4SS_SDK_UI_RewardUnlock_SkinUnlock_HPP

class UUI_RewardUnlock_SkinUnlock_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UImage* CategoryIcon;
    class USizeBox* CategorySizer;
    class UOverlay* IconOverlay;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon;
    class UTextBlock* Subtitle;
    class UHorizontalBox* TextAndCharacterBox;
    class UTextBlock* UnlockTitle;

    void SetCharacterIcon(class UPlayerCharacterID* characterID, class UPlayerCharacterID*& OutCharacterID);
    void SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID*& OutputPin);
    void GetUnlockDetails(FText& OutTitle, FText& OutSubTitle, class UTexture*& Icon);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void Construct();
    void ExecuteUbergraph_UI_RewardUnlock_SkinUnlock(int32 EntryPoint);
};

#endif
