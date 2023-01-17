#ifndef UE4SS_SDK_ITM_AOE_Grenade_Base_HPP
#define UE4SS_SDK_ITM_AOE_Grenade_Base_HPP

class AITM_AOE_Grenade_Base_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class AActor> AOEClass;
    class USoundBase* DischargeSound;
    float AoESpawnDelay;

    void OnExploded();
    void ExecuteUbergraph_ITM_AOE_Grenade_Base(int32 EntryPoint);
};

#endif
