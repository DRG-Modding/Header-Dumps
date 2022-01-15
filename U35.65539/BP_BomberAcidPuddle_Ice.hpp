#ifndef UE4SS_SDK_BP_BomberAcidPuddle_Ice_HPP
#define UE4SS_SDK_BP_BomberAcidPuddle_Ice_HPP

class ABP_BomberAcidPuddle_Ice_C : AAdicPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BomberAcidPuddle_Ice(int32 EntryPoint);
}

#endif
