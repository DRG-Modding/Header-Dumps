#ifndef UE4SS_SDK_UI_Forge_MasteryReward_HPP
#define UE4SS_SDK_UI_Forge_MasteryReward_HPP

class UUI_Forge_MasteryReward_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UITM_BigButton_C* ContinueButton;
    UImage* NoiseImage;
    UUI_Forge_Details_C* UI_Forge_Details;
    FUI_Forge_MasteryReward_COnFinished OnFinished;
    void OnFinished();

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsOkMenu_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void Show(USchematic* InSchematic, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void OnIntroStarted();
    void OnIntroFinished();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ClickContinue();
    void ExecuteUbergraph_UI_Forge_MasteryReward(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnFinished__DelegateSignature();
}

#endif
