#ifndef UE4SS_SDK_BP_DorettaHead_HPP
#define UE4SS_SDK_BP_DorettaHead_HPP

class ABP_DorettaHead_C : UDorrettaHead
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* NiagaraNoBlinking;
    USphereComponent* SphereTrigger;
    UNiagaraComponent* Niagara;
    UStaticMeshComponent* SM_Doretta;
    USceneComponent* DorettaHeadRoot;
    USceneComponent* SoundSpawnPoint;
    USphereComponent* Sphere1;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UBoxComponent* Box;
    USphereComponent* SphereUsable;
    FVector JIggle_Jiggle_4D1EF936403F1B634C819C8AC37A7DE1;
    TEnumAsByte<ETimelineDirection::Type> JIggle__Direction_4D1EF936403F1B634C819C8AC37A7DE1;
    UTimelineComponent* JIggle;
    FVector throwForce;
    bool IsPickedUp;
    float LastSoundPlayTime;
    float MinTimeBetweenSounds;
    USoundCue* ImpactSound;

    void JIggle__FinishedFunc();
    void JIggle__UpdateFunc();
    void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void PlayDorettaSound(USoundBase* Sound);
    void ReceiveBeginPlay();
    void PlaySound();
    void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_DorettaHead(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FVector K2Node_Event_force, float CallFunc_VSizeSquared_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_PickupItem_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, USoundBase* K2Node_CustomEvent_Sound, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FRotator CallFunc_MakeRotator_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FVector CallFunc_GetComponentVelocity_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_VSize_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UActorComponent* K2Node_Select_Default);
}

#endif
