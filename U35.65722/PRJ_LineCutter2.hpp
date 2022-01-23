#ifndef UE4SS_SDK_PRJ_LineCutter2_HPP
#define UE4SS_SDK_PRJ_LineCutter2_HPP

class APRJ_LineCutter2_C : public ALineCutterProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Plasma_Projectile3;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Right3;
    class USphereComponent* SphereRight3;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Left3;
    class USphereComponent* SphereLeft3;
    class USphereComponent* SphereRight;
    class USphereComponent* SphereLeft;
    class USphereComponent* SphereRight2;
    class USphereComponent* SphereLeft2;
    class UParticleSystemComponent* P_Plasma_Projectile2;
    class UParticleSystemComponent* P_Plasma_Projectile;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Right2;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Left2;
    class UDamageComponent* DamageExplosion;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Left;
    class UStaticMeshComponent* SM_Linecutter_Projectile_A_Right;
    float ProjectileSlowdown_Velocity_3314D5764A0652510BE0E38ABA90D3FC;
    TEnumAsByte<ETimelineDirection::Type> ProjectileSlowdown__Direction_3314D5764A0652510BE0E38ABA90D3FC;
    class UTimelineComponent* ProjectileSlowdown;
    FTimerHandle ExpandLineTimerHandle;
    int32 TimerHandleExecutions;
    float VisualMaxSize;
    FTimerHandle FireTimerHandle;
    FTimerHandle DestructionByTerrainTimerHandle;
    float TerrainCallTime;
    int32 TerrainIndex;
    FTimerHandle ReduceLineTimerHandle;
    TSubclassOf<class AActor> PersistantExplosion;

    void AdjustLineSize(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, FVector CallFunc_MakeVector_ReturnValue_5, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5);
    void UserConstructionScript();
    void ProjectileSlowdown__FinishedFunc();
    void ProjectileSlowdown__UpdateFunc();
    void DisableProjectile();
    void ExpandLine();
    void DoDamage();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StartLineExpansion();
    void CheckTerrainCall();
    void K2_OnReset();
    void LinelifespanDestroy();
    void Explode();
    void LineReducing();
    void ThereCanBeOnlyOne();
    void OnLineDestroyed(const FHitResult& Result);
    void SetExtraBeamVisibility(bool IsVisible);
    void LeaveTrail();
    void StartSpawningTrail();
    void OnInitialized();
    void ExecuteUbergraph_PRJ_LineCutter2(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, TEnumAsByte<EEndPlayReason::Type> K2Node_Event_EndPlayReason, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_3, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_4, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, class UFXSystemComponent* CallFunc_SpawnScaledEmitterAtLocation_ReturnValue, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FExecuteUbergraph_PRJ_LineCutter2K2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_4, const FHitResult K2Node_CustomEvent_result, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_GetUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, FVector CallFunc_K2_GetComponentLocation_ReturnValue_8, bool K2Node_Event_isVisible, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class APawn* CallFunc_GetInstigator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_PlasmaTrail_LineCutter_C* CallFunc_FinishSpawningActor_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_9);
};

#endif
