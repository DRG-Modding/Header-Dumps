#ifndef UE4SS_SDK_ENE_LootBug_HPP
#define UE4SS_SDK_ENE_LootBug_HPP

class AENE_LootBug_C : public ACaveWorm
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class UStaticMeshComponent* DropShadow;
    class UAudioComponent* Lootbug_idle;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_3777A85D4507AA016A87A299C2D01021;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3777A85D4507AA016A87A299C2D01021;
    class UTimelineComponent* Timeline_0;
    TArray<class UResourceData*> Loot;
    FVector2D ChunkCountRange;
    FVector2D ChunkValueRange;
    float DamageLootDropChance;
    float DamageLootDropCoolDown;
    TArray<class UResourceData*> ResourceTypes;
    float LastLootDrop;
    class UParticleSystem* DeathParticle;
    class USoundBase* deathSound;
    class USoundBase* DeathDropLoot;
    class AActor* DeathDestroyParticle;
    class UFSDAchievement* LootbugsKilledStat;
    bool HasPetDropped;
    TArray<class UResourceData*> ResourcesEaten;
    TArray<float> ValueEaten;
    float EatValueMultiplier;
    class UMaterialInterface* Decal;

    void DropEatenLott(FVector DropOffset, int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, class UResourceData* CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void EatChunk(class AResourceChunk* chunk, class UResourceData* CallFunc_GetResourceData_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
    bool OnTriggerAI(FName TriggerName);
    void Has Loot(bool& Has Loot, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Drop Loot(FVector Impulse, FVector DropOffset, bool& success, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Has_Loot_Has_Loot, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, class UResourceData* CallFunc_Array_Get_Item);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_Pettet(bool LootDropped);
    void OnMessageAI(FName TriggerName);
    void OnLootBugDeath();
    void ExecuteUbergraph_ENE_LootBug(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AResourceChunk* K2Node_DynamicCast_AsResource_Chunk, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Has_Loot_Has_Loot, bool CallFunc_Has_Loot_Has_Loot_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class AActor* K2Node_Event_source, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Amount, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 Temp_int_Variable, class APlayerCharacter* CallFunc_Array_Get_Item_1, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool K2Node_CustomEvent_LootDropped, float CallFunc_MakeLiteralFloat_ReturnValue, bool CallFunc_PercentageCheck_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FName K2Node_Event_triggerName, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, float Temp_float_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue_2, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_3, float Temp_float_Variable_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Drop_Loot_Success, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, FVector CallFunc_GetActorForwardVector_ReturnValue_1, FVector CallFunc_GetActorRightVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_5, FVector CallFunc_Multiply_VectorFloat_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, FVector CallFunc_Multiply_VectorFloat_ReturnValue_7, float CallFunc_RandomFloatInRange_ReturnValue_8, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_GetActorForwardVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3, FVector CallFunc_Multiply_VectorFloat_ReturnValue_8, bool CallFunc_Drop_Loot_Success_1, FVector CallFunc_GetActorRightVector_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_9, FVector CallFunc_Multiply_VectorFloat_ReturnValue_9, FVector CallFunc_Multiply_VectorFloat_ReturnValue_10, bool Temp_bool_Variable, FVector CallFunc_Add_VectorVector_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue_5, float K2Node_Select_Default, FVector CallFunc_Multiply_VectorFloat_ReturnValue_11, bool CallFunc_Drop_Loot_Success_2);
};

#endif
