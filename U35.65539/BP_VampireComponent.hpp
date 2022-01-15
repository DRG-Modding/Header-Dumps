#ifndef UE4SS_SDK_BP_VampireComponent_HPP
#define UE4SS_SDK_BP_VampireComponent_HPP

class UBP_VampireComponent_C : UFloatPerkComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    USoundBase* VampireHealCue;
    FGameplayTagQuery Query;

    void OnEnemyKilled(const FGameplayTagContainer& enemyTags, AActor* enemy, UDamageClass* DamageClass);
    void Receive_OnInitialized();
    void Client_VampireTriggered();
    void ExecuteUbergraph_BP_VampireComponent(int32 EntryPoint, EnemyKilledSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* CallFunc_GetOwner_ReturnValue, const FGameplayTagContainer K2Node_CustomEvent_enemyTags, AActor* K2Node_CustomEvent_enemy, UDamageClass* K2Node_CustomEvent_damageClass, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, float CallFunc_Heal_ReturnValue);
}

#endif
