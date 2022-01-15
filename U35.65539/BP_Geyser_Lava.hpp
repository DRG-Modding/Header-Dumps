#ifndef UE4SS_SDK_BP_Geyser_Lava_HPP
#define UE4SS_SDK_BP_Geyser_Lava_HPP

class ABP_Geyser_Lava_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* BoilingAudio;
    UDamageComponent* Damage;
    UCapsuleComponent* Capsule;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Sphere1;
    UStaticMeshComponent* PreviewCube;
    UStaticMeshComponent* PreviewMesh;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainDetectComponent* TerrainDetect3;
    UTerrainDetectComponent* TerrainDetect2;
    UTerrainDetectComponent* TerrainDetect1;
    USceneComponent* TerrainDetectors;
    UExplosionComponent* Explosion;
    UParticleSystemComponent* Particle_Idle;
    UParticleSystemComponent* Particle_Erupt;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Cube;
    UTerrainPlacementComponent* terrainPlacement;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UPathfinderCollisionComponent* PathfinderCollision;
    UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent;
    USceneComponent* SharedRoot;
    float TL_LightIdle_Animation_B5F889F4441C038D5B643AB1334A0B57;
    TEnumAsByte<ETimelineDirection::Type> TL_LightIdle__Direction_B5F889F4441C038D5B643AB1334A0B57;
    UTimelineComponent* TL_LightIdle;
    float TL_LightErupt_Animation_7348656F4781FB277E0ACBB9184D718A;
    TEnumAsByte<ETimelineDirection::Type> TL_LightErupt__Direction_7348656F4781FB277E0ACBB9184D718A;
    UTimelineComponent* TL_LightErupt;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool VolcanoEruptionDanger;
    bool Explode;
    float LightIntensityErupt;
    float LightIntensityIdle;

    void OnRep_Explode();
    void OnRep_VolcanoEruptionDanger(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void TL_LightErupt__FinishedFunc();
    void TL_LightErupt__UpdateFunc();
    void TL_LightIdle__FinishedFunc();
    void TL_LightIdle__UpdateFunc();
    void ReceiveBeginPlay();
    void BurnPlayers();
    void PlayDamageSound(FVector Location);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void Boom();
    void LightOn();
    void LightOff();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Geyser_Lava(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector K2Node_CustomEvent_Location, bool Temp_bool_Has_Been_Initd_Variable, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UHealthComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue);
}

#endif
