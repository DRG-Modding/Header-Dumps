#ifndef UE4SS_SDK_PRJ_PlasmaCarbineShot_HPP
#define UE4SS_SDK_PRJ_PlasmaCarbineShot_HPP

class APRJ_PlasmaCarbineShot_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_ElectricPlasma;
    class UNiagaraComponent* Niagara_Shield;
    class UNiagaraComponent* Niagara_HOT;
    class UNiagaraComponent* Niagara;
    class UParticleSystemComponent* P_ShieldPlasma;
    class UProjectileExplosion* ProjectileExplosionHot;
    class UProjectileExplosion* ProjectileExplosionElectric;
    class UProjectileExplosion* ProjectileExplosionSplash;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    int32 MaxBounces;
    bool IsElectric;
    bool IsBouncy;
    bool IsHot;

    void HandleImpact(FHitResult HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
    void BounceFeedback(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void DoEffects(FVector Location, FVector Normal);
    void DoOnSpawn();
    void OnInitialized();
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void CustomEvent(const class UItemUpgrade* Event);
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_PlasmaCarbineShot(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector K2Node_CustomEvent_Location, FVector K2Node_CustomEvent_Normal, class UProjectileUpgradeElement* K2Node_Event_element, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AWPN_PlasmaCarbine_C* K2Node_DynamicCast_AsWPN_Plasma_Carbine, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const class UItemUpgrade* K2Node_Event_Event, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const FHitResult K2Node_ComponentBoundEvent_ImpactResult, const FVector K2Node_ComponentBoundEvent_ImpactVelocity, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<class AActor> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, FVector CallFunc_BreakHitResult_Location_2, FVector CallFunc_BreakHitResult_ImpactPoint_2, FVector CallFunc_BreakHitResult_Normal_2, FVector CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, FVector CallFunc_BreakHitResult_TraceStart_2, FVector CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material_1, bool K2Node_DynamicCast_bSuccess_3, class UFXSystemComponent* CallFunc_SpawnImpactParticles_ReturnValue);
};

#endif
