#ifndef UE4SS_SDK_UI_Forge_Completed_HPP
#define UE4SS_SDK_UI_Forge_Completed_HPP

class UUI_Forge_Completed_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UITM_BigButton_C* ContinueButton;
    class UImage* NoiseImage;
    class UUI_Forge_Details_C* UI_Forge_Details;
    FUI_Forge_Completed_COnFinished OnFinished;
    void OnFinished();

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Show(class USchematic* InSchematic);
    void Construct();
    void OnIntroStarted();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature();
    void ClickContinue();
    void ExecuteUbergraph_UI_Forge_Completed(int32 EntryPoint);
    void OnFinished__DelegateSignature();
};

#endif
