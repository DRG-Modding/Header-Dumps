#ifndef UE4SS_SDK_PRJ_GrenadeAxe_HPP
#define UE4SS_SDK_PRJ_GrenadeAxe_HPP

class APRJ_GrenadeAxe_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* SmallShitDamage;
    class USphereComponent* KillSmallShits Sphere;
    class UDamageComponent* BounceDamage;
    class UBoxComponent* Box;
    class UDamageComponent* FullDamage;
    class URotatingMovementComponent* RotatingMovement;
    class UParticleSystemComponent* Trail;
    class UStaticMeshComponent* mesh_front;
    FVector MyStartLocation;
    FVector MyImpactVelocity;
    FVector NewVar_0;
    TArray<class AActor*> AlreadyHitList;
    FVector HitNormal;
    FVector HitLocation;
    class AThrownGrenadeItem* AxeGrenadeItem;
    class AActor* HitActor;
    class UPrimitiveComponent* HitComponent;
    bool CanRetrieve;
    FName HitBone;
    bool CanAttach;
    bool PassThroughTarget;
    bool HitTerrain;
    bool ForceDischarge;
    class UFSDPhysicalMaterial* HitPhysMat;

    void UserConstructionScript();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void Discharge(class AActor* HitActor, class UPrimitiveComponent* HitComponent, const FVector& HitLocation, class UFSDPhysicalMaterial* HitPhysMat);
    void BluntDamage();
    void BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_GrenadeAxe(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_CustomEvent_HitActor, class UPrimitiveComponent* K2Node_CustomEvent_HitComponent, const FVector K2Node_CustomEvent_HitLocation, class UFSDPhysicalMaterial* K2Node_CustomEvent_HitPhysMat, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_2, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult_1, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult_2, bool Temp_bool_Variable_2, FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_CanTakeDamageFrom_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue_1, class UDeepProceduralMeshComponent* K2Node_DynamicCast_AsDeep_Procedural_Mesh_Component, bool K2Node_DynamicCast_bSuccess_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Grenade_Axe_Stuck_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2, bool K2Node_DynamicCast_bSuccess_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

#endif
