#ifndef UE4SS_SDK_ITM_MisDesMutator_HPP
#define UE4SS_SDK_ITM_MisDesMutator_HPP

class UITM_MisDesMutator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BlinkMutator;
    class UWidgetAnimation* BlinkWarning;
    class UImage* BlinkOverlay;
    class UButton* Button_Outer;
    class UTextBlock* DATA_Modifier;
    class UImage* GradientBG;
    class UImage* IconModifier;
    class UOverlay* Overlay_1;
    class USizeBox* SizeBox_Height;
    FLinearColor WarningTint;
    bool IsWarning;
    bool LeftAlign;
    float Heigh;
    bool CanOpenMinersManual;

    void SetWarning(class UMissionWarning* Warning);
    void SetAnomaly(class UMissionMutator* Mutator);
    void SetVisuals(FText Title, class UTexture2D* Icon, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_MisDesMutator(int32 EntryPoint);
};

#endif
