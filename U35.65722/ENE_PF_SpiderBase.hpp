#ifndef UE4SS_SDK_ENE_PF_SpiderBase_HPP
#define UE4SS_SDK_ENE_PF_SpiderBase_HPP

class AENE_PF_SpiderBase_C : public ASpiderEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnAlertComponent* PawnAlert;
    class UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class UParticleSystem* Death Particles;
    class USoundCue* Death Sound;
    float DeathDuration;
    float AlertOthersRadius;
    float MeshScale;
    class UAnimMontage* SpawnMontage;
    float DecalSize;
    class USoundCue* FleeSound;
    class USoundBase* AlertedScream;

    void EndSpecialAttack();
    void BeginSpecialAttack(int32 SpecialAttackIndex, class UAnimMontage*& Montage);
    void ChangeVisibility(bool bNewVisibility);
    void ActivateSpider(class AActor* Target, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess);
    void InitBlackboard(FName DestinationKeyName, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void PlayDeathEffects(class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnDeathBase();
    void Spawn();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnStartedFleeing();
    void PlayFleeSound();
    void All_PlayAlertScream();
    void Receive_Alerted();
    void CancelSpecialAttack();
    void StopMontagesOnDeath();
    void ExecuteUbergraph_ENE_PF_SpiderBase(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, FExecuteUbergraph_ENE_PF_SpiderBaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, FExecuteUbergraph_ENE_PF_SpiderBaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, FExecuteUbergraph_ENE_PF_SpiderBaseK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, FExecuteUbergraph_ENE_PF_SpiderBaseK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FExecuteUbergraph_ENE_PF_SpiderBaseK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasAuthority_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_source, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
};

#endif
