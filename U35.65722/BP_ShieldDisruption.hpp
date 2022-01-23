#ifndef UE4SS_SDK_BP_ShieldDisruption_HPP
#define UE4SS_SDK_BP_ShieldDisruption_HPP

class UBP_ShieldDisruption_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void PlayerSpawned(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_BP_ShieldDisruption(int32 EntryPoint, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, FExecuteUbergraph_BP_ShieldDisruptionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
