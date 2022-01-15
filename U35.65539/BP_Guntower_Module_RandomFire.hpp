#ifndef UE4SS_SDK_BP_Guntower_Module_RandomFire_HPP
#define UE4SS_SDK_BP_Guntower_Module_RandomFire_HPP

class ABP_Guntower_Module_RandomFire_C : URandomFiringGuntowerModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UOutlineComponent* outline;
    UChildActorComponent* Weakpoint1;
    UChildActorComponent* Weakpoint;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_RandomFire(int32 EntryPoint);
}

#endif
