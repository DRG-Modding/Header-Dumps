#ifndef UE4SS_SDK_BP_Guntower_Module_RandomFire_HPP
#define UE4SS_SDK_BP_Guntower_Module_RandomFire_HPP

class ABP_Guntower_Module_RandomFire_C : public ARandomFiringGuntowerModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    class UChildActorComponent* Weakpoint1;
    class UChildActorComponent* Weakpoint;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_RandomFire(int32 EntryPoint);
};

#endif
