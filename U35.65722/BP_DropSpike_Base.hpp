#ifndef UE4SS_SDK_BP_DropSpike_Base_HPP
#define UE4SS_SDK_BP_DropSpike_Base_HPP

class ABP_DropSpike_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* DirectDamage;
    class UDamageComponent* Damage;
    class UExplosionComponent* Explosion;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCapsuleComponent* SpikeCapsule;
    class USceneComponent* SpikeScaler;
    class UStaticMeshComponent* Spike;
    class USphereComponent* DamageTrigger;
    class USphereComponent* GrenadeSphere;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    float LifespanAfterTrigger;
    bool IsTriggered;
    float MinAcceptableDistanceToFloor;
    float MaxAcceptableDistanceToFloor;
    float DistanceToFloor;
    FVector FloorHitLocation;
    bool DoWarning;
    float TriggerDropProbability;
    float MaxTriggerDelay;
    float BaseDamageAmmount;
    bool DoClearNearbyDebris;
    bool IsSilent;
    FVector2D DamageMinMax;
    float ChainReactionProbability;
    float ChainReactionDistance;
    class UTerrainMaterial* SpikeCarveMaterial;
    class UStaticMesh* SpikeCarveMesh;
    class UMaterialInterface* SpikeStaticMeshMaterial;
    class UStaticMesh* BaseCarveMesh;
    FTransform BaseCarveTransform;
    FVector impactLocation;
    class UParticleSystem* WarningParticles;
    class UParticleSystem* ImpactParticles;
    bool ExplodeOnImpact;
    class UParticleSystem* ExplosionParticles;
    class USoundBase* SpikeBreakOffSound;
    class USoundBase* ImpactSound;
    bool CheckForGround;

    void StartChainReaction(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const TArray<class AActor*>& Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloat_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_DropSpike_Base_C* K2Node_DynamicCast_AsBP_Drop_Spike_Base, bool K2Node_DynamicCast_bSuccess);
    void OnRep_DistanceToFloor(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void ClearNearbyDebris(FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetScaledSphereRadius_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void OnRep_DoClearNearbyDebris(FVector CallFunc_K2_GetActorLocation_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue);
    void DoDamageToTarget(class AActor* DamageReceiver, FVector CallFunc_MakeVector_ReturnValue);
    void OnRep_DoWarning(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void OnRep_IsTriggered(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void OnMatchStarted();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature();
    void BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void ChainReaction();
    void Explode();
    void ImpactGround(FVector HitLocation);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DropSpike_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetComponentScale_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, const TArray<class AActor*>& Temp_object_Variable, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FExecuteUbergraph_BP_DropSpike_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_HasMatchStarted_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, const FTransform CallFunc_GetTransform_ReturnValue, FRotator CallFunc_TransformRotation_ReturnValue, FVector CallFunc_TransformLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector K2Node_CustomEvent_HitLocation, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_IsPointInsideTerrain_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanAND_ReturnValue_1);
};

#endif
