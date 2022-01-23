#ifndef UE4SS_SDK_Options_MouseKeyboard_KeyCapture_HPP
#define UE4SS_SDK_Options_MouseKeyboard_KeyCapture_HPP

class UOptions_MouseKeyboard_KeyCapture_C : public UInputCaptureWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* ClearButton;
    class UImage* FocusedImage;
    class UTextBlock* KeyLabel;
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureFinished OnKeyCaptureFinished;
    void OnKeyCaptureFinished();
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureError OnKeyCaptureError;
    void OnKeyCaptureError();
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureChanged OnKeyCaptureChanged;
    void OnKeyCaptureChanged();
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureCancelled OnKeyCaptureCancelled;
    void OnKeyCaptureCancelled();
    FKey CapturedKey;
    FCustomKeySetting ConflictingAction;
    FKey NoneKey;
    FKey CurrentKey;

    void UpdateClearButton(bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateKeyInfo(const FKey& Key, FText CallFunc_Key_GetDisplayName_ReturnValue);
    void No_8623E71E42D4951E6FF011979EF3C667();
    void Yes_8623E71E42D4951E6FF011979EF3C667();
    void BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void PreConstruct(bool IsDesignTime);
    void OnCustomKeyBindingsChanged();
    void Construct();
    void ReceiveKeyChanged(FKey InKey);
    void ReceiveKeyCaptured(FKey InKey);
    void ReceiveCapturingChanged(bool InCapturing);
    void ExecuteUbergraph_Options_MouseKeyboard_KeyCapture(int32 EntryPoint, FExecuteUbergraph_Options_MouseKeyboard_KeyCaptureK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FKey CallFunc_GetCurrentBinding_ReturnValue, FExecuteUbergraph_Options_MouseKeyboard_KeyCaptureK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_Options_MouseKeyboard_KeyCaptureK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_Format_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, class UYesNoPromptAction* CallFunc_PromptYesNo_ReturnValue, FCustomKeySetting CallFunc_FindCurrentSettingsForKey_OutSettings, bool CallFunc_FindCurrentSettingsForKey_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, bool CallFunc_Not_PreBool_ReturnValue, const FPointerEvent K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FKey K2Node_Event_InKey_1, FKey K2Node_Event_InKey, bool K2Node_Event_InCapturing, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void OnKeyCaptureCancelled__DelegateSignature();
    void OnKeyCaptureChanged__DelegateSignature();
    void OnKeyCaptureError__DelegateSignature();
    void OnKeyCaptureFinished__DelegateSignature();
};

#endif
