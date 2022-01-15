#ifndef UE4SS_SDK_BP_SpectatorBase_HPP
#define UE4SS_SDK_BP_SpectatorBase_HPP

class ABP_SpectatorBase_C : USpectatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Menu Music;
    UAudioComponent* Menu_StaticRadio;

    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpectatorBase(int32 EntryPoint, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, AController* CallFunc_GetController_ReturnValue, UPlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1);
}

#endif
