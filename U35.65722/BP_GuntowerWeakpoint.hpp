#ifndef UE4SS_SDK_BP_GuntowerWeakpoint_HPP
#define UE4SS_SDK_BP_GuntowerWeakpoint_HPP

class ABP_GuntowerWeakpoint_C : public AGuntowerWeakPoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnAfflictionComponent* PawnAffliction;
    class UPointLightComponent* PointLight;
    class UCapsuleComponent* ProjectileCollision';
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UPawnStatsComponent* PawnStats;

    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnExposedChanged(bool isExposed);
    void ExecuteUbergraph_BP_GuntowerWeakpoint(int32 EntryPoint, bool K2Node_Event_isExposed, bool CallFunc_IsAlive_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
};

#endif
