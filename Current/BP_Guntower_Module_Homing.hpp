#ifndef UE4SS_SDK_BP_Guntower_Module_Homing_HPP
#define UE4SS_SDK_BP_Guntower_Module_Homing_HPP

class ABP_Guntower_Module_Homing_C : public AHomingFireModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UOutlineComponent* outline;
    class UChildActorComponent* WeakPointActor;
    class UChildActorComponent* WeakPointActor2;
    class UChildActorComponent* WeakPointActor1;

    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_Homing(int32 EntryPoint);
};

#endif
