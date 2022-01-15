#ifndef UE4SS_SDK_ENE_ShootingPlant_HPP
#define UE4SS_SDK_ENE_ShootingPlant_HPP

class AENE_ShootingPlant_C : UShootingPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileAttackComponent* ProjectileAttack;
    UStaticMeshComponent* WEakspot2;
    UStaticMeshComponent* Weakspot;
    UTerrainPlacementComponent* terrainPlacement;
    UPawnSensingComponent* PawnSensing;
    UOutlineComponent* outline;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;

    USkeletalMeshComponent* GetMesh();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void OnRep_Target();
    void ExecuteUbergraph_ENE_ShootingPlant(int32 EntryPoint, UAnimSequenceBase* Temp_object_Variable, UAnimSequenceBase* Temp_object_Variable_1, UAnimSequenceBase* Temp_object_Variable_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Variable, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_health, int32 CallFunc_RandomIntegerInRange_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, APawn* K2Node_ComponentBoundEvent_Pawn, bool Temp_bool_IsClosed_Variable_1, AController* CallFunc_GetController_ReturnValue, UAIC_ShootingPlant_C* K2Node_DynamicCast_AsAIC_Shooting_Plant, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_source, UAnimSequenceBase* Temp_object_Variable_3, UGameData* CallFunc_GetFSDGameData_ReturnValue, UAnimSequenceBase* K2Node_Select_Default, float CallFunc_PlaySlotAnimation_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UShootingPlantAnimInstance* K2Node_DynamicCast_AsShooting_Plant_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
