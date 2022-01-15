#ifndef UE4SS_SDK_ITM_MissionComplete_MissionState_Failure_HPP
#define UE4SS_SDK_ITM_MissionComplete_MissionState_Failure_HPP

class UITM_MissionComplete_MissionState_Failure_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* StateTextAppear;
    UTextBlock* DATA_MissionState;
    UTextBlock* DATA_MissionState_Shadow;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UImage* Image_5;
    UImage* Image_6;
    UImage* Image_7;
    UImage* Image_8;
    UImage* Image_10;
    UImage* MissionState_BGglow;
    UImage* MissionState_BGshadow;
    UOverlay* Overlay_3;
    UOverlay* SplashOverlay;
    UUI_RunningText_C* UI_RunningText;
    UUI_RunningText_C* UI_RunningText_HostAbort;
    bool MissionFailed;
    FText StatusText;
    float StartDelay;
    FITM_MissionComplete_MissionState_Failure_COnAnnouncementFinished OnAnnouncementFinished;
    void OnAnnouncementFinished();
    bool AbortByHost;

    void AssignColors(bool Temp_bool_Variable, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FLinearColor K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_RunningText_K2Node_ComponentBoundEvent_0_OnFinished__DelegateSignature();
    void OnFinished();
    void BndEvt__UI_RunningText_HostAbort_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature();
    void ExecuteUbergraph_ITM_MissionComplete_MissionState_Failure(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_GetText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible);
    void OnAnnouncementFinished__DelegateSignature();
}

#endif
