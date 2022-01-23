#ifndef UE4SS_SDK_WND_ClaimableRewards_HPP
#define UE4SS_SDK_WND_ClaimableRewards_HPP

class UWND_ClaimableRewards_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBlurIn;
    class UBasic_ButtonScalable2_C* ContinueButton;
    class UUI_ClaimableRewards_View_C* RewardView;
    class UAudioComponent* AudioSpeak;
    FClaimableRewardView Data;

    void GetData(FClaimableRewardView& OutData);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue);
    void OnShown();
    void BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature();
    void DoClose();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_ClaimableRewards(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FClaimableRewardView CallFunc_GetData_OutData, bool K2Node_Event_IsDesignTime, FClaimableRewardView CallFunc_GetData_OutData_1);
};

#endif
