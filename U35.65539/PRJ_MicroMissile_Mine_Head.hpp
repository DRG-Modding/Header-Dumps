#ifndef UE4SS_SDK_PRJ_MicroMissile_Mine_Head_HPP
#define UE4SS_SDK_PRJ_MicroMissile_Mine_Head_HPP

class APRJ_MicroMissile_Mine_Head_C : UPRJ_MicroMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* HitCollider;
    UEnemyHealthComponent* HealthComponent;
    UStaticMeshComponent* TriggerAreaDisplay;
    USphereComponent* Trigger_Sphere;
    float Timeline_1_Scale_6C1068EA404E3A854E26539704AD5A69;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_6C1068EA404E3A854E26539704AD5A69;
    UTimelineComponent* Timeline_1;
    bool Triggered;
    FHitResult LastHitResult;
    float LifeTime;
    FGameplayTagContainer EnemyTag;
    float MineExplosionRadiusMultiplier;
    float MineExplosionDamageMultiplier;

    void OnRep_Triggered();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnInitialized();
    void DoTriggerAreaDisplay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void TriggerExplosion();
    void BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_MicroMissile_Mine_Head(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, TSubclassOf<AActor> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, InterfaceProperty K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5);
}

#endif
