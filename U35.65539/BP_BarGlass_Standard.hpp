#ifndef UE4SS_SDK_BP_BarGlass_Standard_HPP
#define UE4SS_SDK_BP_BarGlass_Standard_HPP

class ABP_BarGlass_Standard_C : UBP_BarGlass_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;
    UAudioComponent* SparkleDrink;
    USkeletalMeshComponent* SkeletalMesh;

    void Fill();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset);
    void ExecuteUbergraph_BP_BarGlass_Standard(int32 EntryPoint, UActorComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bReset);
}

#endif
