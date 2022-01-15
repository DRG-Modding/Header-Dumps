#ifndef UE4SS_SDK_BP_Boss_AoEAttack_HPP
#define UE4SS_SDK_BP_Boss_AoEAttack_HPP

class UBP_Boss_AoEAttack_C : USpecialDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<UAnimMontage*> SPMontages;

    UAnimMontage* SelectMontage(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, UAnimMontage* CallFunc_Array_Get_Item, UAnimMontage* CallFunc_Array_Get_Item_1, bool CallFunc_IsSingleplayer_ReturnValue);
    void Receive_OnPerformAttack();
    void ExecuteUbergraph_BP_Boss_AoEAttack(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
