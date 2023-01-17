#ifndef UE4SS_SDK_TOOLTIP_MasteryIcon_HPP
#define UE4SS_SDK_TOOLTIP_MasteryIcon_HPP

class UTOOLTIP_MasteryIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* HeaderLabel;
    class UVerticalBox* LinesBox;
    TArray<class UUnlockReward*> Unlocks;
    class UItemID* Item;
    TSoftClassPtr<AActor> BoscoSoftRef;

    void SetUnlocks(TArray<class UUnlockReward*>& Array);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_MasteryIcon(int32 EntryPoint);
};

#endif
