#ifndef UE4SS_SDK_BP_Phys_Pumpkin_HPP
#define UE4SS_SDK_BP_Phys_Pumpkin_HPP

class ABP_Phys_Pumpkin_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Halloween_LightBugs_Const;
    class UStaticMeshComponent* Mesh;
    class UCapsuleComponent* UseCapsule;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    FVector_NetQuantize KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;

    void OnRep_KickSoundLocation();
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Phys_Pumpkin(int32 EntryPoint);
};

#endif
