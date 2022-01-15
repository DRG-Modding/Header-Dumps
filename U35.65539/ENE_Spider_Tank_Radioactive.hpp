#ifndef UE4SS_SDK_ENE_Spider_Tank_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Radioactive_HPP

class AENE_Spider_Tank_Radioactive_C : UENE_Spider_Tank_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBP_ConeAttackBase_C* RadiationAttack;
    USphereComponent* Sphere;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* RadiationSphere;
    UAudioComponent* RadiationSound;
    float Radiation_Intensity_491FF937435DBE6C1B8926899616FADE;
    TEnumAsByte<ETimelineDirection::Type> Radiation__Direction_491FF937435DBE6C1B8926899616FADE;
    UTimelineComponent* Radiation;
    float BaseLightIntensity;
    FName ScalarParam_Emissive;
    float BaseEmissive;
    UMaterialInstanceDynamic* DynamicGlowbuttMat;
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
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void SpecialAttackFlow_1();
    void ExecuteUbergraph_ENE_Spider_Tank_Radioactive(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FName K2Node_ComponentBoundEvent_nameValue, bool K2Node_SwitchName_CmpSuccess, AActor* K2Node_Event_source, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
