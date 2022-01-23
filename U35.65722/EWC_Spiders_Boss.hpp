#ifndef UE4SS_SDK_EWC_Spiders_Boss_HPP
#define UE4SS_SDK_EWC_Spiders_Boss_HPP

class UEWC_Spiders_Boss_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    TSet<APawn*> spawnedEnemies;

    void StartWave();
    void spawned(class APawn* enemy);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_EWC_Spiders_Boss(int32 EntryPoint, FExecuteUbergraph_EWC_Spiders_BossK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_EWC_Spiders_BossK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, class UEnemyDescriptor* Temp_object_Variable, class UEnemyDescriptor* Temp_object_Variable_1, FVector CallFunc_GetSpawnPointInRange_ReturnValue, class APawn* K2Node_CustomEvent_enemy, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class UHealthComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class UEnemyDescriptor* K2Node_Select_Default, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

#endif
