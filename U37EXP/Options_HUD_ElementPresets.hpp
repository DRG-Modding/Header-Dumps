#ifndef UE4SS_SDK_Options_HUD_ElementPresets_HPP
#define UE4SS_SDK_Options_HUD_ElementPresets_HPP

class UOptions_HUD_ElementPresets_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* PresetBox;

    void AddPreset(EHUDVisibilityPresets PresetID);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_HUD_ElementPresets(int32 EntryPoint);
};

#endif
