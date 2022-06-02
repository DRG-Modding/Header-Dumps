#ifndef UE4SS_SDK_BP_Guntower_Module_RadialFire_new_HPP
#define UE4SS_SDK_BP_Guntower_Module_RadialFire_new_HPP

class ABP_Guntower_Module_RadialFire_new_C : public ARadialFireModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UOutlineComponent* outline;
    class UChildActorComponent* Weakpoint2;
    class UChildActorComponent* Weakpoint1;
    class UChildActorComponent* Weakpoint;

    void OnFire();
    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_RadialFire_new(int32 EntryPoint);
};

#endif
