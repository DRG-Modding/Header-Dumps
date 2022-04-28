#ifndef UE4SS_SDK_LVL_Loading_DeepDive_B_HPP
#define UE4SS_SDK_LVL_Loading_DeepDive_B_HPP

class ALVL_Loading_DeepDive_B_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelSequencePlayer* Player;
    class ABP_DepthCount_C* BP_HUD_DepthCount_EdGraph_1_RefProperty;

    void StopPlayer();
    void Start Player(class ULevelSequence* LevelSequence);
    void ReceiveBeginPlay();
    void PlayerStart(class ULevelSequence* LoaderLevelSequence);
    void PlayerStop();
    void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32 EntryPoint);
};

#endif
