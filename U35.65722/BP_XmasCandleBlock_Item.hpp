#ifndef UE4SS_SDK_BP_XmasCandleBlock_Item_HPP
#define UE4SS_SDK_BP_XmasCandleBlock_Item_HPP

class ABP_XmasCandleBlock_Item_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* MainLight;
    class UPointLightComponent* PointLight3;
    class UStaticMeshComponent* StaticMesh4;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* StaticMesh3;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* StaticMesh2;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    float CandleFlicker_LightIntensityMod_9FFB83D746EE53EE1A830883D2DC356F;
    TEnumAsByte<ETimelineDirection::Type> CandleFlicker__Direction_9FFB83D746EE53EE1A830883D2DC356F;
    class UTimelineComponent* CandleFlicker;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;
    TArray<class UMaterialInterface*> Mats;
    int32 NumHits;
    float Originalintensity;
    float TargetIntensity;

    void CandleFlicker__FinishedFunc();
    void CandleFlicker__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void ExecuteUbergraph_BP_XmasCandleBlock_Item(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

#endif
