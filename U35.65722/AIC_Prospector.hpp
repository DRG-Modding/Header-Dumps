#ifndef UE4SS_SDK_AIC_Prospector_HPP
#define UE4SS_SDK_AIC_Prospector_HPP

class AAIC_Prospector_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName IsRunningKey;
    FTimerHandle Timer_Running;
    FName Hackable;
    TSubclassOf<class UStatusEffect> Speed;
    TSet<AActor*> ScannedObjects;
    bool HasBeenAttacked;
    TSubclassOf<class UStatusEffect> SlowImmunity;
    class UHealthComponentBase* ProspectorHealth;
    bool ProspectorAlive;

    bool OnTriggerAI(FName TriggerName);
    void GetProspector(class AENE_Prospector_C*& AsENE Prospector, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AENE_Prospector_C* K2Node_DynamicCast_AsENE_Prospector, bool K2Node_DynamicCast_bSuccess);
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
    void ReceivePossess(class APawn* PossessedPawn);
    void ProspectorDied(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_Prospector(int32 EntryPoint, FExecuteUbergraph_AIC_ProspectorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FName K2Node_Event_triggerName, bool CallFunc_RunBehaviorTree_ReturnValue, FName K2Node_CustomEvent_Message, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetValueAsBool_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, const FName K2Node_Event_keyName, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess_1, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_2, bool CallFunc_PushActiveStatusEffect_ReturnValue, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_3, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_4, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_5, bool CallFunc_HasActiveEffect_ReturnValue, bool CallFunc_PopActiveStatusEffect_ReturnValue, FExecuteUbergraph_AIC_ProspectorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue_1, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_6, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_7, bool CallFunc_PopActiveStatusEffect_ReturnValue_1, bool CallFunc_PushActiveStatusEffect_ReturnValue_2, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_8, class AENE_Prospector_C* CallFunc_GetProspector_AsENE_Prospector_9, bool CallFunc_PushActiveStatusEffect_ReturnValue_3, class APawn* K2Node_Event_PossessedPawn, bool CallFunc_PopActiveStatusEffect_ReturnValue_2, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, FExecuteUbergraph_AIC_ProspectorK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
};

#endif
