#ifndef UE4SS_SDK_ENE_FacilityTurret_Burst_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Burst_HPP

class AENE_FacilityTurret_Burst_C : UENE_FacilityTurret_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* AoECollision;
    UProjectileAttackComponent* ProjectileAttack1;
    UStaticMeshComponent* Shield;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UWeakpointGlowComponent* FireWeaponGlow;
    float Timeline_0_NewTrack_0_41538838479907ABAF791C91C743C3FD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_41538838479907ABAF791C91C743C3FD;
    UTimelineComponent* Timeline_0;
    bool UpperBarrel;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnEngagedChanged(bool engaged);
    void OnAttack();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnProjectileSpawned();
    void ExecuteUbergraph_ENE_FacilityTurret_Burst(int32 EntryPoint, bool Temp_bool_Variable, FName Temp_name_Variable, FName Temp_name_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool K2Node_Event_engaged, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, bool CallFunc_IsDead_ReturnValue, FName K2Node_Select_Default, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
