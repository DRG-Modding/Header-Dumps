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

    void ShowAsReward(bool IsReward);
    void GetIsOpen(bool& IsOpen);
    void SetOpen(bool InIsOpen);
    void OnOpenChanged__DelegateSignature(bool Open);
};

#endif
