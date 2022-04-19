#ifndef UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP

class ASLVL_SpaceRig_Xmas_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UAudioComponent*> AmbientAudioComponents;

    void UpdateAmbientMusic();
    void FindAmbientMusicPlayers();
    void ReceiveBeginPlay();
    void OnJukeboxStreamerModeChanged_Event_0(bool NewValue);
    void ExecuteUbergraph_SLVL_SpaceRig_Xmas(int32 EntryPoint);
};

#endif
