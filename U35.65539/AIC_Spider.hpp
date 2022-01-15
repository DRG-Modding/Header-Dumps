#ifndef UE4SS_SDK_AIC_Spider_HPP
#define UE4SS_SDK_AIC_Spider_HPP

class AAIC_Spider_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBehaviorTree* BehaviorTree;
    UEnemyHealthComponent* EnemyHealthComponent;
    float SpeedModifier;

    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceivePossess(APawn* PossessedPawn);
    void Speed Changer();
    void attackingChanged(bool IsAttacking);
    void StartSpeedModifier();
    void Start Behaviour Tree();
    void ExecuteUbergraph_AIC_Spider(int32 EntryPoint, bool Temp_bool_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, IsAttackingChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, APawn* K2Node_ComponentBoundEvent_Pawn, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, APawn* K2Node_Event_PossessedPawn, UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, APawn* CallFunc_K2_GetPawn_ReturnValue, USpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemyAlertet_ReturnValue, bool CallFunc_RandomBool_ReturnValue, int32 CallFunc_AddModifier_ReturnValue, float K2Node_Select_Default, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_RandomFloatInRange_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, APawn* CallFunc_K2_GetPawn_ReturnValue_1, UENE_PF_SpiderBase_C* K2Node_DynamicCast_AsENE_PF_Spider_Base, bool K2Node_DynamicCast_bSuccess_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UEnemyAnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_CustomEvent_isAttacking, bool CallFunc_PercentageCheck_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
