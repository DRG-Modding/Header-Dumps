#ifndef UE4SS_SDK_LVL_CharacterSelection_HPP
#define UE4SS_SDK_LVL_CharacterSelection_HPP

class ALVL_CharacterSelection_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelSequencePlayer* Player;
    class ACharacterSelectionSwitcher_C* switcher;
    TArray<FCharacterViewInfo> CharViewerList;
    class ACharacterSelectionSwitcher_C* CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty;
    class ACameraActor* CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty;

    void PlaySpecificSequence(class ULevelSequence* LevelSequence);
    void StopPlayer();
    void StartPlayer(ECharselectionCameraLocation CamSetting);
    void StopPlay();
    void StartPlay(ECharselectionCameraLocation selectionLocation);
    void StartLevelSeq(class ULevelSequence* CharacterLevelSequence);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_LVL_CharacterSelection(int32 EntryPoint);
};

#endif
