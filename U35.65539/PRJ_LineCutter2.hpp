#ifndef UE4SS_SDK_PRJ_LineCutter2_HPP
#define UE4SS_SDK_PRJ_LineCutter2_HPP

class APRJ_LineCutter2_C : ULineCutterProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Plasma_Projectile3;
    UStaticMeshComponent* SM_Linecutter_Projectile_A_Right3;
    USphereComponent* SphereRight3;
    UStaticMeshComponent* SM_Linecutter_Projectile_A_Left3;
    USphereComponent* SphereLeft3;
    USphereComponent* SphereRight;
    USphereComponent* SphereLeft;
    USphereComponent* SphereRight2;
    USphereComponent* SphereLeft2;
    UParticleSystemComponent* P_Plasma_Projectile2;
    UParticleSystemComponent* P_Plasma_Projectile;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* SM_Linecutter_Projectile_A_Right2;
    UStaticMeshComponent* SM_Linecutter_Projectile_A_Left2;
    UDamageComponent* DamageExplosion;
    UProjectileExplosion* ProjectileExplosion;
    UStaticMeshComponent* SM_Linecutter_Projectile_A_Left;
    UStaticMeshComponent* SM_Linecutter_Projectile_A_Right;
    float ProjectileSlowdown_Velocity_3314D5764A0652510BE0E38ABA90D3FC;
    TEnumAsByte<ETimelineDirection::Type> ProjectileSlowdown__Direction_3314D5764A0652510BE0E38ABA90D3FC;
    UTimelineComponent* ProjectileSlowdown;
    FTimerHandle ExpandLineTimerHandle;
    int32 TimerHandleExecutions;
    float VisualMaxSize;
    FTimerHandle FireTimerHandle;
    FTimerHandle DestructionByTerrainTimerHandle;
    float TerrainCallTime;
    int32 TerrainIndex;
    FTimerHandle ReduceLineTimerHandle;
    TSubclassOf<AActor> PersistantExplosion;

    void AdjustLineSize(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, FVector CallFunc_MakeVector_ReturnValue_5, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5);
    void UserConstructionScript();
    void ProjectileSlowdown__FinishedFunc();
    void ProjectileSlowdown__UpdateFunc();
    void DisableProjectile();
    void ExpandLine();
    void DoDamage();
    void ReceiveEndPlay(uint8 EndPlayReason);
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
    void ExecuteUbergraph_PRJ_LineCutter2(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, uint8 K2Node_Event_EndPlayReason, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, LineDestroy__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_3, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_4, LineLifeSpanDestroy__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, UFXSystemComponent* CallFunc_SpawnScaledEmitterAtLocation_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_4, const FHitResult K2Node_CustomEvent_result, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_GetUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, FVector CallFunc_K2_GetComponentLocation_ReturnValue_8, bool K2Node_Event_isVisible, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, APawn* CallFunc_GetInstigator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ABP_PlasmaTrail_LineCutter_C* CallFunc_FinishSpawningActor_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_9);
}

#endif
