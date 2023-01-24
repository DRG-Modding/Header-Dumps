#ifndef UE4SS_SDK_Bar_Glass_Physics_HPP
#define UE4SS_SDK_Bar_Glass_Physics_HPP

class ABar_Glass_Physics_C : public ABar_Glass_Physics_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Useable;
    class UInstantUsable* InstantUsable;
    class UGravityChangedComponent* GravityChanged;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* GlassMesh;
    class UStaticMeshComponent* collider;
    bool Thrown;
    TSubclassOf<class ADrinkableItem> itemClass;
    class APlayerCharacter* CurrentUser;

    void OnRep_Drinkable();
    void OnRep_Thrown();
    void UserConstructionScript();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void PlayKickSound();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Throw(FVector fromLocation, FRotator NewRotation, class AActor* Thrower);
    void ExecuteUbergraph_Bar_Glass_Physics(int32 EntryPoint);
};

#endif
