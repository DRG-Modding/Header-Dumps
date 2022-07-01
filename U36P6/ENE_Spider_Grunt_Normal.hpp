#ifndef UE4SS_SDK_ENE_Spider_Grunt_Normal_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Normal_HPP

class AENE_Spider_Grunt_Normal_C : public AENE_Spider_Grunt_Base_C
{
    class UMeleeAttackComponent* MeleeAttack;
    class USimpleArmorDamageComponent* SimpleArmorDamage;

    void GetEnemySpawnedCount(int32& SpawnCount);
};

#endif
