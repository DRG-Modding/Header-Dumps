#ifndef UE4SS_SDK_ENE_Mactera_Amber_HPP
#define UE4SS_SDK_ENE_Mactera_Amber_HPP

class AENE_Mactera_Amber_C : public AENE_Mactera_Shooter_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Infestation02;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* Mesh_Infestation01;
    class UPointLightComponent* PointLight1;
    class AGameEvent* GameEvent;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEvent);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnEventFinished(bool eventSuccess);
    void StartFizzle();
    void BndEvt__FrozenImpact_K2Node_ComponentBoundEvent_1_Delegate__DelegateSignature();
    void ExecuteUbergraph_ENE_Mactera_Amber(int32 EntryPoint);
};

#endif
