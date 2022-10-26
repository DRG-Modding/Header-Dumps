#ifndef UE4SS_SDK_UI_DisconnectScreen_HPP
#define UE4SS_SDK_UI_DisconnectScreen_HPP

class UUI_DisconnectScreen_C : public UUI_Disconnect_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* BlinkText;
    class UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* DisconnectReasonText;
    class UTextBlock* ErrorCode;
    class UImage* FadeOverlay;
    class UTextBlock* KickCaption;
    class UImage* Kicked_Image;
    class UTextBlock* TEXT_Header;
    class UUI_PendingRewardScreen_C* UI_PendingRewardScreen;

    void IsKickTheReason(EDisconnectReason reason, bool& Kicked);
    void GetBaseFSPGameInstance(class UFSDGameInstance*& AsFSDGame Instance);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void FadeIt(bool FadeIn, float& Duration);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void Update();
    void Construct();
    void ExecuteUbergraph_UI_DisconnectScreen(int32 EntryPoint);
};

#endif
