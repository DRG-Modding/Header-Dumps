#ifndef UE4SS_SDK_UI_RewardResourceAditive_HPP
#define UE4SS_SDK_UI_RewardResourceAditive_HPP

class UUI_RewardResourceAditive_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ResourceAmount;
    class UImage* ResourceIcon;
    class UTextBlock* TextBlock_0;
    class UResourceData* Resource;
    int32 Amount;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RewardResourceAditive(int32 EntryPoint);
};

#endif
