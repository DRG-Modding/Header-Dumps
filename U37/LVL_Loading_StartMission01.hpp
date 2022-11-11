#ifndef UE4SS_SDK_LVL_Loading_StartMission01_HPP
#define UE4SS_SDK_LVL_Loading_StartMission01_HPP

class ALVL_Loading_StartMission01_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelSequencePlayer* Player;
    class AEmitter* P_E3trailer_DropPod_Exhaust_4_ExecuteUbergraph_LVL_Loading_StartMission01_RefProperty;

    void OnFinshed();
    void StopPlayer();
    void StartPlayer(class ULevelSequence* LevelSequence);
    void ReceiveBeginPlay();
    void PlayerStart(class ULevelSequence* LoaderLevelSequence);
    void PlayerStop();
    void ExecuteUbergraph_LVL_Loading_StartMission01(int32 EntryPoint);
};

#endif
