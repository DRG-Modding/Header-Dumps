#ifndef UE4SS_SDK_UI_MissionComplete_RewardColumn_HPP
#define UE4SS_SDK_UI_MissionComplete_RewardColumn_HPP

class UUI_MissionComplete_RewardColumn_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* EntryBox;
    class UImage* TotalIcon;
    class UTextBlock* TotalText;
    FUI_MissionComplete_RewardColumn_COnCountingFinished OnCountingFinished;
    void OnCountingFinished();
    class UTexture2D* Icon;
    FLinearColor IconTint;
    TArray<class UUI_MissionComplete_CombinedRewardLine_C*> Entries;
    float TotalAmount;
    int32 Index;
    class UUI_MissionComplete_CombinedRewardLine_C* CurrentEntry;
    int32 Entry Size;
    int32 Header Size;
    int32 HeadIconSize;

    int32 GetGoldCollected();
    void IncTotal(float Delta);
    void SetTotal(float Value);
    void ClearEntries();
    void AddEntry(FText Description, int32 Amount, class UUI_MissionComplete_CombinedRewardLine_C*& OutEntry);
    void SetIcon(class UTexture2D* Texture, FLinearColor Tint);
    void PreConstruct(bool IsDesignTime);
    void Begin Counting();
    void Construct();
    void FillCreditRewards();
    void FillXPRewards();
    void ExecuteUbergraph_UI_MissionComplete_RewardColumn(int32 EntryPoint);
    void OnCountingFinished__DelegateSignature();
};

#endif
