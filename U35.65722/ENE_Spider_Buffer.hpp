#ifndef UE4SS_SDK_ENE_Spider_Buffer_HPP
#define UE4SS_SDK_ENE_Spider_Buffer_HPP

class AENE_Spider_Buffer_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UCapsuleComponent* Capsule1;
    class UPointLightComponent* PointLight;
    class UAudioComponent* BuffingLoop;
    class UEnemyBufferComponent* EnemyBuffer;
    class USimpleArmorDamageComponent* SimpleArmorDamage;
    float Emission_Time_7C918F0146C07DC2E610CBA4AA96FFB2;
    TEnumAsByte<ETimelineDirection::Type> Emission__Direction_7C918F0146C07DC2E610CBA4AA96FFB2;
    class UTimelineComponent* Emission;
    class UMaterialInstanceDynamic* Dynamic Material;
    float Emission Multiplier;
    float Emission Flash;

    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Emission__FinishedFunc();
    void Emission__UpdateFunc();
    void OnRagdoll();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void BndEvt__EnemyBuffer_K2Node_ComponentBoundEvent_1_BuffingChangedDelegate__DelegateSignature(bool isBuffing);
    void HandleWeapointDeath(class UFSDPhysicalMaterial* Material, class UDamageClass* DamageClass);
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void TriggerWeakpointGlow();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_Spider_Buffer(int32 EntryPoint, class AActor* K2Node_Event_source, bool K2Node_ComponentBoundEvent_isBuffing, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UFSDPhysicalMaterial* K2Node_Event_Material, class UDamageClass* K2Node_Event_DamageClass, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, TEnumAsByte<Spider_DeathType::Type> K2Node_Event_DeathType, bool K2Node_SwitchEnum_CmpSuccess, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float K2Node_ComponentBoundEvent_Amount, float K2Node_ComponentBoundEvent_BaseAmount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
};

#endif
