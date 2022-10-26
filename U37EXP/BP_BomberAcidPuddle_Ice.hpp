#ifndef UE4SS_SDK_BP_BomberAcidPuddle_Ice_HPP
#define UE4SS_SDK_BP_BomberAcidPuddle_Ice_HPP

class ABP_BomberAcidPuddle_Ice_C : public AAdicPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BomberAcidPuddle_Ice(int32 EntryPoint);
};

#endif
