#ifndef UE4SS_SDK_EWC_Spiders_Boss_HPP
#define UE4SS_SDK_EWC_Spiders_Boss_HPP

class UEWC_Spiders_Boss_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    UEnemyGroupDescriptor* EnemyGroup;
    TSet<APawn*> spawnedEnemies;

    void StartWave();
    void spawned(APawn* enemy);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_EWC_Spiders_Boss(int32 EntryPoint, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, UEnemyDescriptor* Temp_object_Variable, UEnemyDescriptor* Temp_object_Variable_1, FVector CallFunc_GetSpawnPointInRange_ReturnValue, APawn* K2Node_CustomEvent_enemy, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, UHealthComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, UEnemyDescriptor* K2Node_Select_Default, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
}

#endif
