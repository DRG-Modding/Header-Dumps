#ifndef UE4SS_SDK_ENE_ShootingPlant_HPP
#define UE4SS_SDK_ENE_ShootingPlant_HPP

class AENE_ShootingPlant_C : public AShootingPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* ProjectileAttack;
    class UStaticMeshComponent* WEakspot2;
    class UStaticMeshComponent* Weakspot;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPawnSensingComponent* PawnSensing;
    class UOutlineComponent* outline;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    class USkeletalMeshComponent* GetMesh();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnRep_Target();
    void ExecuteUbergraph_ENE_ShootingPlant(int32 EntryPoint, class UAnimSequenceBase* Temp_object_Variable, class UAnimSequenceBase* Temp_object_Variable_1, class UAnimSequenceBase* Temp_object_Variable_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Variable, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_health, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Pawn, bool Temp_bool_IsClosed_Variable_1, class AController* CallFunc_GetController_ReturnValue, class AAIC_ShootingPlant_C* K2Node_DynamicCast_AsAIC_Shooting_Plant, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_source, class UAnimSequenceBase* Temp_object_Variable_3, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UAnimSequenceBase* K2Node_Select_Default, float CallFunc_PlaySlotAnimation_ReturnValue, class UCommunityGoal* CallFunc_GetGoal_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UShootingPlantAnimInstance* K2Node_DynamicCast_AsShooting_Plant_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
