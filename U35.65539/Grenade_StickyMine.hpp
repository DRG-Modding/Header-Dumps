#ifndef UE4SS_SDK_Grenade_StickyMine_HPP
#define UE4SS_SDK_Grenade_StickyMine_HPP

class AGrenade_StickyMine_C : UITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* UseSphere;
    USingleUsableComponent* SingleUsable;
    USkeletalMeshComponent* SM_MineGround;
    UStaticMeshComponent* TriggerAreaDisplay;
    UExplosionComponent* Explosion;
    UDamageComponent* Damage;
    USphereComponent* Sphere;
    float RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB;
    TEnumAsByte<ETimelineDirection::Type> RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB;
    UTimelineComponent* RingPulse;
    bool Triggered;
    float ArmingDelay;
    bool Armed;
    USoundCue* ExplosionSound;
    UParticleSystem* ExplosionParticles;
    UMaterialInstanceDynamic* TriggerAreaDynamicMat;
    FLinearColor TriggerAreaColor;
    bool Exploded;
    UMaterialInterface* Not Blinking Dynamic Material;
    int32 MaxExplosions;
    int32 ExplosionCount;
    bool Over;
    UMaterialInstanceDynamic* GrenadeLightsDynamicMat;
    FLinearColor TriggeredLightsColour;
    float LifespanAfterFirstTrigger;
    bool Dead;

    void OnRep_Dead();
    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UGrenade_StickyMine_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<UGrenade_StickyMine_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry K2Node_MakeStruct_GearStatEntry, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
    void OnRep_Armed();
    void OnRep_Triggered();
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void RingPulse__FinishedFunc();
    void RingPulse__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TriggerExplosion();
    void GetArmed();
    void DoTriggerAreaPulse();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void DisarmMine(UThrownGrenadeItem* ThrownGrenadeItem);
    void KillMine();
    void ExplodeLast();
    void ExecuteUbergraph_Grenade_StickyMine(int32 EntryPoint, bool CallFunc_IsCloseToLocalPlayer_ReturnValue, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, InterfaceProperty K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, InterfaceProperty K2Node_DynamicCast_AsTargetable, bool K2Node_DynamicCast_bSuccess_2, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetIsTargetable_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, FLinearColor CallFunc_HSVToRGB_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 Temp_int_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UThrownGrenadeItem* K2Node_CustomEvent_ThrownGrenadeItem, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_6, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
