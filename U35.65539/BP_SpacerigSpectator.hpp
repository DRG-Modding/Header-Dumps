#ifndef UE4SS_SDK_BP_SpacerigSpectator_HPP
#define UE4SS_SDK_BP_SpacerigSpectator_HPP

class ABP_SpacerigSpectator_C : USpectatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpacerigSpectator(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
