#ifndef UE4SS_SDK_BP_CactusShooterPlant_HPP
#define UE4SS_SDK_BP_CactusShooterPlant_HPP

class ABP_CactusShooterPlant_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision;
    UTerrainDetectComponent* TerrainDetect;
    UBoxComponent* ShootSpinesTrigger;
    UCapsuleComponent* CapsuleCollision;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    bool CanTrigger;
    float ResetTime;
    FBP_CactusShooterPlant_COnChangeState OnChangeState;
    void OnChangeState(bool IsIdle);
    FRotator SpikeDirection;
    FRandomStream RandomSeedStream;
    FVector SpikeOrigin;
    float SpikeOriginHeight;
    int32 NumSpikes;
    float SpikeDistributionAngle;
    FVector2D SpikeOriginHeightMinMax;
    bool AnyPlayerNearby;
    float MinPlayerDistance;

    void ReceiveBeginPlay();
    void BndEvt__ShootSpinesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ShootTheSpikes();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void PlayerNearby(UPlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_CactusShooterPlant(int32 EntryPoint, bool Temp_bool_Variable, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 K2Node_Select_Default, uint8 Temp_byte_Variable_3, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_VSizeSquared_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue, uint8 K2Node_Select_Default_1, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue);
    void OnChangeState__DelegateSignature(bool IsIdle);
}

#endif
