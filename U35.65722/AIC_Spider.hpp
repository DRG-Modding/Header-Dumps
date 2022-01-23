#ifndef UE4SS_SDK_AIC_Spider_HPP
#define UE4SS_SDK_AIC_Spider_HPP

class AAIC_Spider_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviorTree;
    class UEnemyHealthComponent* EnemyHealthComponent;
    float SpeedModifier;

    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void Speed Changer();
    void attackingChanged(bool IsAttacking);
    void StartSpeedModifier();
    void Start Behaviour Tree();
    void ExecuteUbergraph_AIC_Spider(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_AIC_SpiderK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_AIC_SpiderK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APawn* K2Node_ComponentBoundEvent_Pawn, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class APawn* K2Node_Event_PossessedPawn, class UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemyAlertet_ReturnValue, bool CallFunc_RandomBool_ReturnValue, int32 CallFunc_AddModifier_ReturnValue, float K2Node_Select_Default, FExecuteUbergraph_AIC_SpiderK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_RandomFloatInRange_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AENE_PF_SpiderBase_C* K2Node_DynamicCast_AsENE_PF_Spider_Base, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UEnemyAnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_CustomEvent_isAttacking, bool CallFunc_PercentageCheck_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
