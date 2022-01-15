#ifndef UE4SS_SDK_Menu_MovieMode_HPP
#define UE4SS_SDK_Menu_MovieMode_HPP

class UMenu_MovieMode_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USlider* BloomSlider;
    UTextBlock* BloomText;
    UButton* Button_Close;
    UButton* Button_General;
    UButton* Button_Hotkeys;
    UButton* Button_Light;
    UButton* Button_PostProcess;
    UButton* Button_Tracking;
    UTextBlock* CameraFovText;
    USlider* CameraShakeSlider;
    UTextBlock* CameraShakeText;
    USlider* ChromaSlider;
    UTextBlock* ChromaText;
    UButton* ClearAllLights;
    UWidgetSwitcher* ContentSwitcher;
    USlider* DOFAmountSlider;
    UTextBlock* DOFAmountText;
    USlider* FoV_Slider_1;
    UButton* LoadLightSettings;
    USlider* MotionBlurSlider;
    UTextBlock* MotionBlurText;
    USlider* MouseSensSlider;
    UTextBlock* MouseSensText;
    UMovieMode_DronePointLight_C* MovieMode_DronePointLight;
    UMovieMode_FlareLight_C* MovieMode_FlareLight;
    UMovieMode_ScoutFlareLight_C* MovieMode_ScoutFlareLight;
    UTextBlock* OffText;
    UTextBlock* OffText_1;
    UTextBlock* OffText_2;
    UTextBlock* OffText_DOF;
    UTextBlock* OffText_FreeRot;
    UTextBlock* OnText;
    UTextBlock* OnText_1;
    UTextBlock* OnText_2;
    UTextBlock* OnText_DOF;
    UTextBlock* OnText_FreeRot;
    UButton* PivotOffsetButton;
    UButton* PostionalOffsetReset;
    UButton* ResetFocusButton;
    UButton* ResetFocusButton_1;
    UButton* SaveLightSettings;
    USlider* Spline_Speed;
    UButton* ToggleDOF;
    UButton* ToggleFreeRotation;
    UButton* TogglePlayerMeshButton;
    UButton* TogglePlayerMeshButton_1;
    UButton* TogglePlayerMeshButton_2;
    UCanvasPanel* TopCanvasPanel;
    USlider* VignetteSlider;
    UTextBlock* VignetteText;
    UButton* ActiveTab;
    bool PlayerMeshToggled;
    UButton* TabButtonInFocus;
    bool UseDepthOfField;
    FPostProcessSettings PostProcessingSettings;
    int32 PP_FilterComboIndex;

    void SetOnOffTexts(bool Condition, UTextBlock* OffText, UTextBlock* OnText);
    void DeselectTab(UButton* Active Tab, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SelectTab(int32 Index, UButton* Tab Button);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFKey CallFunc_GetKey_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, FText CallFunc_Key_GetDisplayName_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
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
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
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
    void ExecuteUbergraph_Menu_MovieMode(int32 EntryPoint, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone, bool K2Node_DynamicCast_bSuccess, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_1, bool K2Node_DynamicCast_bSuccess_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetActorEnableCollision_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_4, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ToggleSplineMeshVisibility_ReturnValue, float K2Node_ComponentBoundEvent_Value_8, FText CallFunc_Conv_FloatToText_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_5, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_6, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_2, bool K2Node_DynamicCast_bSuccess_3, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_3, bool K2Node_DynamicCast_bSuccess_4, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_7, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_8, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_4, bool K2Node_DynamicCast_bSuccess_5, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_5, bool K2Node_DynamicCast_bSuccess_6, float K2Node_ComponentBoundEvent_Value_7, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_9, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_10, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_6, bool K2Node_DynamicCast_bSuccess_7, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_1, bool K2Node_DynamicCast_bSuccess_8, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_11, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_12, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_2, bool K2Node_DynamicCast_bSuccess_9, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_3, bool K2Node_DynamicCast_bSuccess_10, float K2Node_ComponentBoundEvent_Value_6, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_13, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_7, bool K2Node_DynamicCast_bSuccess_11, FText CallFunc_Conv_FloatToText_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_14, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_4, bool K2Node_DynamicCast_bSuccess_12, UWindowManager* CallFunc_GetWindowManager_ReturnValue, float K2Node_ComponentBoundEvent_Value_5, FText CallFunc_Conv_FloatToText_ReturnValue_2, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, FText CallFunc_Conv_FloatToText_ReturnValue_3, FText CallFunc_Conv_FloatToText_ReturnValue_4, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_15, UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_16, UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_1, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_5, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_Not_PreBool_ReturnValue_2, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, FText CallFunc_Conv_FloatToText_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_3, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_17, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_6, bool K2Node_DynamicCast_bSuccess_14, float Temp_float_Variable, bool Temp_bool_Variable, float K2Node_Select_Default, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_18, FText CallFunc_Conv_FloatToText_ReturnValue_6, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_7, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_Not_PreBool_ReturnValue_4, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_19, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_8, bool K2Node_DynamicCast_bSuccess_16, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_20, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_9, bool K2Node_DynamicCast_bSuccess_17, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_21, UPlayerCameraDrone* K2Node_DynamicCast_AsPlayer_Camera_Drone_8, bool K2Node_DynamicCast_bSuccess_18, float K2Node_ComponentBoundEvent_Value, FText CallFunc_Conv_FloatToText_ReturnValue_7, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_22, UBP_PlayerCameraDrone_C* K2Node_DynamicCast_AsBP_Player_Camera_Drone_10, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_SetCameraShakeAmount_ReturnValue);
}

#endif
