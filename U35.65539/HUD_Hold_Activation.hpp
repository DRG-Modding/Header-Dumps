#ifndef UE4SS_SDK_HUD_Hold_Activation_HPP
#define UE4SS_SDK_HUD_Hold_Activation_HPP

class UHUD_Hold_Activation_C : UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimHolding;
    UWidgetAnimation* AnimCountDown;
    UWidgetAnimation* AnimIntro;
    UBasic_Label_C* ActionLabel;
    UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig;
    UBasic_Label_C* CountDownLabel;
    UImage* IconImage;
    UUI_AdvancedLabel_C* InputLabel;
    UUI_CircularProgressBar_C* ProgressBackground;
    UUI_CircularProgressBar_C* ProgressCountDown;
    UUI_CircularProgressBar_C* ProgressHold;
    USizeBox* TimerSizeBox;
    float CountDownTime;
    float HoldDuration;
    FText ActionHeader;
    FText InputText;
    FText InputTextController;
    UTexture2D* Icon;
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

    void SetHoldingProgress(float InProgress, bool Temp_bool_Variable, float Temp_float_Variable, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default);
    void SetHolding(bool IsHolding, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void CancelCountDown(bool HideCountDown, bool Temp_bool_Variable, float Temp_float_Variable, float K2Node_Select_Default, bool CallFunc_SetCountDown_Finished);
    void SetCountDownProgress(float InProgress, float CallFunc_Lerp_ReturnValue, bool CallFunc_SetCountDown_Finished);
    void BeginCountdown(float InDuration, bool CallFunc_SetCountDown_Finished, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetCountDown(float InTime, float InTotalDuration, bool& Finished, float TimeShown, bool Temp_bool_Variable, float CallFunc_FMax_ReturnValue, int32 CallFunc_FCeil_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetIcon(UTexture2D* Texture, uint8 InTint, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetInputText(FText InInputText, FText InInputTextController);
    void SetActionHeader(const FText& InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void AnimCountDownFinished();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnPerkActivationFinished();
    void ExecuteUbergraph_HUD_Hold_Activation(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnPerkActivationTimerFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_SetCountDown_Finished, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FLinearColor CallFunc_MenuColors_OutputColor_3, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void OnHoldingFinished__DelegateSignature();
    void OnCountDownFinished__DelegateSignature();
}

#endif
