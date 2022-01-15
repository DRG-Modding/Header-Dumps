#ifndef UE4SS_SDK_ENE_ShootingPlant_Small_HPP
#define UE4SS_SDK_ENE_ShootingPlant_Small_HPP

class AENE_ShootingPlant_Small_C : UHydraWeedShooter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileAttackComponent* ProjectileAttack;
    UPathfinderCollisionComponent* PathfinderCollision;
    UPointLightComponent* PointLight;
    UTerrainPlacementComponent* terrainPlacement;
    UPawnSensingComponent* PawnSensing;
    UOutlineComponent* outline;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    float Growth_Size_F8D1ED0F47A0109E69BA949410BBFBDF;
    TEnumAsByte<ETimelineDirection::Type> Growth__Direction_F8D1ED0F47A0109E69BA949410BBFBDF;
    UTimelineComponent* Growth;
    float Timeline_0_NewTrack_0_B7C1F10347624A87CE535C859B0970CF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B7C1F10347624A87CE535C859B0970CF;
    UTimelineComponent* Timeline_0;
    int32 NumSpawned;
    int32 MaxSpawns;
    float MaxSpawnDistance;
    bool IsPupating;
    float PupationDuration;
    TEnumAsByte<Spider_DeathType::Type> DeathType;
    float MaxLightIntensity;
    int32 NumHitsToWakeUp;
    float AggressiveSightRadius;
    float PassiveSightRadius;
    bool IsPassive;

    bool GetIsTargetable();
    UMeshComponent* Receive_GetMeshComponent();
    void OnRep_DeathType(bool K2Node_SwitchEnum_CmpSuccess);
    USkeletalMeshComponent* GetMesh();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Growth__FinishedFunc();
    void Growth__UpdateFunc();
    void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void ReceiveBeginPlay();
    void WakeUp();
    void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void NormalDeath();
    void WeakpointDeath();
    void OnRep_Target();
    void ToggleAggressionLevel(bool BePassive);
    void ExecuteUbergraph_ENE_ShootingPlant_Small(int32 EntryPoint, UENE_HydraWeed_Core_C* K2Node_DynamicCast_AsENE_Hydra_Weed_Core, bool K2Node_DynamicCast_bSuccess, UAnimSequenceBase* Temp_object_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_ComponentBoundEvent_health, int32 CallFunc_RandomIntegerInRange_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool Temp_bool_IsClosed_Variable, APawn* K2Node_ComponentBoundEvent_Pawn, AController* CallFunc_GetController_ReturnValue, UAIC_HydraWeed_Shooter_C* K2Node_DynamicCast_AsAIC_Hydra_Weed_Shooter, bool K2Node_DynamicCast_bSuccess_1, UAnimSequenceBase* Temp_object_Variable_1, AActor* K2Node_Event_source, int32 Temp_int_Variable, UAnimSequenceBase* K2Node_Select_Default, float CallFunc_PlaySlotAnimation_ReturnValue, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags, bool CallFunc_IsWeakPoint_ReturnValue, uint8 K2Node_Select_Default_1, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, int32 Temp_int_Variable_1, UShootingPlantAnimInstance* K2Node_DynamicCast_AsShooting_Plant_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UENE_HydraWeed_Core_C* K2Node_DynamicCast_AsENE_Hydra_Weed_Core_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_RandomFloatInRange_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UABP_HydraWeed_Shooter_C* K2Node_DynamicCast_AsABP_Hydra_Weed_Shooter, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_CustomEvent_BePassive);
}

#endif
