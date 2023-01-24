#ifndef UE4SS_SDK_Options_Tab_Saves_HPP
#define UE4SS_SDK_Options_Tab_Saves_HPP

class UOptions_Tab_Saves_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMenu_SaveSlots_C* Menu_SaveSlots;
    class UOptions_ResetProgress_C* Options_ResetProgress;
    class UOptions_RestoreSave_C* Options_RestoreSave;
    class UBasic_Option_C* Reset_Progress;
    class UBasic_Option_C* Restore_Save;
    FOptions_Tab_Saves_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void ExecuteUbergraph_Options_Tab_Saves(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
