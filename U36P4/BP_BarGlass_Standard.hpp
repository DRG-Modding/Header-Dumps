#ifndef UE4SS_SDK_BP_BarGlass_Standard_HPP
#define UE4SS_SDK_BP_BarGlass_Standard_HPP

class ABP_BarGlass_Standard_C : public ABP_BarGlass_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UAudioComponent* SparkleDrink;
    class USkeletalMeshComponent* SkeletalMesh;

    void Fill();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
    void ExecuteUbergraph_BP_BarGlass_Standard(int32 EntryPoint);
};

#endif
