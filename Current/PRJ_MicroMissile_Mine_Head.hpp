#ifndef UE4SS_SDK_PRJ_MicroMissile_Mine_Head_HPP
#define UE4SS_SDK_PRJ_MicroMissile_Mine_Head_HPP

class APRJ_MicroMissile_Mine_Head_C : public APRJ_MicroMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* HitCollider;
    class UEnemyHealthComponent* HealthComponent;
    class UStaticMeshComponent* TriggerAreaDisplay;
    class USphereComponent* Trigger_Sphere;
    float Timeline_1_Scale_6C1068EA404E3A854E26539704AD5A69;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_6C1068EA404E3A854E26539704AD5A69;
    class UTimelineComponent* Timeline_1;
    bool Triggered;
    FHitResult LastHitResult;
    float LifeTime;
    FGameplayTagContainer EnemyTag;
    float MineExplosionRadiusMultiplier;
    float MineExplosionDamageMultiplier;

    void OnRep_Triggered();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnInitialized();
    void DoTriggerAreaDisplay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void TriggerExplosion();
    void BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_MicroMissile_Mine_Head(int32 EntryPoint);
};

#endif
