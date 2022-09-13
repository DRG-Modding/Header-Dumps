#ifndef UE4SS_SDK_BP_Glass_Placeable_LeafLover_HPP
#define UE4SS_SDK_BP_Glass_Placeable_LeafLover_HPP

class ABP_Glass_Placeable_LeafLover_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class UStaticMeshComponent* collider;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    TSubclassOf<class ADrinkableItem> itemClass;
    float ImpulseLength;
    class UStaticMeshComponent* Kickable Mesh;
    class APlayerCharacter* KickedBy;
    float KickStrength;
    class USoundBase* BounceSound;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Play_Kick(class APlayerCharacter* Kicker);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void All_PlayImpactCue();
    void ExecuteUbergraph_BP_Glass_Placeable_LeafLover(int32 EntryPoint);
};

#endif
