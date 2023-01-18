#ifndef UE4SS_SDK_BP_ExplosiveBarrel_HPP
#define UE4SS_SDK_BP_ExplosiveBarrel_HPP

class ABP_ExplosiveBarrel_C : public ACarriableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class UCarriableComponent* Carriable;
    class UInstantUsable* InstantUsable;
    class USimpleHealthComponent* SimpleHealth;
    class UDamageComponent* Damage;
    bool Explode;
    float SpeedThreshold;
    bool Init;
    FVector throwForce;
    bool StartActive;

    void OnRep_Explode();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_ExplosiveBarrel(int32 EntryPoint);
};

#endif
