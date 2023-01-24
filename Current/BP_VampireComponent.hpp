#ifndef UE4SS_SDK_BP_VampireComponent_HPP
#define UE4SS_SDK_BP_VampireComponent_HPP

class UBP_VampireComponent_C : public UFloatPerkComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USoundBase* VampireHealCue;
    FGameplayTagQuery Query;

    void OnEnemyKilled(const FGameplayTagContainer& enemyTags, class AActor* enemy, class UDamageClass* DamageClass);
    void Receive_OnInitialized();
    void Client_VampireTriggered();
    void ExecuteUbergraph_BP_VampireComponent(int32 EntryPoint);
};

#endif
