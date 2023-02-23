#ifndef UE4SS_SDK_Menu_DLC_HPP
#define UE4SS_SDK_Menu_DLC_HPP

class UMenu_DLC_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUniformGridPanel* Entries_Panel;
    class UGameDLCSettings* Settings;
    class ABP_DLC_Audio_C* AudioActor;
    float EntryWidth;
    class UMediaPlayer* CurrentMediaPlayer;

    void AddDLC(class UGameDLC* InDLC);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void OnEntryHoverBegin(class UITM_DLC_Entry_C* InEntry);
    void OnEntryHoverEnd(class UITM_DLC_Entry_C* InEntry);
    void Construct();
    void OnVisibilityChanged_Event(ESlateVisibility InVisibility);
    void OnLastWindowClosed_Event();
    void OnEntryClicked(class UITM_DLC_Entry_C* InEntry);
    void ExecuteUbergraph_Menu_DLC(int32 EntryPoint);
};

#endif
