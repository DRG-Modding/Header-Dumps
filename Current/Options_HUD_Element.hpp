#ifndef UE4SS_SDK_Options_HUD_Element_HPP
#define UE4SS_SDK_Options_HUD_Element_HPP

class UOptions_HUD_Element_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UHorizontalBox* DotsBox;
    TArray<EHUDVisibilityMode> AvailableModes;
    class UHUDVisibilityGroup* VisibilityGroup;

    void UpdateDots();
    void SetupOptions();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature();
    void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature();
    void Construct();
    void OnModeChanged_Event(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void ExecuteUbergraph_Options_HUD_Element(int32 EntryPoint);
};

#endif
