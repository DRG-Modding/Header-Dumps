#ifndef UE4SS_SDK_BP_Geyser_Frost_HPP
#define UE4SS_SDK_BP_Geyser_Frost_HPP

class ABP_Geyser_Frost_C : ABP_Geyser_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* GeyserSandIdle_Cue;
    UAudioComponent* GeyserSandErupt_Cue;
    UCapsuleComponent* Capsule-Inside;
    UStaticMeshComponent* StaticMesh;
    ULevelGenerationCarverComponent* LevelGenerationCarver-Outside;
    ULevelGenerationCarverComponent* LevelGenerationCarver-Inside;
    UStaticMeshComponent* Cylender;
    UTerrainPlacementComponent* terrainPlacement;
    UCapsuleComponent* Capsule-Outside;
    UParticleSystemComponent* Particle_Erupt;
    UParticleSystemComponent* Particle_Idle;
    UPathfinderCollisionComponent* PathfinderCollision;
    USceneComponent* SharedRoot;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool VolcanoEruptionDanger;
    float AirPush;
    FVector StartScale;
    TArray<APlayerCharacter*> PlayersInside;
    TArray<APlayerCharacter*> PlayersOutside;

    void OnRep_Explode();
    void OnRep_VolcanoEruptionDanger();
    void ReceiveBeginPlay();
    void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InternalAirPush();
    void ExecuteUbergraph_BP_Geyser_Frost(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_TransformDirection_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, bool CallFunc_TryPushActiveStatusEffect_ReturnValue_1, bool CallFunc_TryPopActiveStatusEffect_ReturnValue_1);
}

#endif
