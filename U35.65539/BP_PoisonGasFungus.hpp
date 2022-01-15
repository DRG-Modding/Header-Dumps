#ifndef UE4SS_SDK_BP_PoisonGasFungus_HPP
#define UE4SS_SDK_BP_PoisonGasFungus_HPP

class ABP_PoisonGasFungus_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USphereComponent* collider;
    USkeletalMeshComponent* AnimatedBody;
    UPathfinderCollisionComponent* PathfinderCollision;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    UBillboardComponent* GasReleasePoint;
    USphereComponent* SporesTrigger;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* DefaultSceneRoot;
    TSubclassOf<AActor> GasCloudClass;
    bool CanTrigger;
    float ResetTime;

    void SetCanAnimate(bool CanAnimate, bool CallFunc_Not_PreBool_ReturnValue);
    void BndEvt__SporesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_PoisonGasFungus(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, AActor* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue);
}

#endif
