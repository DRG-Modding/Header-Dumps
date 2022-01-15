#ifndef UE4SS_SDK_BP_Geyser_Air_HPP
#define UE4SS_SDK_BP_Geyser_Air_HPP

class ABP_Geyser_Air_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;
    UAudioComponent* BublingAudio;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UStaticMeshComponent* Cube_1-1-1;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Sphere;
    UStaticMeshComponent* PreviewMesh;
    UExplosionComponent* Explosion;
    UTerrainDetectComponent* TerrainDetect4;
    UTerrainDetectComponent* TerrainDetect3;
    UTerrainDetectComponent* TerrainDetect2;
    UTerrainDetectComponent* TerrainDetect1;
    UBillboardComponent* Billboard;
    UTerrainPlacementComponent* terrainPlacement;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UCapsuleComponent* Capsule;
    UParticleSystemComponent* Particle_Erupt;
    UParticleSystemComponent* Particle_Idle;
    UPathfinderCollisionComponent* PathfinderCollision;
    UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent;
    USceneComponent* SharedRoot;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool Explode;
    FGeyserTimeStruct State;
    TSet<APlayerCharacter*> PlayerInCollision;
    FRuntimeFloatCurve GravityCurve;
    bool EffectsActivated;

    void OnRep_State();
    void OnRep_Explode(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UPlayerCharacter*>& CallFunc_Set_ToArray_Result, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UPlayerMovementComponent* K2Node_DynamicCast_AsPlayer_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
    void ReceiveBeginPlay();
    void PlayDamageSound(FVector Location);
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
    void Boom();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_DamageTriggerComponent_K2Node_ComponentBoundEvent_0_ActorExited__DelegateSignature(UHealthComponent* OtherHealthComponent);
    void BndEvt__BP_DamageTriggerComponent_K2Node_ComponentBoundEvent_5_ActorEntered__DelegateSignature(UHealthComponent* OtherHealthComponent);
    void ExecuteUbergraph_BP_Geyser_Air(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FVector K2Node_CustomEvent_Location, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, UGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, FGeyserTimeStruct K2Node_MakeStruct_GeyserTimeStruct, float CallFunc_Add_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaSeconds, UGameStateBase* CallFunc_GetGameState_ReturnValue_1, float CallFunc_GetServerWorldTimeSeconds_ReturnValue_1, UHealthComponent* K2Node_ComponentBoundEvent_OtherHealthComponent_1, float CallFunc_Subtract_FloatFloat_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_FClamp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_3, UPlayerMovementComponent* K2Node_DynamicCast_AsPlayer_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, UHealthComponent* K2Node_ComponentBoundEvent_OtherHealthComponent, bool CallFunc_BooleanAND_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Set_Remove_ReturnValue, TArray<UPlayerCharacter*>& CallFunc_Set_ToArray_Result, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, UPlayerMovementComponent* K2Node_DynamicCast_AsPlayer_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_EvaluateRuntimeCurve_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_MathExpression_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_3);
}

#endif
