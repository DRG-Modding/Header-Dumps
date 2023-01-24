#ifndef UE4SS_SDK_PRJ_Crossbow_FireProjectile_HPP
#define UE4SS_SDK_PRJ_Crossbow_FireProjectile_HPP

class APRJ_Crossbow_FireProjectile_C : public APRJ_Crossbow_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* FlammableCollision;

    void BndEvt__PRJ_Crossbow_FireProjectile_FlammableCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_Crossbow_FireProjectile(int32 EntryPoint);
};

#endif
