#ifndef UE4SS_SDK_BP_BioTank_Small_HPP
#define UE4SS_SDK_BP_BioTank_Small_HPP

class ABP_BioTank_Small_C : public ADisplayCase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Biotank_Bubbles_Small;
    class USpotLightComponent* SpotLight;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* SM_Plague_Biotank_Stand;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BioTank_Small(int32 EntryPoint);
};

#endif
