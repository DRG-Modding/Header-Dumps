#ifndef UE4SS_SDK_BP_ExplosiveBarrelsEvent_HPP
#define UE4SS_SDK_BP_ExplosiveBarrelsEvent_HPP

class ABP_ExplosiveBarrelsEvent_C : UExplosiveBarrelEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_MonolithCrystal_Bottom_CollisionMeshes;
    UCapsuleComponent* Capsule1;
    USceneComponent* Beam4;
    UChildActorComponent* Starter8;
    UChildActorComponent* Starter7;
    UChildActorComponent* Starter1;
    UChildActorComponent* Starter2;
    USceneComponent* Beam3;
    USceneComponent* Beam2;
    USceneComponent* Beam1;
    UStaticMeshComponent* Beam05;
    UStaticMeshComponent* Beam01_Detail010;
    UStaticMeshComponent* Beam01_Detail09;
    UStaticMeshComponent* Beam03;
    UStaticMeshComponent* Beam01_Detail08;
    UStaticMeshComponent* Beam01_Detail07;
    UStaticMeshComponent* Beam02;
    UStaticMeshComponent* Beam01_Detail06;
    UStaticMeshComponent* Beam01_Detail05;
    UStaticMeshComponent* Beam01;
    UStaticMeshComponent* Beam01_Detail04;
    UStaticMeshComponent* Beam01_Detail03;
    UStaticMeshComponent* StaticMesh;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    URoomCarverComponent* RoomCarver;
    UOutlineComponent* outline;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* SkeletalMesh;
    UEnemyComponent* enemy;
    UStaticMeshComponent* StaticMesh1;
    UEnemyHealthComponent* EnemyHealth;
    UTerrainPlacementComponent* terrainPlacement;
    FVector PodSpawnLocation;
    UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor InitialColor;
    FLinearColor FinalColor;
    FLinearColor InitialEdgeColor;
    FLinearColor FinalEdgeColor;
    TArray<FName> BoneNames;
    float InitialEmissive;
    float MaxSpawnRadius;
    float MaxRadiusSolo;
    float MaxPathLengthSolo;
    float MaxPathLegth;

    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue_1);
    void OnEventTriggered();
    void OnEventFinished(bool eventSuccess);
    void ReceiveBeginPlay();
    void SpawnEnemies();
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void EndExplosion();
    void ExecuteUbergraph_BP_ExplosiveBarrelsEvent(int32 EntryPoint, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_eventSuccess, bool CallFunc_IsEventActive_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_ComponentBoundEvent_Amount, float CallFunc_GetMaxHealth_ReturnValue, USimpleBossFight* CallFunc_SpawnObject_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FBossFight K2Node_MakeStruct_BossFight, float K2Node_ComponentBoundEvent_health, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_GetMaxHealth_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, FName CallFunc_Array_Get_Item, FVector CallFunc_GetSocketLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_4, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_5, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable_1, FVector CallFunc_GetSocketLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_6, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, bool Temp_bool_IsClosed_Variable, float K2Node_Select_Default_1, FTransform CallFunc_DebreePositionPoint_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, UBP_BarrelDispenserBeacon_C* CallFunc_FinishSpawningActor_ReturnValue, ARessuplyPod* CallFunc_SpawnEventPod_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Variable_2, FVector CallFunc_GetSocketLocation_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_7, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, InterfaceProperty CallFunc_RegisterBossFight_BossFight_CastInput);
}

#endif
