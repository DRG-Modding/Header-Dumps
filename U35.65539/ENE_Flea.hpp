#ifndef UE4SS_SDK_ENE_Flea_HPP
#define UE4SS_SDK_ENE_Flea_HPP

class AENE_Flea_C : UEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* Trail;
    UAudioComponent* Audio Flying;
    UAudioComponent* Audio Idle;
    UPointLightComponent* PointLight;
    USkeletalMeshComponent* Wings;
    UTerrainPlacementComponent* terrainPlacement;
    UInDangerComponent* InDanger;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    USphereComponent* Sphere;
    UGroundToAirComponent* GroundToAir;
    float FleeFromplayerRange;
    float MinWalkTIme;
    float MaxWalkTime;

    void SetWantstoFly(bool Fly, FName CallFunc_MakeLiteralName_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature();
    void ReceiveBeginPlay();
    void LookforPlayers();
    void RandomFlight();
    void OnFrozen(AActor* Source);
    void ExecuteUbergraph_ENE_Flea(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, InterfaceProperty K2Node_DynamicCast_AsI_Flying_ABP, bool K2Node_DynamicCast_bSuccess, InterfaceProperty K2Node_DynamicCast_AsI_Flying_ABP_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsFlying_ReturnValue, AActor* K2Node_Event_source, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
}

#endif
