#ifndef UE4SS_SDK_BP_CreeperVine_Base_HPP
#define UE4SS_SDK_BP_CreeperVine_Base_HPP

class ABP_CreeperVine_Base_C : ASplinePlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* HurtAudioComponent;
    UParticleSystemComponent* Trail;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* SM_brokenFloor_01;
    UTerrainDetectComponent* TerrainDetect;
    UPathfinderCollisionComponent* PathfinderCollision;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    FTimerHandle CheckPlayersTimer;
    bool IsRetracted;
    float SplineNodeRandomOffset;
    USoundBase* HurtAudio;
    float SpeedRetraction;
    float SpeedExtending;
    float LengthRetracted;
    float LastPlayerHitTime;

    void HandleActorOverlap(AActor* OverlappedActor, AActor* OtherActor, UEscortMule* K2Node_DynamicCast_AsEscort_Mule, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit, UPlayerCharacter* Player, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void PrepareSpline(USplineComponent* InSplineComponent, int32 InSeed, FRandomStream Random, FVector Right, FVector Up, FVector Tangent, FVector Location, int32 Index, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FRandomStream CallFunc_MakeRandomStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Cross_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_GetUpVectorAtSplinePoint_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent);
    void OnRep_IsRetracted(float CallFunc_GetFullPlantLength_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32 InSeed);
    void InitiateChainRetract();
    void PlayHurtAudio(float InDamage);
    void Retract();
    void ReceiveMovementFinished(float InDistanceProgress);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
    void ExecuteUbergraph_BP_CreeperVine_Base(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, USplineComponent* K2Node_Event_InSplineComponent, int32 K2Node_Event_InSeed, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable, const TArray<AActor*>& K2Node_MakeArray_Array_1, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UBP_CreeperVine_Base_C* K2Node_DynamicCast_AsBP_Creeper_Vine_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue, float K2Node_CustomEvent_InDamage, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, float K2Node_Event_InDistanceProgress, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_GetFullPlantLength_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, ActorHitSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ActorBeginOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float K2Node_ComponentBoundEvent_health);
}

#endif
