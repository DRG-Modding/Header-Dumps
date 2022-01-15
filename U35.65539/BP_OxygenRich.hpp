#ifndef UE4SS_SDK_BP_OxygenRich_HPP
#define UE4SS_SDK_BP_OxygenRich_HPP

class UBP_OxygenRich_C : URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void PlayerSpawned(UPlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_BP_OxygenRich(int32 EntryPoint, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, PlayerCharacterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AddModifier_ReturnValue, bool CallFunc_IsServer_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
