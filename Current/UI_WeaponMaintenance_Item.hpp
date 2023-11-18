#ifndef UE4SS_SDK_UI_WeaponMaintenance_Item_HPP
#define UE4SS_SDK_UI_WeaponMaintenance_Item_HPP

class UUI_WeaponMaintenance_Item_C : public UWeaponMaintenanceItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UOverlay* BG_Glow_Overlay;
    class UBorder* ClaimBorder;
    class UButton* ClaimButton;
    class USizeBox* DefaultSizeBox;
    class UImage* Image_Finished;
    class UBasic_Image_C* Image_Item_BG;
    class UBasic_Image_C* Image_Item_Detailed;
    class UImage* Image_Locked;
    class UUI_Season_Border_C* ItemBackground;
    class UTextBlock* ItemName;
    class UBasic_Label_C* LevelLabel;
    class UProgressBar* MaintenanceProgress;
    class USizeBox* ScaledSizeBox;
    class UWidgetSwitcher* SwitcherLocked;
    class UWidgetSwitcher* SwitcherState;
    int32 Height;
    FMenuColorAndTint ColorLocked;
    FMenuColorAndTint ColorMaintaining;
    bool Hovered;
    class UWND_Season_RewardClaimed_C* RewardWindow;
    FMenuColorAndTint ColorLevelUp;
    FMenuColorAndTint ColorFinished;

    void GetPct(int32 Current, int32 Target, float& Pct);
    void ShowState(EWeaponMaintenanceState InState, int32 InXP, int32 InTargetXP, int32 InLevel, int32 InMaxLevel);
    class UWidget* GetToolTip();
    void SetHeight(int32 InHeight);
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void Receive_RefreshedFromSavegame();
    void BndEvt__UI_WeaponMaintenance_Item_ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_WeaponMaintenance_Item_ClaimButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponMaintenance_Item_ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_WeaponMaintenance_Item(int32 EntryPoint);
};

#endif
