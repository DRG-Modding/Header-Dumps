#ifndef UE4SS_SDK_BP_ShieldRegenerator_HPP
#define UE4SS_SDK_BP_ShieldRegenerator_HPP

class ABP_ShieldRegenerator_C : public AShieldGeneratorActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystemTopGlow;
    class UParticleSystemComponent* ParticleSystemSparks;
    class UAudioComponent* AudioOutside;
    class UAudioComponent* AudioThrown;
    class USphereComponent* FleeCollider;
    class UStaticMeshComponent* ProjectileSphere;
    class UStaticMeshComponent* SphereExtra2;
    class UStaticMeshComponent* SphereExtra1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* SphereTrigger;
    class USceneComponent* Sizer;
    class UParticleSystemComponent* ParticleSystemBeam;
    class UBoxComponent* ThrowCollider;
    class USkeletalMeshComponent* SkeletalMesh;
    class UAudioComponent* AudioInside;
    class UPointLightComponent* PointLight;
    class USceneComponent* SphereScaler;
    class USkeletalMeshComponent* GeneratorMesh;
    float IntroAnim_Scale_C1CE1C6643D01DDA1DDE1CA672CE4AA9;
    TEnumAsByte<ETimelineDirection::Type> IntroAnim__Direction_C1CE1C6643D01DDA1DDE1CA672CE4AA9;
    class UTimelineComponent* IntroAnim;
    TSubclassOf<class UStatusEffect> StatusEffect;
    TArray<class APlayerCharacter*> ActiveCharacters;
    bool ShieldActive;
    TSubclassOf<class UStatusEffect> LeaveShieldProtectiveAuraSTE;
    bool HasDeployed;

    void ReturnHome(class APlayerCharacter* Character, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AShieldGeneratorItem* K2Node_DynamicCast_AsShield_Generator_Item, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ShieldRegenerator_Mover_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_MoveToInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1);
    void SetScale(float Scale, float RelativeRadius, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_2);
    void RemovePlayer(const class APlayerCharacter*& Player, bool CallFunc_PushActiveStatusEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_PopActiveStatusEffect_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
    void AddPlayer(const class APlayerCharacter*& Player, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void IntroAnim__FinishedFunc();
    void IntroAnim__UpdateFunc();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void AllBeginDestroy();
    void ReceiveHitObject();
    void ReceiveBeginPlay();
    void BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Failsafe Hit Object();
    void ExecuteUbergraph_BP_ShieldRegenerator(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_4, bool K2Node_DynamicCast_bSuccess_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_Add_FloatFloat_ReturnValue, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

#endif
