#ifndef UE4SS_SDK_BP_ExplosiveBarrel_HPP
#define UE4SS_SDK_BP_ExplosiveBarrel_HPP

class ABP_ExplosiveBarrel_C : UCarriableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UBoxComponent* Box;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh;
    UCarriableComponent* Carriable;
    UInstantUsable* InstantUsable;
    USimpleHealthComponent* SimpleHealth;
    UDamageComponent* Damage;
    bool Explode;
    float SpeedThreshold;
    bool Init;
    FVector throwForce;
    bool StartActive;

    void OnRep_Explode(FVector CallFunc_K2_GetComponentLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_ExplosiveBarrel(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_Greater_FloatFloat_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector K2Node_Event_force, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_PickupItem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5);
}

#endif
