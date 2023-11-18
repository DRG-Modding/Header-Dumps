#ifndef UE4SS_SDK_PRJ_MicroMissile_PlasmaBurster_HPP
#define UE4SS_SDK_PRJ_MicroMissile_PlasmaBurster_HPP

class APRJ_MicroMissile_PlasmaBurster_C : public APRJ_MicroMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_HandGrenade_I;
    class UDamageComponent* PenetrationDamage-NOTUSED;
    int32 MaxPawnImpacts;
    class USceneComponent* Homing Target;
    float TimeOfLastBounce;
    float LastHitTime;

    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    void OnInitialized();
    void BndEvt__PRJ_MicroMissile_PlasmaBurster_MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void BndEvt__PRJ_MicroMissile_PlasmaBurster_MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void Server_DamageTarget(class AActor* Target, const FVector& Location, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysMat);
    void TryDoDamage(class AActor* Target, const FVector& Location, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysMat);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_PRJ_MicroMissile_PlasmaBurster(int32 EntryPoint);
};

#endif
