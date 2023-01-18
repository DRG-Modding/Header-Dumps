#ifndef UE4SS_SDK_UI_PendingReward_RewardLine_HPP
#define UE4SS_SDK_UI_PendingReward_RewardLine_HPP

class UUI_PendingReward_RewardLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATAAmount;
    class UTextBlock* DataDescription;
    class UTextBlock* DataPostfix;

    void Init(FText Description, FText Postfix, int32 Amount, float StartDelay, class USoundBase* Sound);
    void PreConstruct(bool IsDesignTime);
    void Init Simple(FText Description, FText Postfix, int32 Amount);
    void ExecuteUbergraph_UI_PendingReward_RewardLine(int32 EntryPoint);
};

#endif
