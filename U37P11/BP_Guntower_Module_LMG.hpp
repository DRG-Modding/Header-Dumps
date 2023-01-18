#ifndef UE4SS_SDK_BP_Guntower_Module_LMG_HPP
#define UE4SS_SDK_BP_Guntower_Module_LMG_HPP

class ABP_Guntower_Module_LMG_C : public ALMGGuntoweModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* LightCone;
    class USpotLightComponent* SpotLight;
    class UAIPerceptionComponent* AIPerception;
    class UOutlineComponent* outline;
    class UChildActorComponent* ChildActor2;
    class UChildActorComponent* ChildActor1;
    class UChildActorComponent* ChildActor;
    class UMaterialInstanceDynamic* LightMaterial;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnActivationChanged(bool IsActivated);
    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_LMG(int32 EntryPoint);
};

#endif
