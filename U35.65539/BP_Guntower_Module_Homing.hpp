#ifndef UE4SS_SDK_BP_Guntower_Module_Homing_HPP
#define UE4SS_SDK_BP_Guntower_Module_Homing_HPP

class ABP_Guntower_Module_Homing_C : UHomingFireModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UOutlineComponent* outline;
    UChildActorComponent* WeakPointActor;
    UChildActorComponent* WeakPointActor2;
    UChildActorComponent* WeakPointActor1;

    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_Homing(int32 EntryPoint);
}

#endif
