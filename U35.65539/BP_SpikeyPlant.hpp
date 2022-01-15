#ifndef UE4SS_SDK_BP_SpikeyPlant_HPP
#define UE4SS_SDK_BP_SpikeyPlant_HPP

class ABP_SpikeyPlant_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    USkeletalMeshComponent* Plant;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    USphereComponent* Spike Free Area;
    USphereComponent* Spike Spawn Area;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* DefaultSceneRoot;
    float Retract_spikes_extract_12C035484D9FA60A9729318F1FE2B43F;
    TEnumAsByte<ETimelineDirection::Type> Retract_spikes__Direction_12C035484D9FA60A9729318F1FE2B43F;
    UTimelineComponent* Retract spikes;
    float Extrude_spikes_extract_506BA7914733C21AE25E36ACEB72E417;
    TEnumAsByte<ETimelineDirection::Type> Extrude_spikes__Direction_506BA7914733C21AE25E36ACEB72E417;
    UTimelineComponent* Extrude spikes;
    int32 Max Amount Of Spikes;
    int32 Min amount Of Spikes;
    bool IsExtruded;
    bool IsActive;
    FTimerHandle ActiveTimer;
    TArray<USkeletalMeshComponent*> AnimatedSpikeMeshes;
    FBP_SpikeyPlant_CChange state Change state;
    void Change state(bool Is Extruded, bool Is Triggered);
    TArray<UCapsuleComponent*> Capsule colliders;
    float SpikeScale;
    bool PlayerIsNearby;
    int32 SpikeSeed;
    TArray<FTransform> SpikeTransforms;

    void OnRep_SpikeSeed(FRandomStream Stream, float CapsuleRadius, float CapsuleHalfHeight, FTransform CurrentTransform, int32 NumSpikes, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Conv_IntToFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UCapsuleComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FRandomStream CallFunc_MakeRandomStream_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, USpikeSkeletalMesh_C* CallFunc_AddComponent_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Spike_B_C* K2Node_DynamicCast_AsABP_Spike_B, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1);
    void Set Spikes to terrain(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UCapsuleComponent* CallFunc_Array_Get_Item, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentScale_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item_1, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, int32 CallFunc_Array_Add_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_GetUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Max_ReturnValue, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult);
    void OnRep_IsExtruded();
    void UserConstructionScript(FTransform current Transform, float Capsule halfHeight, float Capsule Radius, int32 Amount Of Spikes);
    void Extrude spikes__FinishedFunc();
    void Extrude spikes__UpdateFunc();
    void Extrude spikes__HitActors__EventFunc();
    void Retract spikes__FinishedFunc();
    void Retract spikes__UpdateFunc();
    void Retract spikes__DeactivateHit__EventFunc();
    void ReceiveBeginPlay();
    void Spike extrusion();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void ExtrudeSpikes();
    void Retract Spike event();
    void Raytrace for terrain placement();
    void On Spike Capsule Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayerNearby(UPlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_SpikeyPlant(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, ComponentBeginOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_6, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, UCapsuleComponent* CallFunc_Array_Get_Item, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, UCapsuleComponent* CallFunc_Array_Get_Item_2, UCapsuleComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, UCapsuleComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, UCapsuleComponent* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, AActor* K2Node_CustomEvent_OtherActor, UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const FHitResult K2Node_CustomEvent_SweepResult, bool CallFunc_Less_IntInt_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool Temp_bool_IsClosed_Variable, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void Change state__DelegateSignature(bool Is Extruded, bool Is Triggered);
}

#endif
