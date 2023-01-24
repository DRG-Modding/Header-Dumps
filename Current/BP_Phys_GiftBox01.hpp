#ifndef UE4SS_SDK_BP_Phys_GiftBox01_HPP
#define UE4SS_SDK_BP_Phys_GiftBox01_HPP

class ABP_Phys_GiftBox01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UParticleSystemComponent* ParticleSystem;
    class UCapsuleComponent* UseCapsule;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    TArray<class UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;
    FRandomStream RandomStream;
    int32 RandomSeed;

    void OnRep_RandomSeed();
    void OnRep_KickSoundLocation();
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void Play_Kick(class APlayerCharacter* Kicker);
    void ExecuteUbergraph_BP_Phys_GiftBox01(int32 EntryPoint);
};

#endif
