#ifndef UE4SS_SDK_LVL_Loading_StartMission01_HPP
#define UE4SS_SDK_LVL_Loading_StartMission01_HPP

class ALVL_Loading_StartMission01_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    ULevelSequencePlayer* Player;
    AEmitter* P_E3trailer_DropPod_Exhaust_4_ExecuteUbergraph_LVL_Loading_StartMission01_RefProperty;

    void OnFinshed(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void StopPlayer(bool CallFunc_IsValid_ReturnValue);
    void StartPlayer(ULevelSequence* LevelSequence, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FString CallFunc_GetPathName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FMovieSceneSequencePlaybackSettings K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue);
    void ReceiveBeginPlay();
    void PlayerStart(ULevelSequence* LoaderLevelSequence);
    void PlayerStop();
    void ExecuteUbergraph_LVL_Loading_StartMission01(int32 EntryPoint, OnLoaderStartSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ULevelSequence* K2Node_CustomEvent_LoaderLevelSequence, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_IsWorldTickEnabled_ReturnValue, bool CallFunc_IsWorldTickEnabled_ReturnValue_1);
}

#endif
