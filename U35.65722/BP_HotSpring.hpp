#ifndef UE4SS_SDK_BP_HotSpring_HPP
#define UE4SS_SDK_BP_HotSpring_HPP

class ABP_HotSpring_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere-Outside;
    class UParticleSystemComponent* Particle_Steam;
    class UParticleSystemComponent* Particle_Plume;
    class USceneComponent* Scene;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh2;
    class ULevelGenerationCarverComponent* LevelGenerationCarver-Material;
    class UStaticMeshComponent* StaticMesh1;
    class ULevelGenerationCarverComponent* LevelGenerationCarver-Mid;
    class UCapsuleComponent* Capsule-Inside;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver-Outside;
    class ULevelGenerationCarverComponent* LevelGenerationCarver-Inside;
    class UStaticMeshComponent* Cylender;
    class UTerrainPlacementComponent* terrainPlacement;
    class UCapsuleComponent* Capsule-Outside;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USceneComponent* SharedRoot;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool VolcanoEruptionDanger;
    float AirPush;
    FVector StartScale;
    TArray<class APlayerCharacter*> PlayersInside;

    void OnRep_Explode();
    void OnRep_VolcanoEruptionDanger(FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void EnterGeyser();
    void PlayDamageSound(FVector Location);
    void OpenGeyser();
    void CloseGeyser();
    void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InternalAirPush();
    void ExecuteUbergraph_BP_HotSpring(int32 EntryPoint, FVector K2Node_CustomEvent_Location, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, int32 CallFunc_Array_AddUnique_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_RemoveItem_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, const FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_TransformDirection_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_TryPushActiveStatusEffect_ReturnValue_1, bool CallFunc_TryPopActiveStatusEffect_ReturnValue_1);
};

#endif
