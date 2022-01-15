#ifndef UE4SS_SDK_UI_RewardResourceAditive_HPP
#define UE4SS_SDK_UI_RewardResourceAditive_HPP

class UUI_RewardResourceAditive_C : URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* ResourceAmount;
    UImage* ResourceIcon;
    UTextBlock* TextBlock_0;
    UResourceData* Resource;
    int32 Amount;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RewardResourceAditive(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
