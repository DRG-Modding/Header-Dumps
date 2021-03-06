#ifndef UE4SS_SDK_Menu_MovieMode_HPP
#define UE4SS_SDK_Menu_MovieMode_HPP

class UMenu_MovieMode_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USlider* BloomSlider;
    class UTextBlock* BloomText;
    class UButton* Button_Actor;
    class UButton* Button_Close;
    class UButton* Button_General;
    class UButton* Button_Hotkeys;
    class UButton* Button_Light;
    class UButton* Button_PostProcess;
    class UButton* Button_Tracking;
    class UTextBlock* CameraFovText;
    class USlider* CameraShakeSlider;
    class UTextBlock* CameraShakeText;
    class USlider* ChromaSlider;
    class UTextBlock* ChromaText;
    class UButton* ClearAllLights;
    class UComboBoxString* ComboBoxString;
    class UComboBoxString* ComboBoxString_220;
    class UWidgetSwitcher* ContentSwitcher;
    class USlider* DOFAmountSlider;
    class UTextBlock* DOFAmountText;
    class USlider* FoV_Slider_1;
    class UButton* LoadLightSettings;
    class USlider* MotionBlurSlider;
    class UTextBlock* MotionBlurText;
    class USlider* MouseSensSlider;
    class UTextBlock* MouseSensText;
    class UMovieMode_DronePointLight_C* MovieMode_DronePointLight;
    class UMovieMode_FlareLight_C* MovieMode_FlareLight;
    class UMovieMode_ScoutFlareLight_C* MovieMode_ScoutFlareLight;
    class UTextBlock* OffText;
    class UTextBlock* OffText_1;
    class UTextBlock* OffText_2;
    class UTextBlock* OffText_DOF;
    class UTextBlock* OffText_FreeRot;
    class UTextBlock* OnText;
    class UTextBlock* OnText_1;
    class UTextBlock* OnText_2;
    class UTextBlock* OnText_DOF;
    class UTextBlock* OnText_FreeRot;
    class UButton* PivotOffsetButton;
    class UButton* PostionalOffsetReset;
    class UButton* ResetFocusButton;
    class UButton* ResetFocusButton_1;
    class UButton* SaveLightSettings;
    class USlider* Spline_Speed;
    class UButton* ToggleDOF;
    class UButton* ToggleFreeRotation;
    class UButton* TogglePlayerMeshButton;
    class UButton* TogglePlayerMeshButton_1;
    class UButton* TogglePlayerMeshButton_2;
    class UCanvasPanel* TopCanvasPanel;
    class USlider* VignetteSlider;
    class UTextBlock* VignetteText;
    class UButton* ActiveTab;
    bool PlayerMeshToggled;
    class UButton* TabButtonInFocus;
    bool UseDepthOfField;
    FPostProcessSettings PostProcessingSettings;
    int32 PP_FilterComboIndex;

    void SetOnOffTexts(bool Condition, class UTextBlock* OffText, class UTextBlock* OnText);
    void DeselectTab(class UButton* Active Tab);
    void SelectTab(int32 Index, class UButton* Tab Button);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Light_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_165_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TogglePlayerMeshButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TogglePlayerMeshButton_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TogglePlayerMeshButton_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__FoV_Slider_1_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_Tracking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TogglePlayerMeshButton_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TogglePlayerMeshButton_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClearAllLights_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__LoadLightSettings_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Spline_Speed_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__MouseSensSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MotionBlurSlider_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__VignetteSlider_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ChromaSlider_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ToggleDOF_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ChromaSlider_1_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__BloomSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__DOFAmountSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__ToggleFreeRotation_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ResetFocusButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ResetFocusButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Hotkeys_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CameraShakeSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_Actor_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ComboBoxString_220_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_12_OnOpeningEvent__DelegateSignature();
    void BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_29_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Menu_MovieMode(int32 EntryPoint);
};

#endif
