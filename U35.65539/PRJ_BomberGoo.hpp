#ifndef UE4SS_SDK_PRJ_BomberGoo_HPP
#define UE4SS_SDK_PRJ_BomberGoo_HPP

class APRJ_BomberGoo_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileExplosion* ProjectileExplosion;
    UDamageComponent* Damage;
    UFirstPersonStaticMeshComponent* ProjectileMesh;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_BomberGoo(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
