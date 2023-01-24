#ifndef UE4SS_SDK_BP_SmallMeteor_HPP
#define UE4SS_SDK_BP_SmallMeteor_HPP

class ABP_SmallMeteor_C : public APlagueMeteor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ImpactCraterCarver1;
    class USceneComponent* PlagueheartLocation;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class USceneComponent* RoofBreakChecker;
    class UPointLightComponent* Light_Meteor_Area_Glow;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* ImpactCraterCarver;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class USceneComponent* Scene;
    class UAudioComponent* MeteorRumble_Cue;
    class USimpleHealthComponent* SimpleHealth;
    class UAutoCarverComponent* AutoCarver;
    int32 Stage;
    class UAudioComponent* RumbleSound;
    class UParticleSystemComponent* EarthquakeParticles;
    class UNiagaraComponent* EarthquakeParticles2;
    float PlagueHeartChance;
    class UAudioComponent* Micro Meteor Sound;
    FTimerHandle BreakRoofTimer;
    int32 OldStage;
    class UAudioComponent* SmallMeteorIdle;
    float Pitch;

    void ReceiveBeginPlay();
    void Impacted();
    void BndEvt__BP_SmallMeteor_SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__BP_SmallMeteor_SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void EnableVisuals();
    void OnStageAdvanced(int32 Stage);
    void TestIfRoofBreak();
    void SpawnBreakThroughParticle(FVector Location);
    void StartBreakThroughTimer();
    void BndEvt__BP_SmallMeteor_DropToTerrain_K2Node_ComponentBoundEvent_2_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void CompleteDestroy();
    void Impacted_Latejoin();
    void ExecuteUbergraph_BP_SmallMeteor(int32 EntryPoint);
};

#endif
