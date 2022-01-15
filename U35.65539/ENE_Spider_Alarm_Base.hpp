#ifndef UE4SS_SDK_ENE_Spider_Alarm_Base_HPP
#define UE4SS_SDK_ENE_Spider_Alarm_Base_HPP

class AENE_Spider_Alarm_Base_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Weakspot_Shell;
    USphereComponent* Trigger;
    UPointLightComponent* AlarmIndicator;
    UBP_BurrowComponent_C* BP_BurrowComponent;
    USphereComponent* Sphere;
    float AgitationDistance;
    float FleeTime;
    float HighAgitationDistance;
    bool Fleeing;
    FVector WaveSpawnPoint;
    float AgitationAmount;
    float CurrentAgitationRate;
    float LowAgitationRate;
    float NoAgitationRate;
    float HighAgitationRate;
    float LowAgitationLimit;
    float HighAgitationLimit;
    bool HasLowAgitation;
    bool HasHighAgitation;
    float MidAgitationDistance;
    float MidAgitationRate;
    bool HasLOS;

    void CheckLoS(UPlayerCharacter* NearestPlayer, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
    void UpdateAgitationFeedback(bool CallFunc_BooleanOR_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UAIController* CallFunc_GetAIController_ReturnValue_1, UAIController* CallFunc_GetAIController_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_2);
    void CalculateAgitation(FString CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void SetAgitationRate(UPlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void SpawnGuards(UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEWC_Hatchling_KillFailed_C* CallFunc_TriggerWave_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue_1);
    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue);
    void OnRagdoll();
    void OnMessageAI(FName TriggerName);
    void CheckForNearestPlayer();
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamageSig__DelegateSignature(float Amount);
    void ExecuteUbergraph_ENE_Spider_Alarm_Base(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FName K2Node_Event_triggerName, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_IsClosed_Variable, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, UAIController* CallFunc_GetAIController_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_ComponentBoundEvent_Amount, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
}

#endif
