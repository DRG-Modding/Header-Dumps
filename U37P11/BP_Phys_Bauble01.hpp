#ifndef UE4SS_SDK_BP_Phys_Bauble01_HPP
#define UE4SS_SDK_BP_Phys_Bauble01_HPP

class ABP_Phys_Bauble01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
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
    int32 RandomSeed;
    FRandomStream RandomStream;
    class UMaterialInterface* UsedMaterial;
    bool IsBroken;

    void OnRep_IsBroken();
    void OnRep_NumberOfImpacts();
    void OnRep_RandomSeed();
    void OnRep_KickSoundLocation();
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void Play_Kick(class APlayerCharacter* Kicker);
    void ExecuteUbergraph_BP_Phys_Bauble01(int32 EntryPoint);
};

#endif
