#ifndef UE4SS_SDK_BP_RivalFortifiedNode_HPP
#define UE4SS_SDK_BP_RivalFortifiedNode_HPP

class ABP_RivalFortifiedNode_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USkeletalMeshComponent* SkeletalMesh;
    class UAudioComponent* TEMP_RivalTurretController_Idle_Cue;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* HackUse;
    class UHackingUsableComponent* HackingUsable;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* SM_Carver_DropPodDrill001;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UPointLightComponent* PointLight;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class USceneComponent* DefaultSceneRoot;
    float LightBreath_Intensity_C8E7BB414DC030500D504F9FD0708336;
    TEnumAsByte<ETimelineDirection::Type> LightBreath__Direction_C8E7BB414DC030500D504F9FD0708336;
    class UTimelineComponent* LightBreath;
    float TurnOffLight_LightIntensityMult_56347D1C418B8F24A060179F6398A561;
    TEnumAsByte<ETimelineDirection::Type> TurnOffLight__Direction_56347D1C418B8F24A060179F6398A561;
    class UTimelineComponent* TurnOffLight;
    TArray<class AActor*> SpawnedDefenses;
    float NumTurretsPerSpawnBase;
    int32 MaxTurretsPerSpwan;
    int32 MinTurretsPerSpawn;
    TArray<class TSubclassOf<AActor>> TurretTypes;
    class AActor* SelectedTurret;
    float MaxLightIntensity;
    class UMaterialInstanceDynamic* DynamicGlowMat;
    bool Active;
    float ShieldLaunchStrength;

    void SpawnDebisChunks(TArray<class UStaticMeshComponent*>& NewParam);
    void OnRep_Active();
    void SpawnDefenses(TSubclassOf<class AActor> SpawnedActorClass, float Radius, class UDebrisPositioning* DebrisPositioning, class UCurveFloat* AvoidCostCurve, int32 ExtraDefenses);
    void TurnOffLight__FinishedFunc();
    void TurnOffLight__UpdateFunc();
    void LightBreath__FinishedFunc();
    void LightBreath__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__HackingUsable_K2Node_ComponentBoundEvent_0_HackedDelegate__DelegateSignature(class APlayerCharacter* InHackedBy);
    void OnTurretDeath_Event(class UHealthComponentBase* HealthComponent);
    void ShutDown();
    void ExecuteUbergraph_BP_RivalFortifiedNode(int32 EntryPoint);
};

#endif
