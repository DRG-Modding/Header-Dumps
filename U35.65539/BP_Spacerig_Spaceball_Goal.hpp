#ifndef UE4SS_SDK_BP_Spacerig_Spaceball_Goal_HPP
#define UE4SS_SDK_BP_Spacerig_Spaceball_Goal_HPP

class ABP_Spacerig_Spaceball_Goal_C : UGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget1;
    UWidgetComponent* Widget;
    UBoxComponent* GoalBox;
    USphereComponent* UseSphere;
    UParticleSystemComponent* ParticleSystem2;
    UParticleSystemComponent* ParticleSystem1;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* Goal;
    UStaticMeshComponent* SM_GoalEmitter_01;
    UBoxComponent* Box;
    UCarriableComponent* Carriable;
    FVector throwForce;
    int32 GoalsScored;
    float StartYaw;
    USoundBase* GoalScoredSound;
    USoundBase* ThrowSound;
    float StartedDeploying;
    bool HasReachedPeak;
    float SmoothCoff;
    bool BeginActive;
    bool HasBounced;
    float GoalClosedTimer;

    void OnRep_GoalClosedTimer(UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UW_CircularProgressBar01_C* K2Node_DynamicCast_AsW_Circular_Progress_Bar_01, bool K2Node_DynamicCast_bSuccess);
    void HandlePopUp(float DeltaTime, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_2, bool CallFunc_HasAuthority_ReturnValue, float Temp_float_Variable_3, bool Temp_bool_Variable_3, FVector CallFunc_VEase_ReturnValue, float K2Node_Select_Default, FVector CallFunc_VEase_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float K2Node_Select_Default_3, float CallFunc_FClamp_ReturnValue);
    void OnRep_GoalsScored(UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, UW_Spacerig_Spaceball_GoalWidget_Red_C* K2Node_DynamicCast_AsW_Spacerig_Spaceball_Goal_Widget_Red, bool K2Node_DynamicCast_bSuccess, UW_Spacerig_Spaceball_GoalWidget_C* K2Node_DynamicCast_AsW_Spacerig_Spaceball_Goal_Widget, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void SetGoalVisible();
    void Throw(FVector force);
    void BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Countdown Completed();
    void ExecuteUbergraph_BP_Spacerig_Spaceball_Goal(int32 EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UW_CircularProgressBar01_C* K2Node_DynamicCast_AsW_Circular_Progress_Bar_01, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool K2Node_ComponentBoundEvent_canUse, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_PickupItem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, float K2Node_Event_DeltaSeconds, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_GetActorRightVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_Event_force, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, OnCountdownCompleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
}

#endif