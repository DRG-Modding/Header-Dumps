#ifndef UE4SS_SDK_ENE_Spider_Boss_TwinA_HPP
#define UE4SS_SDK_ENE_Spider_Boss_TwinA_HPP

class AENE_Spider_Boss_TwinA_C : public AENE_Spider_Boss_TwinBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* Projectile_MinesBarrage;
    class UMeleeAttackComponent* MeleeAttack;
    class UProjectileAttackComponent* Projectile_Mines;
    class UProjectileAttackComponent* Projectile_Fireball;

    void ReceiveBeginPlay();
    void BndEvt__Projectile_MinesBarrage_K2Node_ComponentBoundEvent_1_ProjectileAttackDelegate__DelegateSignature();
    void ExecuteUbergraph_ENE_Spider_Boss_TwinA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_Array_Get_Item, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AENE_Spider_Boss_TwinA_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_A, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
