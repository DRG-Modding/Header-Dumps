#ifndef UE4SS_SDK_BP_ExplosiveBoil_HPP
#define UE4SS_SDK_BP_ExplosiveBoil_HPP

class ABP_ExplosiveBoil_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Effect;
    class USceneComponent* NewRoot;
    class UDamageComponent* WeakpointDamageBonus;
    class UStaticMeshComponent* Mesh_Boil;
    class USceneComponent* Scale;
    class UDamageComponent* Damage;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    float Grow_Grow_4C7E7BAA4AB0276D4B443784735EAE30;
    TEnumAsByte<ETimelineDirection::Type> Grow__Direction_4C7E7BAA4AB0276D4B443784735EAE30;
    class UTimelineComponent* Grow;
    float WeakpointMulitplier;

    void Grow__FinishedFunc();
    void Grow__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_ExplosiveBoil_SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnDestroyed_Event(class AActor* DestroyedActor);
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void BndEvt__BP_ExplosiveBoil_SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ExecuteUbergraph_BP_ExplosiveBoil(int32 EntryPoint);
};

#endif
