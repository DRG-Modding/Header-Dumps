#ifndef UE4SS_SDK_LVL_Loading_DeepDive_B_HPP
#define UE4SS_SDK_LVL_Loading_DeepDive_B_HPP

class ALVL_Loading_DeepDive_B_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    ULevelSequencePlayer* Player;

    void StopPlayer(bool CallFunc_IsValid_ReturnValue);
    void StartPlayer(ULevelSequence* LevelSequence, FString CallFunc_GetPathName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue);
    void ReceiveBeginPlay();
    void PlayerStart(ULevelSequence* LoaderLevelSequence);
    void PlayerStop();
    void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32 EntryPoint, OnLoaderStartSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ULevelSequence* K2Node_CustomEvent_LoaderLevelSequence, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue);
}

#endif
