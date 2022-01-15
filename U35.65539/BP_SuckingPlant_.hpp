#ifndef UE4SS_SDK_BP_SuckingPlant__HPP
#define UE4SS_SDK_BP_SuckingPlant__HPP

class ABP_SuckingPlant__C : APawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* SuckingPlantMove;
    UAudioComponent* SuckingPlantLoop;
    UAudioComponent* SuckingPlantClose;
    UAudioComponent* SuckingPlantOpen;
    UParticleSystemComponent* SuckingPSys;
    USphereComponent* MouthBlocker;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* PlantBody;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    USimpleHealthComponent* SimpleHealth;
    UPawnSensingComponent* PawnSensing;
    USceneComponent* DefaultSceneRoot;
    float Pulsating_shell_Pulse_351B8E04438E55A34AD7599F13872713;
    TEnumAsByte<ETimelineDirection::Type> Pulsating_shell__Direction_351B8E04438E55A34AD7599F13872713;
    UTimelineComponent* Pulsating shell;
    TEnumAsByte<ETimelineDirection::Type> Move_towards_target__Direction_3E7A86F94B91CDEC852EE0BAD9B36A13;
    UTimelineComponent* Move towards target;
    float Sucking_Duration_Model_Emissive_intensity___7C306C17493093A48A5774B653EC9DCE;
    TEnumAsByte<ETimelineDirection::Type> Sucking_Duration__Direction_7C306C17493093A48A5774B653EC9DCE;
    UTimelineComponent* Sucking Duration;
    FRotator Target Look At Rotation;
    TArray<APlayerCharacter*> Players inside;
    APawn* Current Target;
    float Suck Duration;
    float Reload Time;
    float Time Until New Target;
    float Vertical movement force;
    float sucking force;
    TEnumAsByte<E_SPlantReloadSteps::Type> PlantState;
    UMaterialInstanceDynamic* Membrane Material;
    UMaterialInstanceDynamic* Shell material;
    float Original Shell Intensity;
    float Original Membrane intensity;
    FBP_SuckingPlant__COnRotationChange OnRotationChange;
    void OnRotationChange(FVector Target Rotation);
    FVector Current Rotation;
    float Pulse time;
    FTimerHandle Pulse timer;
    float Max membrane pulse;
    FVector Previous Rotation;
    float safe distance from mouthblocker;

    void Is actor too close(FVector actor location, bool& is too close, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void OnRep_Current Target(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void Handle Materials(float % Membrane, float % Glow, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void OnRep_Current Rotation();
    void OnRep_PlantState(UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
    void Suck In Target Element(UPlayerCharacter* Input Character, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_TransformDirection_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Sucking Duration__FinishedFunc();
    void Sucking Duration__UpdateFunc();
    void Sucking Duration__Stop Particle System__EventFunc();
    void Move towards target__FinishedFunc();
    void Move towards target__UpdateFunc();
    void Pulsating shell__FinishedFunc();
    void Pulsating shell__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void Suck In Players();
    void Reload Ability();
    void Move To Target();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature();
    void Pulse Shell();
    void BndEvt__MouthBlocker_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SuckingPlant_(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, APawn* K2Node_ComponentBoundEvent_Pawn, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_actor_too_close_is_too_close, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Is_actor_too_close_is_too_close_1, bool CallFunc_IsLocallyControlled_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlive_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable_2, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, FTransform CallFunc_InvertTransform_ReturnValue, FRotator CallFunc_TransformRotation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, UPlayerCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UPlayerCharacter* CallFunc_Array_Get_Item_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UPlayerCharacter* CallFunc_Array_Get_Item_3, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, FVector CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_GetActorEyesViewPoint_OutLocation, FRotator CallFunc_GetActorEyesViewPoint_OutRotation, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_Conv_RotatorToVector_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_GetPeripheralVisionCosine_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, bool CallFunc_Is_actor_too_close_is_too_close_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1);
    void OnRotationChange__DelegateSignature(FVector Target Rotation);
}

#endif
