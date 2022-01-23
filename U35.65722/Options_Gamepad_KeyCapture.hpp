#ifndef UE4SS_SDK_Options_Gamepad_KeyCapture_HPP
#define UE4SS_SDK_Options_Gamepad_KeyCapture_HPP

class UOptions_Gamepad_KeyCapture_C : public UInputCaptureWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* DisplaySwitcher;
    class UImage* FocusedIndicator;
    class USizeBox* IconSizeBox;
    class UImage* InputImage;
    class UBasic_Label_C* InputLabel;
    float IconSize;
    int32 FontSize;
    FOptions_Gamepad_KeyCapture_COnCapturingChanged OnCapturingChanged;
    void OnCapturingChanged(bool InCapturing);

    void UpdateKeyDisplay(FKey InKey, bool HasIcon, FActionIconMapping IconMapping, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FText CallFunc_GetKeyName_ReturnValue, FActionIconMapping CallFunc_FindControllerKeyIcon_KeyIcon, bool CallFunc_FindControllerKeyIcon_ReturnValue);
    bool IsInteractable();
    void ReceiveCapturingChanged(bool InCapturing);
    void ReceiveKeyChanged(FKey InKey);
    void Construct();
    void OnCustomKeyBindingsChanged();
    void ReceiveKeyCaptured(FKey InKey);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Gamepad_KeyCapture(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_Options_Gamepad_KeyCaptureK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_InCapturing, FKey K2Node_Event_InKey_1, ESlateVisibility K2Node_Select_Default, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FKey CallFunc_GetCurrentBinding_ReturnValue, FKey K2Node_Event_InKey, FCustomKeySetting CallFunc_FindCurrentSettingsForKey_OutSettings, bool CallFunc_FindCurrentSettingsForKey_ReturnValue, FKey CallFunc_GetCurrentBinding_ReturnValue_1, bool K2Node_Event_IsDesignTime);
    void OnCapturingChanged__DelegateSignature(bool InCapturing);
};

#endif
