#ifndef UE4SS_SDK_ITM_EscapeMenu_MissionModifier_HPP
#define UE4SS_SDK_ITM_EscapeMenu_MissionModifier_HPP

class UITM_EscapeMenu_MissionModifier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Warning;
    class UTextBlock* DataWarningName;
    class UImage* Image_Warning;
    FITM_EscapeMenu_MissionModifier_COnClicked OnClicked;
    void OnClicked();

    void GetToolTipWidget(class UWidget*& return value, FActionIconMapping Temp_struct_Variable, EFSDInputSource Temp_byte_Variable, FActionIconMapping CallFunc_FindMouseKeyboardKeyIcon_KeyIcon, bool CallFunc_FindMouseKeyboardKeyIcon_ReturnValue, FActionIconMapping CallFunc_FindControllerKeyIcon_KeyIcon, bool CallFunc_FindControllerKeyIcon_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UToolTip_WithKeyIcon_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FActionIconMapping K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void SetWarning(class UMissionWarning* Warning);
    void SetMutator(class UMissionMutator* Mutator);
    void Hide();
    void BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetVisuals(FText InText, class UTexture2D* Icon, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void ExecuteUbergraph_ITM_EscapeMenu_MissionModifier(int32 EntryPoint, FText K2Node_CustomEvent_InText, class UTexture2D* K2Node_CustomEvent_Icon, TEnumAsByte<ENUM_MenuColors::Type> K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UMissionWarning* K2Node_CustomEvent_Warning, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, class UMissionMutator* K2Node_CustomEvent_Mutator, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime);
    void OnClicked__DelegateSignature();
};

#endif
