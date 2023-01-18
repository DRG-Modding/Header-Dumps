#ifndef UE4SS_SDK_SLVL_SpaceRig_GreatEggHunt_HPP
#define UE4SS_SDK_SLVL_SpaceRig_GreatEggHunt_HPP

class ASLVL_SpaceRig_GreatEggHunt_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UAudioComponent*> AmbientAudioComponents;

    void UpdateAmbientMusic();
    void FindAmbientMusicPlayers();
    void ReceiveBeginPlay();
    void OnJukeboxStreamerModeChanged_Event_0(bool NewValue);
    void ExecuteUbergraph_SLVL_SpaceRig_GreatEggHunt(int32 EntryPoint);
};

#endif
