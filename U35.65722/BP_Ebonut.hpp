#ifndef UE4SS_SDK_BP_Ebonut_HPP
#define UE4SS_SDK_BP_Ebonut_HPP

class ABP_Ebonut_C : public ABP_Collectible_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderWalkable;
    class UPointLightComponent* PointLight;
    class USceneComponent* PickupParticleSpawnPoint;
    class UAudioComponent* OpenHit;
    class UAudioComponent* 2ndHit;
    class UAudioComponent* 1stHit;
    class UStaticMeshComponent* Shell3;
    class UStaticMeshComponent* Shell2;
    class UStaticMeshComponent* Shell1;
    class UStaticMeshComponent* CoreMesh;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* BaseMesh;
    float ScaleDown_NewTrack_0_F8D011474F43755B827C2BB8FCF9590F;
    TEnumAsByte<ETimelineDirection::Type> ScaleDown__Direction_F8D011474F43755B827C2BB8FCF9590F;
    class UTimelineComponent* ScaleDown;
    float FirstThreshold;
    float SecondThreshold;
    class UStaticMeshComponent* NewVar_0;
    TEnumAsByte<EEbonutState::Type> State;
    bool CunksAreLoose;

    void ShowOpen2(bool CallFunc_HasAuthority_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, FVector CallFunc_InverseTransformDirection_ReturnValue, FVector CallFunc_InverseTransformDirection_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FVector CallFunc_InverseTransformDirection_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2);
    void SetState(TEnumAsByte<EEbonutState::Type> State, bool CallFunc_HasAuthority_ReturnValue);
    void OnRep_State(bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void ScaleDown__FinishedFunc();
    void ScaleDown__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
    void RemoveChunks();
    void PickedUp();
    void FirstHit();
    void SecondHit();
    void CrackOpen();
    void PlayDeath();
    void ExecuteUbergraph_BP_Ebonut(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Amount, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, FVector CallFunc_ComponentToWorldLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, float CallFunc_HealFromDeath_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1);
};

#endif
