#ifndef UE4SS_SDK_ENE_Jelly_Buffer_HPP
#define UE4SS_SDK_ENE_Jelly_Buffer_HPP

class AENE_Jelly_Buffer_C : UENE_Jelly_Swarmer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPawnStatsComponent* PawnStats;
    float Timeline_0_Brightness_A1E6BBAC4885CCA33E7E9496998BA7FF;
    float Timeline_0_Height_A1E6BBAC4885CCA33E7E9496998BA7FF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A1E6BBAC4885CCA33E7E9496998BA7FF;
    UTimelineComponent* Timeline_0;
    TSubclassOf<UStatusEffect> buff;
    float DetachedMaxLife;
    float AttachedMaxLife;
    USceneComponent* TargetRootComponent;
    float NewTargetCooldown;
    float DamageResistance;
    bool IsAttached;
    float HealAmount;
    float HealPercent;
    float HealRate;
    ADeepPathfinderCharacter* TargetActor;
    UMaterialInstanceDynamic* BodyMaterial;
    UMaterialInstanceDynamic* HookMaterial;
    float OffsetX;
    float OffsetY;

    void CalculateOffset(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void OnTargetDeath(UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnFrozen(AActor* Source);
    void HealTarget();
    void ReceiveTick(float DeltaSeconds);
    void SendBrightnessToHooks();
    void SendBrightnessToBody();
    void ExecuteUbergraph_ENE_Jelly_Buffer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_PopActiveStatusEffect_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_PopActiveStatusEffect_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FRotator CallFunc_MakeRotator_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, AActor* K2Node_Event_source, APawn* CallFunc_GetInstigator_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, UAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_PopActiveStatusEffect_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UAIController* CallFunc_GetAIController_ReturnValue_1, UAIController* CallFunc_GetAIController_ReturnValue_2, float Temp_float_Variable, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, int32 CallFunc_AddModifier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, InterfaceProperty K2Node_DynamicCast_AsHealth, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue, float K2Node_Event_DeltaSeconds, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue_1, FString CallFunc_Conv_FloatToString_ReturnValue, bool Temp_bool_IsClosed_Variable_2, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
