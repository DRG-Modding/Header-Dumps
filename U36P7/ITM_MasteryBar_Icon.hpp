#ifndef UE4SS_SDK_ITM_MasteryBar_Icon_HPP
#define UE4SS_SDK_ITM_MasteryBar_Icon_HPP

class UITM_MasteryBar_Icon_C : public UMasteryIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimUnlocked;
    class UProgressBar* BG;
    class UImage* ICON_Padlock;
    class UImage* Icon_Unlock;
    class UImage* Image_BG;
    class UImage* Image_Glow;
    class UImage* Image_Outline;
    class USizeBox* LockSizer;
    class UWidgetSwitcher* LockSwitcher;
    class UProgressBar* outline;
    class UCanvasPanel* RootCanvas;
    bool Filled;
    bool ShowIcons;
    TArray<class UUnlockReward*> Unlocks;
    class UItemID* Item;

    void ToggleIcons(bool ShowIcons);
    void SetUnlocked(bool IsUnlocked);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ReceiveUnlocked();
    void ExecuteUbergraph_ITM_MasteryBar_Icon(int32 EntryPoint);
};

#endif
