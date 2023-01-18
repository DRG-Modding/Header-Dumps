#ifndef UE4SS_SDK_ENE_Spider_Tank_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Radioactive_HPP

class AENE_Spider_Tank_Radioactive_C : public AENE_Spider_Tank_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_ConeAttackBase_C* RadiationAttack;
    class USphereComponent* Sphere;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* RadiationSphere;
    class UAudioComponent* RadiationSound;
    float Radiation_Intensity_491FF937435DBE6C1B8926899616FADE;
    TEnumAsByte<ETimelineDirection::Type> Radiation__Direction_491FF937435DBE6C1B8926899616FADE;
    class UTimelineComponent* Radiation;
    float BaseLightIntensity;
    FName ScalarParam_Emissive;
    float BaseEmissive;
    class UMaterialInstanceDynamic* DynamicGlowbuttMat;
    float BaseLightRadius;
    bool RadiationAttackActive;

    void OnRep_RadiationAttackActive();
    void Radiation__FinishedFunc();
    void Radiation__UpdateFunc();
    void ReceiveBeginPlay();
    void OnDeathBase();
    void DoRadiationGlow();
    void CancelSpecialAttack();
    void CancelRadionGlow();
    void BndEvt__RadiationAttack_K2Node_ComponentBoundEvent_0_NameDelegate__DelegateSignature(FName nameValue);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void SpecialAttackFlow_1();
    void ExecuteUbergraph_ENE_Spider_Tank_Radioactive(int32 EntryPoint);
};

#endif
