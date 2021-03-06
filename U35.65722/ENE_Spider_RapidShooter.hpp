#ifndef UE4SS_SDK_ENE_Spider_RapidShooter_HPP
#define UE4SS_SDK_ENE_Spider_RapidShooter_HPP

class AENE_Spider_RapidShooter_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UProjectileAttackComponent* ProjectileAttack;
    class UCapsuleComponent* Capsule;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UPointLightComponent* PointLight;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class AActor* Target;

    void OnRep_Target(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UShootingSpiderAnimInstance* K2Node_DynamicCast_AsShooting_Spider_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void OnRagdoll();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
    void OnDeathBase();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Spider_RapidShooter(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_2);
};

#endif
