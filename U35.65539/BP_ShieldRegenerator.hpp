#ifndef UE4SS_SDK_BP_ShieldRegenerator_HPP
#define UE4SS_SDK_BP_ShieldRegenerator_HPP

class ABP_ShieldRegenerator_C : UShieldGeneratorActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystemTopGlow;
    UParticleSystemComponent* ParticleSystemSparks;
    UAudioComponent* AudioOutside;
    UAudioComponent* AudioThrown;
    USphereComponent* FleeCollider;
    UStaticMeshComponent* ProjectileSphere;
    UStaticMeshComponent* SphereExtra2;
    UStaticMeshComponent* SphereExtra1;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* SphereTrigger;
    USceneComponent* Sizer;
    UParticleSystemComponent* ParticleSystemBeam;
    UBoxComponent* ThrowCollider;
    USkeletalMeshComponent* SkeletalMesh;
    UAudioComponent* AudioInside;
    UPointLightComponent* PointLight;
    USceneComponent* SphereScaler;
    USkeletalMeshComponent* GeneratorMesh;
    float IntroAnim_Scale_C1CE1C6643D01DDA1DDE1CA672CE4AA9;
    TEnumAsByte<ETimelineDirection::Type> IntroAnim__Direction_C1CE1C6643D01DDA1DDE1CA672CE4AA9;
    UTimelineComponent* IntroAnim;
    TSubclassOf<UStatusEffect> StatusEffect;
    TArray<APlayerCharacter*> ActiveCharacters;
    bool ShieldActive;
    TSubclassOf<UStatusEffect> LeaveShieldProtectiveAuraSTE;
    bool HasDeployed;

    void ReturnHome(UPlayerCharacter* Character, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UShieldGeneratorItem* K2Node_DynamicCast_AsShield_Generator_Item, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetInstigator_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_ShieldRegenerator_Mover_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_MoveToInstigator_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1);
    void SetScale(float Scale, float RelativeRadius, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_2);
    void RemovePlayer(const UPlayerCharacter*& Player, bool CallFunc_PushActiveStatusEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_PopActiveStatusEffect_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
    void AddPlayer(const UPlayerCharacter*& Player, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void IntroAnim__FinishedFunc();
    void IntroAnim__UpdateFunc();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void AllBeginDestroy();
    void ReceiveHitObject();
    void ReceiveBeginPlay();
    void BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Failsafe Hit Object();
    void ExecuteUbergraph_BP_ShieldRegenerator(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue_1, APawn* CallFunc_GetInstigator_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_4, bool K2Node_DynamicCast_bSuccess_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_Add_FloatFloat_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue);
}

#endif
