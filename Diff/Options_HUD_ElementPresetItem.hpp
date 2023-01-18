#ifndef UE4SS_SDK_Options_HUD_ElementPresetItem_HPP
#define UE4SS_SDK_Options_HUD_ElementPresetItem_HPP

class UOptions_HUD_ElementPresetItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* Button;
    EHUDVisibilityPresets PresetID;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_HUD_ElementPresetItem(int32 EntryPoint);
};

#endif
