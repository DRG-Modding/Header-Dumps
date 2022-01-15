#ifndef UE4SS_SDK_PRJ_FlareGun_Projectile01_HPP
#define UE4SS_SDK_PRJ_FlareGun_Projectile01_HPP

class APRJ_FlareGun_Projectile01_C : UFlareGunProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage1;
    UStaticMeshComponent* Arrow;
    USpotLightComponent* SpotLight_Shadow_3;
    USpotLightComponent* SpotLight_Shadow_2;
    USpotLightComponent* SpotLight_Shadow_1;
    UTerrainDetectComponent* TerrainDetect;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* StaticMesh;
    UPointLightComponent* PointLight_Dead;
    UPointLightComponent* PointLight_NoShadow;
    UBoxComponent* Box;
    float Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81;
    float Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81;
    TEnumAsByte<ETimelineDirection::Type> Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81;
    UTimelineComponent* Light_Anim;
    float LightIntensity_Point;
    float Damage;
    FScaledEffect DamageEffect;
    float LightIntensity_Spot;

    void SpawnImpact();
    void UpdateShadowRadius(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 CallFunc_GetShadowQuality_ReturnValue, float K2Node_Select_Default);
    void StartFadeOut(float& Time, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
    void GetHealthBaseComponentFromActor(AActor* Actor, UHealthComponentBase*& Health, bool CallFunc_IsValid_ReturnValue, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue);
    void FallToGround();
    void Light_Anim__FinishedFunc();
    void Light_Anim__UpdateFunc();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnDroppodImpact(AMiningPod* DropPod);
    void HideAll();
    void OnFlareExtinguish();
    void OnUpdateShadowRadius();
    void ReleaseFlare();
    void ActivateFlare();
    void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UHealthComponentBase* CallFunc_GetHealthBaseComponentFromActor_health, UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, FVector CallFunc_BreakHitResult_Location_2, FVector CallFunc_BreakHitResult_ImpactPoint_2, FVector CallFunc_BreakHitResult_Normal_2, FVector CallFunc_BreakHitResult_ImpactNormal_2, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, AActor* CallFunc_BreakHitResult_HitActor_2, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, FVector CallFunc_BreakHitResult_TraceStart_2, FVector CallFunc_BreakHitResult_TraceEnd_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue, ADeepCSGSection* K2Node_DynamicCast_AsDeep_CSGSection, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, FVector CallFunc_BreakHitResult_Location_3, FVector CallFunc_BreakHitResult_ImpactPoint_3, FVector CallFunc_BreakHitResult_Normal_3, FVector CallFunc_BreakHitResult_ImpactNormal_3, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, AActor* CallFunc_BreakHitResult_HitActor_3, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, FName CallFunc_BreakHitResult_HitBoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_FaceIndex_3, FVector CallFunc_BreakHitResult_TraceStart_3, FVector CallFunc_BreakHitResult_TraceEnd_3, UHealthComponentBase* CallFunc_GetHealthBaseComponentFromActor_health_1, UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, UFXSystemComponent* CallFunc_SpawnImpactParticles_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, AMiningPod* K2Node_Event_DropPod, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_StartFadeOut_time, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, UTerrainMaterial* CallFunc_TryGetTerrainMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UFXSystemComponent* CallFunc_SpawnDigParticles_ReturnValue);
}

#endif
