#ifndef UE4SS_SDK_BP_ShieldDisruption_HPP
#define UE4SS_SDK_BP_ShieldDisruption_HPP

class UBP_ShieldDisruption_C : URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void PlayerSpawned(UPlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_BP_ShieldDisruption(int32 EntryPoint, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, PlayerCharacterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
