#ifndef UE4SS_SDK_ITM_SeasonEditor_Level_HPP
#define UE4SS_SDK_ITM_SeasonEditor_Level_HPP

class UITM_SeasonEditor_Level_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_SingleSlot;
    class UButton* Button_SingleSlot_Special;
    class UTextBlock* TextBlock_Level;
    int32 Level;
    FITM_SeasonEditor_Level_CEmptyButtonClicked EmptyButtonClicked;
    void EmptyButtonClicked(class UButton* Button);

    void GetSpecialReward(class UReward*& Reward, class UITM_SeasonEditor_Reward_C*& RewardWidget);
    void GetNormalReward(class UReward*& Reward, class UITM_SeasonEditor_Reward_C*& RewardWidget);
    void SetWidgets(class UITM_SeasonEditor_Reward_C* Normal, class UITM_SeasonEditor_Reward_C* Special, int32 Level);
    void BndEvt__Button_SingleSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SingleSlot_Special_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonEditor_Level(int32 EntryPoint);
    void EmptyButtonClicked__DelegateSignature(class UButton* Button);
};

#endif
