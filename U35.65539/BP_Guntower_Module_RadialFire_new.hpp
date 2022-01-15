#ifndef UE4SS_SDK_BP_Guntower_Module_RadialFire_new_HPP
#define UE4SS_SDK_BP_Guntower_Module_RadialFire_new_HPP

class ABP_Guntower_Module_RadialFire_new_C : URadialFireModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UOutlineComponent* outline;
    UChildActorComponent* Weakpoint2;
    UChildActorComponent* Weakpoint1;
    UChildActorComponent* Weakpoint;

    void OnFire();
    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_RadialFire_new(int32 EntryPoint, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
}

#endif
