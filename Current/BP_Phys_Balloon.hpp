#ifndef UE4SS_SDK_BP_Phys_Balloon_HPP
#define UE4SS_SDK_BP_Phys_Balloon_HPP

class ABP_Phys_Balloon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UCapsuleComponent* UseCapsule;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    int32 NumberOfImpacts;
    int32 MaterialIndex;
    bool Popped;
    TArray<class UMaterialInstance*> Mats_Wrapper_Anniversary;

    void OnRep_Popped();
    void OnRep_MaterialIndex();
    void OnRep_KickSoundLocation();
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void Play_Kick(class APlayerCharacter* Kicker);
    void ExecuteUbergraph_BP_Phys_Balloon(int32 EntryPoint);
};

#endif
