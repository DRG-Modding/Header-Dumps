#ifndef UE4SS_SDK_ITM_AOE_Grenade_Base_HPP
#define UE4SS_SDK_ITM_AOE_Grenade_Base_HPP

class AITM_AOE_Grenade_Base_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class AActor> AOEClass;
    class USoundBase* DischargeSound;
    float AoESpawnDelay;

    void OnExploded();
    void ExecuteUbergraph_ITM_AOE_Grenade_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
