#ifndef UE4SS_SDK_BP_XmasCandleBlock_Item_HPP
#define UE4SS_SDK_BP_XmasCandleBlock_Item_HPP

class ABP_XmasCandleBlock_Item_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* MainLight;
    UPointLightComponent* PointLight3;
    UStaticMeshComponent* StaticMesh4;
    UPointLightComponent* PointLight2;
    UStaticMeshComponent* StaticMesh3;
    UPointLightComponent* PointLight1;
    UStaticMeshComponent* StaticMesh2;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMesh1;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    float CandleFlicker_LightIntensityMod_9FFB83D746EE53EE1A830883D2DC356F;
    TEnumAsByte<ETimelineDirection::Type> CandleFlicker__Direction_9FFB83D746EE53EE1A830883D2DC356F;
    UTimelineComponent* CandleFlicker;
    UParticleSystem* deathParticles;
    USoundCue* deathSound;
    TArray<UMaterialInterface*> Mats;
    int32 NumHits;
    float Originalintensity;
    float TargetIntensity;

    void CandleFlicker__FinishedFunc();
    void CandleFlicker__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void ExecuteUbergraph_BP_XmasCandleBlock_Item(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
}

#endif
