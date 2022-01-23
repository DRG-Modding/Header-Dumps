#ifndef UE4SS_SDK_BP_ExplodingPlant_Base_HPP
#define UE4SS_SDK_BP_ExplodingPlant_Base_HPP

class ABP_ExplodingPlant_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UObjectTemperatureComponent* ObjectTemperature;
    class UStaticObjectAfflictionComponent* StaticObjectAffliction;
    class UStatusEffectsComponent* StatusEffects;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    FVector Timeline_InflateAnim_InflateVector_21E5AF314623B026BED1ED9ADE4D198B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_InflateAnim__Direction_21E5AF314623B026BED1ED9ADE4D198B;
    class UTimelineComponent* Timeline_InflateAnim;
    FScaledEffect ExplosionParticles;
    FVector ExplosionOffset;
    class USoundCue* ExplosionAudio;
    float CarveDiamter;
    class UMaterialInstanceDynamic* Dynamic Material;
    float InitialHealth;
    FVector MeshScale;
    float InflationScale;
    float BaseMaterialOffset;
    float BaseMaterialEmissive;
    float BaseLightIntensity;
    class UMaterialInterface* Decal;

    float DistanceToLocalPlayer(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetComponentScale_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_InflateAnim__FinishedFunc();
    void Timeline_InflateAnim__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_ExplodingPlant_Base(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class UFXSystemComponent* CallFunc_SpawnScaledEmitterAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Amount, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Heal_ReturnValue, float CallFunc_DistanceToLocalPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue);
};

#endif
