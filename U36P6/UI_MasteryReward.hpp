#ifndef UE4SS_SDK_UI_MasteryReward_HPP
#define UE4SS_SDK_UI_MasteryReward_HPP

class UUI_MasteryReward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_GearFiller;
    class UImage* ICON_GearOutline;
    class UITM_SkinIcon_C* ITM_SkinIcon;
    class UOverlay* Overlay_0;
    class USizeBox* SizeBox_Weapon_Icon;
    class UTextBlock* TextBlock_Bonus;
    class UTextBlock* TextBlock_Description;
    class UUnlockReward* Reward;
    class UUpgradableGearComponent* ItemGearComponent;

    void Construct();
    void ExecuteUbergraph_UI_MasteryReward(int32 EntryPoint);
};

#endif
