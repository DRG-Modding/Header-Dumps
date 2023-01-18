#ifndef UE4SS_SDK_BP_HeavyParticleCannon_StickyFlame_HPP
#define UE4SS_SDK_BP_HeavyParticleCannon_StickyFlame_HPP

class ABP_HeavyParticleCannon_StickyFlame_C : public AStickyFlame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NG_Magma;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USphereComponent* Sphere;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HeavyParticleCannon_StickyFlame(int32 EntryPoint);
};

#endif
