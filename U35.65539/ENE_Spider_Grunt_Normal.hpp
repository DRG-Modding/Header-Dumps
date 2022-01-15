#ifndef UE4SS_SDK_ENE_Spider_Grunt_Normal_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Normal_HPP

class AENE_Spider_Grunt_Normal_C : UENE_Spider_Grunt_Base_C
{
    UMeleeAttackComponent* MeleeAttack;
    USimpleArmorDamageComponent* SimpleArmorDamage;

    void GetEnemySpawnedCount(int32& SpawnCount);
}

#endif
