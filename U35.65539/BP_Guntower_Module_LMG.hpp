#ifndef UE4SS_SDK_BP_Guntower_Module_LMG_HPP
#define UE4SS_SDK_BP_Guntower_Module_LMG_HPP

class ABP_Guntower_Module_LMG_C : ULMGGuntoweModule
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UStaticMeshComponent* LightCone;
    USpotLightComponent* SpotLight;
    UAIPerceptionComponent* AIPerception;
    UOutlineComponent* outline;
    UChildActorComponent* ChildActor2;
    UChildActorComponent* ChildActor1;
    UChildActorComponent* ChildActor;
    UMaterialInstanceDynamic* LightMaterial;

    void UserConstructionScript(UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ReceiveBeginPlay();
    void OnActivationChanged(bool IsActivated);
    void OnTearArmor();
    void ExecuteUbergraph_BP_Guntower_Module_LMG(int32 EntryPoint, bool K2Node_Event_IsActivated);
}

#endif
