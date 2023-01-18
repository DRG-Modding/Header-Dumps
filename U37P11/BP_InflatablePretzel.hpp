#ifndef UE4SS_SDK_BP_InflatablePretzel_HPP
#define UE4SS_SDK_BP_InflatablePretzel_HPP

class ABP_InflatablePretzel_C : public ABP_Kickable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* PopParticles;
    class UStaticMeshComponent* UsableCollision;
    FVector OriginalScale;
    bool IsBroken;
    int32 NumberOfImpacts;
    int32 RequiredImpactsToPop;

    void OnRep_IsBroken();
    void ReceiveBeginPlay();
    void BndEvt__BP_Phys_InflatableSausage_Kickable Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_InflatablePretzel(int32 EntryPoint);
};

#endif
