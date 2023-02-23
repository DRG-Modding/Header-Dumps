#ifndef UE4SS_SDK_BP_Phys_GreatEggHunt_PaintedEgg_HPP
#define UE4SS_SDK_BP_Phys_GreatEggHunt_PaintedEgg_HPP

class ABP_Phys_GreatEggHunt_PaintedEgg_C : public AActor
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
    int32 RandomPresentSound;
    TArray<class UTexture*> Textures_Eggs;
    int32 NumberOfImpacts;
    bool IsBroken;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    class UMaterialInterface* UsedMaterial;
    class USoundCue* UsedSound;

    void OnRep_UsedMaterial();
    void OnRep_RandomSeed();
    void OnRep_NumberOfImpacts();
    void OnRep_IsBroken();
    void OnRep_KickSoundLocation();
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void Play_Kick(class APlayerCharacter* Kicker);
    void ExecuteUbergraph_BP_Phys_GreatEggHunt_PaintedEgg(int32 EntryPoint);
};

#endif
