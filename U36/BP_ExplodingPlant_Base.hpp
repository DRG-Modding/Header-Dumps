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

    float DistanceToLocalPlayer();
    void UserConstructionScript();
    void Timeline_InflateAnim__FinishedFunc();
    void Timeline_InflateAnim__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_ExplodingPlant_Base(int32 EntryPoint);
};

#endif
