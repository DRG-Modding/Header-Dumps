#ifndef UE4SS_SDK_BP_Mainfacility_ShieldEmitter_ForceFieldProjector_HPP
#define UE4SS_SDK_BP_Mainfacility_ShieldEmitter_ForceFieldProjector_HPP

class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UChildActorComponent* RHologram;
    UChildActorComponent* LHologram;
    UStaticMeshComponent* RShield;
    UStaticMeshComponent* LShield;
    UArrowComponent* LLaunchDirection;
    UArrowComponent* RLaunchDirection;
    UStaticMeshComponent* LBattery;
    UStaticMeshComponent* RBattery;
    USingleUsableComponent* LUsable;
    USingleUsableComponent* RUsable;
    USphereComponent* LUseCollision;
    USphereComponent* RUseCollision;
    USkeletalMeshComponent* Body;
    USceneComponent* DefaultSceneRoot;
    bool Open;
    bool LUsed;
    bool RUsed;
    int32 Uses;
    float LaunchAnimTIme;
    FBP_Mainfacility_ShieldEmitter_ForceFieldProjector_CShieldDeactivated ShieldDeactivated;
    void ShieldDeactivated();
    float LaunchPower;
    UParticleSystemComponent* LSmokeParticles;
    UParticleSystemComponent* RSmokeParticles;
    UMaterialInstanceDynamic* LightMaterial;

    void OnRep_Open(float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_FacilityShieldEmitter_C* K2Node_DynamicCast_AsABP_Facility_Shield_Emitter, bool K2Node_DynamicCast_bSuccess);
    void Expose(bool CallFunc_HasAuthority_ReturnValue);
    void GetConnectorPoints(FTransform& ConnectorL, FTransform& ConnectorR, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1);
    void LaunchBattery(UBP_ShieldBattery_C* Battery, USceneComponent* Direction, float force, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void OnRep_RUsed();
    void OnRep_LUsed();
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__RUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__LUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void LUse_All();
    void RUsed_All();
    void Launch plates();
    void Cheat_Deactivate();
    void BndEvt__RUsable_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateRHologram();
    void BndEvt__LUsable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateLHologram();
    void ExecuteUbergraph_BP_Mainfacility_ShieldEmitter_ForceFieldProjector(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, int32 CallFunc_Add_IntInt_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, UBP_ShieldBattery_C* CallFunc_FinishSpawningActor_ReturnValue, UBP_ShieldBattery_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, UObjective* CallFunc_GetPrimaryObjective_ReturnValue_2, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective_1, bool K2Node_DynamicCast_bSuccess_1, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_ComponentBoundEvent_canUse_1, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UABP_FacilityShieldEmitter_C* K2Node_DynamicCast_AsABP_Facility_Shield_Emitter, bool K2Node_DynamicCast_bSuccess_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, UABP_FacilityShieldEmitter_C* K2Node_DynamicCast_AsABP_Facility_Shield_Emitter_1, bool K2Node_DynamicCast_bSuccess_4);
    void ShieldDeactivated__DelegateSignature();
}

#endif
