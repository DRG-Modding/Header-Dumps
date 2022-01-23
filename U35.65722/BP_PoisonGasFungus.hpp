#ifndef UE4SS_SDK_BP_PoisonGasFungus_HPP
#define UE4SS_SDK_BP_PoisonGasFungus_HPP

class ABP_PoisonGasFungus_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* collider;
    class USkeletalMeshComponent* AnimatedBody;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class UBillboardComponent* GasReleasePoint;
    class USphereComponent* SporesTrigger;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class AActor> GasCloudClass;
    bool CanTrigger;
    float ResetTime;

    void SetCanAnimate(bool CanAnimate, bool CallFunc_Not_PreBool_ReturnValue);
    void BndEvt__SporesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_PoisonGasFungus(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue);
};

#endif
