#ifndef UE4SS_SDK_SER_FindTargetViaSenses_HPP
#define UE4SS_SDK_SER_FindTargetViaSenses_HPP

class USER_FindTargetViaSenses_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    FGameplayTagContainer AllowedTargets;

    void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnSensePawn(class APawn* Pawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindTargetViaSenses(int32 EntryPoint, class UHealthComponentBase* Temp_object_Variable, FExecuteUbergraph_SER_FindTargetViaSensesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAlive_ReturnValue, class UHealthComponentBase* Temp_object_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_CustomEvent_Pawn, class UPawnSensingComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ITargetable> K2Node_DynamicCast_AsTargetable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue, class UHealthComponentBase* CallFunc_GetTargetHealthComponent_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, TScriptInterface<class ITargetable> K2Node_DynamicCast_AsTargetable_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class UHealthComponentBase* CallFunc_GetTargetHealthComponent_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue_1, bool CallFunc_LineOfSightTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
};

#endif
