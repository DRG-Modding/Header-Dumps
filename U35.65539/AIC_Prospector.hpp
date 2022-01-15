#ifndef UE4SS_SDK_AIC_Prospector_HPP
#define UE4SS_SDK_AIC_Prospector_HPP

class AAIC_Prospector_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName IsRunningKey;
    FTimerHandle Timer_Running;
    FName Hackable;
    TSubclassOf<UStatusEffect> Speed;
    TSet<AActor*> ScannedObjects;
    bool HasBeenAttacked;
    TSubclassOf<UStatusEffect> SlowImmunity;
    UHealthComponentBase* ProspectorHealth;
    bool ProspectorAlive;

    bool OnTriggerAI(FName TriggerName);
    void GetProspector(UENE_Prospector_C*& AsENE Prospector, APawn* CallFunc_K2_GetPawn_ReturnValue, UENE_Prospector_C* K2Node_DynamicCast_AsENE_Prospector, bool K2Node_DynamicCast_bSuccess);
    void OnMessageAI(FName TriggerName);
    void ReceiveBeginPlay();
    void OnDamageTaken();
    void OnMessageBehaviorTreeEvent_Event_0(FName Message);
    void SetHackable();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void StartFleeing();
    void OnRunning();
    void FirstWeakpointDestroyed();
    void RemoveAllStatusEffects();
    void AddSlowImmunity();
    void RemoveSlowImmunity();
    void ReceivePossess(APawn* PossessedPawn);
    void ProspectorDied(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_Prospector(int32 EntryPoint, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_Event_triggerName, bool CallFunc_RunBehaviorTree_ReturnValue, FName K2Node_CustomEvent_Message, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetValueAsBool_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, const FName K2Node_Event_keyName, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_1, APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue_1, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess_1, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_2, bool CallFunc_PushActiveStatusEffect_ReturnValue, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_3, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_4, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_5, bool CallFunc_HasActiveEffect_ReturnValue, bool CallFunc_PopActiveStatusEffect_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue_1, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_6, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_7, bool CallFunc_PopActiveStatusEffect_ReturnValue_1, bool CallFunc_PushActiveStatusEffect_ReturnValue_2, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_8, UENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_9, bool CallFunc_PushActiveStatusEffect_ReturnValue_3, APawn* K2Node_Event_PossessedPawn, bool CallFunc_PopActiveStatusEffect_ReturnValue_2, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, MessageBehaviorTree__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
}

#endif
