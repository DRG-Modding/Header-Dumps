#ifndef UE4SS_SDK_BP_Phys_InflatableSausage_HPP
#define UE4SS_SDK_BP_Phys_InflatableSausage_HPP

class ABP_Phys_InflatableSausage_C : public ABP_Kickable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* PopParticles;
    class UStaticMeshComponent* UsableCollision;
    class UActorComponent* LastBounce;
    int32 NumberOfImpacts;
    bool IsBroken;
    int32 RequiredImpactsToPop;

    void OnRep_IsBroken();
    void BndEvt__BP_Phys_InflatableSausage_Kickable Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Phys_InflatableSausage(int32 EntryPoint);
};

#endif
