#ifndef UE4SS_SDK_ENE_Spider_Boss_TwinB_HPP
#define UE4SS_SDK_ENE_Spider_Boss_TwinB_HPP

class AENE_Spider_Boss_TwinB_C : public AENE_Spider_Boss_TwinBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAttackCooldownComponent* AttackCooldown;
    class UMeleeAttackComponent* BiteAttack;
    class UEnemyBufferComponent* EnemyBuffer;
    class UMeleeAttackComponent* CarveAttack;
    class UProjectileAttackComponent* ThreeWayAttack;
    class UBP_ConeAttackBase_C* ConeAttack;
    class UBP_BurrowAttackComponent_C* BurrowAttack;
    class UCapsuleComponent* SpecialAttackCollider;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnDeathBase();
    void OnMessageAI(FName TriggerName);
    void ApplyDR();
    void RemoveDR();
    void Grieve(FVector GreeveLocation);
    void ExecuteUbergraph_ENE_Spider_Boss_TwinB(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, FName K2Node_Event_triggerName, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class APawn* CallFunc_Array_Get_Item, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AENE_Spider_Boss_TwinB_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_B, bool K2Node_DynamicCast_bSuccess_1, FVector K2Node_Event_GreeveLocation, FName CallFunc_MakeLiteralName_ReturnValue);
};

#endif
