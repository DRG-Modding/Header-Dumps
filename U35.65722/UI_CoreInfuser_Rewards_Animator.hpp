#ifndef UE4SS_SDK_UI_CoreInfuser_Rewards_Animator_HPP
#define UE4SS_SDK_UI_CoreInfuser_Rewards_Animator_HPP

class UUI_CoreInfuser_Rewards_Animator_C : public UUserWidget
{
    class UWidgetAnimation* AnimOpen;
    class UNamedSlot* CenterSlot;
    class UNamedSlot* LeftSlot;
    class UNamedSlot* RewardSlot;
    class UNamedSlot* RightSlot;
    bool IsOpen;
    FUI_CoreInfuser_Rewards_Animator_COnOpenChanged OnOpenChanged;
    void OnOpenChanged(bool Open);

    void ShowAsReward(bool IsReward, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void GetIsOpen(bool& IsOpen);
    void SetOpen(bool InIsOpen, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OnOpenChanged__DelegateSignature(bool Open);
};

#endif
