#ifndef UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP

class ASLVL_SpaceRig_Xmas_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UAudioComponent*> AmbientAudioComponents;
    class AStaticMeshActor* SM_Xmas_Bow_02_2_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class AStaticMeshActor* SM_XmasCapStandalone_8_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;

    void UpdateAmbientMusic();
    void FindAmbientMusicPlayers();
    void ReceiveBeginPlay();
    void OnJukeboxStreamerModeChanged_Event_0(bool NewValue);
    void ExecuteUbergraph_SLVL_SpaceRig_Xmas(int32 EntryPoint);
};

#endif
