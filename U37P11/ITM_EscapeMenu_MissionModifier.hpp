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

    void GetToolTipWidget(class UWidget*& return value);
    void PreConstruct(bool IsDesignTime);
    void SetWarning(class UMissionWarning* Warning);
    void SetMutator(class UMissionMutator* Mutator);
    void Hide();
    void BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetVisuals(FText InText, class UTexture2D* Icon, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void ExecuteUbergraph_ITM_EscapeMenu_MissionModifier(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
