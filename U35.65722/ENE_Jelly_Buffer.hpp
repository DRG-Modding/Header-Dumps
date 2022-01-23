#ifndef UE4SS_SDK_ENE_Jelly_Buffer_HPP
#define UE4SS_SDK_ENE_Jelly_Buffer_HPP

class AENE_Jelly_Buffer_C : public AENE_Jelly_Swarmer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnStatsComponent* PawnStats;
    float Timeline_0_Brightness_A1E6BBAC4885CCA33E7E9496998BA7FF;
    float Timeline_0_Height_A1E6BBAC4885CCA33E7E9496998BA7FF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A1E6BBAC4885CCA33E7E9496998BA7FF;
    class UTimelineComponent* Timeline_0;
    TSubclassOf<class UStatusEffect> buff;
    float DetachedMaxLife;
    float AttachedMaxLife;
    class USceneComponent* TargetRootComponent;
    float NewTargetCooldown;
    float DamageResistance;
    bool IsAttached;
    float HealAmount;
    float HealPercent;
    float HealRate;
    class ADeepPathfinderCharacter* TargetActor;
    class UMaterialInstanceDynamic* BodyMaterial;
    class UMaterialInstanceDynamic* HookMaterial;
    float OffsetX;
    float OffsetY;

    void CalculateOffset(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void OnTargetDeath(class UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void HealTarget();
    void ReceiveTick(float DeltaSeconds);
    void SendBrightnessToHooks();
    void SendBrightnessToBody();
    void ExecuteUbergraph_ENE_Jelly_Buffer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_PopActiveStatusEffect_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_PopActiveStatusEffect_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FRotator CallFunc_MakeRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* K2Node_Event_source, class APawn* CallFunc_GetInstigator_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_PopActiveStatusEffect_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue_2, float Temp_float_Variable, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, int32 CallFunc_AddModifier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IHealth> K2Node_DynamicCast_AsHealth, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue, float K2Node_Event_DeltaSeconds, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue_1, FString CallFunc_Conv_FloatToString_ReturnValue, bool Temp_bool_IsClosed_Variable_2, FExecuteUbergraph_ENE_Jelly_BufferK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue, FExecuteUbergraph_ENE_Jelly_BufferK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
