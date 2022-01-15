#ifndef UE4SS_SDK_UI_Forge_Completed_HPP
#define UE4SS_SDK_UI_Forge_Completed_HPP

class UUI_Forge_Completed_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UITM_BigButton_C* ContinueButton;
    UImage* NoiseImage;
    UUI_Forge_Details_C* UI_Forge_Details;
    FUI_Forge_Completed_COnFinished OnFinished;
    void OnFinished();

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsOkMenu_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void Show(USchematic* InSchematic, FString Key, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetAnalyticsClass_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_GetTitle_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, FString CallFunc_GetAnalyticsFText_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void OnIntroStarted();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature();
    void ClickContinue();
    void ExecuteUbergraph_UI_Forge_Completed(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnFinished__DelegateSignature();
}

#endif
