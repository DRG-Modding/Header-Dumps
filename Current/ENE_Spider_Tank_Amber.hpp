#ifndef UE4SS_SDK_ENE_Spider_Tank_Amber_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Amber_HPP

class AENE_Spider_Tank_Amber_C : public AENE_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* BiteAttack;
    class UMeleeAttackComponent* StabAttack;
    class UStaticMeshComponent* Mesh_Infestation03;
    class UPointLightComponent* PointLight4;
    class UStaticMeshComponent* Mesh_Infestation02;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* Mesh_Infestation01;
    class UPointLightComponent* PointLight1;
    class AGameEvent* Event;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEvent);
    void UserConstructionScript();
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnEventFinished(bool eventSuccess);
    void DeathDetailedBase(float Amount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_Spider_Tank_Amber(int32 EntryPoint);
};

#endif
