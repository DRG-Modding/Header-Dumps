#ifndef UE4SS_SDK_PRJ_BaseGooProjectile_HPP
#define UE4SS_SDK_PRJ_BaseGooProjectile_HPP

class APRJ_BaseGooProjectile_C : public AGooGunProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GooCannonProjectileIdle_Cue;
    class UNiagaraComponent* Niagara;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    int32 MaxBounces;
    TSubclassOf<class AGooGunPuddle> Puddle;
    FVector PuddleSize;
    bool HasGravityOverclock;
    bool HasBuckShotOverclock;
    class AGooGunPuddle* SpawnedPuddle;
    bool ExplosivePuddles;
    class USoundBase* CreatureImpactSound;

    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void DoEffects(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void DestroyProjectile();
    void ExecuteUbergraph_PRJ_BaseGooProjectile(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector_NetQuantize K2Node_CustomEvent_Location, FVector_NetQuantizeNormal K2Node_CustomEvent_Normal, class UProjectileUpgradeElement* K2Node_Event_element, bool CallFunc_ElementOf_ReturnValue, bool CallFunc_ElementOf_ReturnValue_1, bool CallFunc_ElementOf_ReturnValue_2, bool CallFunc_ElementOf_ReturnValue_3, bool CallFunc_ElementOf_ReturnValue_4, bool CallFunc_ElementOf_ReturnValue_5, bool CallFunc_ElementOf_ReturnValue_6, int32 CallFunc_GetBoneIndex_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess_2, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AGooGunPuddle* CallFunc_SpawnPuddle_ReturnValue, class ABP_GooCannon_GooPuddle_C* K2Node_DynamicCast_AsBP_Goo_Cannon_Goo_Puddle, bool K2Node_DynamicCast_bSuccess_3, const FHitResult K2Node_ComponentBoundEvent_ImpactResult, const FVector K2Node_ComponentBoundEvent_ImpactVelocity, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_HasImpactAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
