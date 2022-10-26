#ifndef UE4SS_SDK_HUD_Hold_Activation_HPP
#define UE4SS_SDK_HUD_Hold_Activation_HPP

class UHUD_Hold_Activation_C : public UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHolding;
    class UWidgetAnimation* AnimCountDown;
    class UWidgetAnimation* AnimIntro;
    class UBasic_Label_C* ActionLabel;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig;
    class UBasic_Label_C* CountDownLabel;
    class UImage* IconImage;
    class UUI_AdvancedLabel_C* InputLabel;
    class UUI_CircularProgressBar_C* ProgressBackground;
    class UUI_CircularProgressBar_C* ProgressCountDown;
    class UUI_CircularProgressBar_C* ProgressHold;
    class USizeBox* TimerSizeBox;
    float CountDownTime;
    float HoldDuration;
    FText ActionHeader;
    FText InputText;
    FText InputTextController;
    class UTexture2D* Icon;
    TEnumAsByte<ENUM_MenuColors::Type> IconTint;
    float CountDownDuration;
    FHUD_Hold_Activation_COnCountdownFinished OnCountdownFinished;
    void OnCountDownFinished();
    float CountDownProgress;
    bool Holding;
    float HoldingProgress;
    FHUD_Hold_Activation_COnHoldingFinished OnHoldingFinished;
    void OnHoldingFinished();
    bool Hide Timer;

    void SetHoldingProgress(float InProgress);
    void SetHolding(bool IsHolding);
    void CancelCountDown(bool HideCountDown);
    void SetCountDownProgress(float InProgress);
    void BeginCountDown(float InDuration);
    void SetCountDown(float InTime, float InTotalDuration, bool& Finished);
    void SetIcon(class UTexture2D* Texture, TEnumAsByte<ENUM_MenuColors::Type> InTint);
    void SetInputText(FText InInputText, FText InInputTextController);
    void SetActionHeader(const FText& InText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void AnimCountDownFinished();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnPerkActivationFinished();
    void ExecuteUbergraph_HUD_Hold_Activation(int32 EntryPoint);
    void OnHoldingFinished__DelegateSignature();
    void OnCountDownFinished__DelegateSignature();
};

#endif
