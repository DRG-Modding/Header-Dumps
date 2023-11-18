#ifndef UE4SS_SDK_SLVL_SpaceRig_Beach_Party_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Beach_Party_HPP

class ASLVL_SpaceRig_Beach_Party_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AStaticMeshActor* SM_MiniUmbrella_25_ExecuteUbergraph_SLVL_SpaceRig_Beach_Party_RefProperty;

    void UpdateAmbientMusic();
    void FindAmbientMusicPlayers();
    void ReceiveBeginPlay();
    void OnJukeboxStreamerModeChanged_Event_0(bool NewValue);
    void CrankFun();
    void ExecuteUbergraph_SLVL_SpaceRig_Beach_Party(int32 EntryPoint);
};

#endif
