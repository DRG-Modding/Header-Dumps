#ifndef UE4SS_SDK_BP_SpectatorBase_HPP
#define UE4SS_SDK_BP_SpectatorBase_HPP

class ABP_SpectatorBase_C : public ASpectatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Menu Music;
    class UAudioComponent* Menu_StaticRadio;

    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpectatorBase(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1);
};

#endif
