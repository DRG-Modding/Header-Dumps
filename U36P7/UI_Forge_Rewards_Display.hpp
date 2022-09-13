#ifndef UE4SS_SDK_UI_Forge_Rewards_Display_HPP
#define UE4SS_SDK_UI_Forge_Rewards_Display_HPP

class UUI_Forge_Rewards_Display_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UITM_BigButton_C* ContinueButton;
    class UImage* NoiseImage;
    class UUI_Forge_Details_C* UI_Forge_Details;
    FUI_Forge_Rewards_Display_COnFinished OnFinished;
    void OnFinished();

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Show(class USchematic* InSchematic);
    void Construct();
    void OnIntroStarted();
    void OnIntroFinished();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ClickContinue();
    void ExecuteUbergraph_UI_Forge_Rewards_Display(int32 EntryPoint);
    void OnFinished__DelegateSignature();
};

#endif
