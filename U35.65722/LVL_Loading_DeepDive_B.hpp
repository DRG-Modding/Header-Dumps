#ifndef UE4SS_SDK_LVL_Loading_DeepDive_B_HPP
#define UE4SS_SDK_LVL_Loading_DeepDive_B_HPP

class ALVL_Loading_DeepDive_B_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelSequencePlayer* Player;

    void StopPlayer(bool CallFunc_IsValid_ReturnValue);
    void StartPlayer(class ULevelSequence* LevelSequence, FString CallFunc_GetPathName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue);
    void ReceiveBeginPlay();
    void PlayerStart(class ULevelSequence* LoaderLevelSequence);
    void PlayerStop();
    void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32 EntryPoint, FExecuteUbergraph_LVL_Loading_DeepDive_BK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_LVL_Loading_DeepDive_BK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class ULevelSequence* K2Node_CustomEvent_LoaderLevelSequence, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue);
};

#endif
