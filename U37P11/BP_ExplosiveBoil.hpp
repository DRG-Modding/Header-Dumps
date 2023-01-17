#ifndef UE4SS_SDK_BP_ExplosiveBoil_HPP
#define UE4SS_SDK_BP_ExplosiveBoil_HPP

class ABP_ExplosiveBoil_C : public ABoil
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyHealthComponent* EnemyHealth;
    class UNiagaraComponent* NS_Effect;
    class UDamageComponent* WeakpointDamageBonus;
    class UStaticMeshComponent* Mesh_Boil;
    class USceneComponent* Scale;
    class UDamageComponent* Damage;
    class USceneComponent* DefaultSceneRoot;
    float Grow_Grow_4C7E7BAA4AB0276D4B443784735EAE30;
    TEnumAsByte<ETimelineDirection::Type> Grow__Direction_4C7E7BAA4AB0276D4B443784735EAE30;
    class UTimelineComponent* Grow;
    float WeakpointMulitplier;
    float Damage_0;

    void CopyGlobalWeakpointModSettings(class UObject* Object);
    void Grow__FinishedFunc();
    void Grow__UpdateFunc();
    void ReceiveBeginPlay();
    void OnDestroyed_Event(class AActor* DestroyedActor);
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ExecuteUbergraph_BP_ExplosiveBoil(int32 EntryPoint);
};

#endif
