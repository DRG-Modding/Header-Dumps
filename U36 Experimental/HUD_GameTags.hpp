#ifndef UE4SS_SDK_HUD_GameTags_HPP
#define UE4SS_SDK_HUD_GameTags_HPP

class UHUD_GameTags_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_GameTags_Entry_C* GameTag_Experimental;
    class UHUD_GameTags_Entry_C* GameTag_Sandbox;

    void UpdateSandboxTag();
    void UpdateExperimentalTag();
    void Construct();
    void ExecuteUbergraph_HUD_GameTags(int32 EntryPoint);
};

#endif
