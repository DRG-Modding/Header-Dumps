#ifndef UE4SS_SDK_BP_OxygenRich_HPP
#define UE4SS_SDK_BP_OxygenRich_HPP

class UBP_OxygenRich_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void PlayerSpawned(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_BP_OxygenRich(int32 EntryPoint, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, FExecuteUbergraph_BP_OxygenRichK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AddModifier_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
