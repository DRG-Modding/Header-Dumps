#ifndef UE4SS_SDK_BP_AnimatedArrow_HPP
#define UE4SS_SDK_BP_AnimatedArrow_HPP

class ABP_AnimatedArrow_C : public AActor
{
    class UAudioComponent* CrossBowProjectileVariant_Cue;
    class UFirstPersonNiagaraComponent* CryoEffectParticleFP;
    class UFirstPersonNiagaraComponent* ElectricEffectParticleFP;
    class UNiagaraComponent* FireEffectParticleTP;
    class UNiagaraComponent* ElectricEffectParticleTP;
    class UNiagaraComponent* CryoEffectParticleTP;
    class UFirstPersonNiagaraComponent* FireEffectParticleFP;
    class UStaticMeshComponent* TPMesh;
    class UFirstPersonStaticMeshComponent* FPMesh;
    class USceneComponent* Scene;

};

#endif
