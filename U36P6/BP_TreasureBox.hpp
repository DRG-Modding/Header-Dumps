#ifndef UE4SS_SDK_BP_TreasureBox_HPP
#define UE4SS_SDK_BP_TreasureBox_HPP

class ABP_TreasureBox_C : public ATreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UBoxComponent* UseBox;
    class UBoxComponent* Box;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UAudioComponent* ChestIdle_Cue;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* LightCone;
    class USpotLightComponent* SpotLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UParticleSystemComponent* P_TreasureChest_HolloStreaks;
    class USceneComponent* Minerals Spawn Point;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* BackPlane;
    float TurnDownLight_NewTrack_0_1A0AF79145F35FAD9E2421B320EBDF90;
    TEnumAsByte<ETimelineDirection::Type> TurnDownLight__Direction_1A0AF79145F35FAD9E2421B320EBDF90;
    class UTimelineComponent* TurnDownLight;
    float TurnUpLight_NewTrack_0_7FB98785445BF3786932D7B67BEC0DF8;
    TEnumAsByte<ETimelineDirection::Type> TurnUpLight__Direction_7FB98785445BF3786932D7B67BEC0DF8;
    class UTimelineComponent* TurnUpLight;
    float Grow_Hologram_Y_9A21ED754CE563FC34120DB5BCEE177C;
    float Grow_Hologram_X_9A21ED754CE563FC34120DB5BCEE177C;
    float Grow_Hologram_Z_9A21ED754CE563FC34120DB5BCEE177C;
    TEnumAsByte<ETimelineDirection::Type> Grow_Hologram__Direction_9A21ED754CE563FC34120DB5BCEE177C;
    class UTimelineComponent* Grow Hologram;
    class UParticleSystem* ActivatedParticles;
    class USoundCue* ActivatedSound;
    TArray<class UResourceData*> Loot;
    FVector2D ChunkValueRange;
    FVector2D ChunkCountRange;
    TArray<class UResourceData*> ResourceTypes;
    int32 ResourcesToSpawn;
    bool Hammered;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FColor InsertedBatteriesColor;
    FColor OpenedColor;
    class UAudioComponent* IdleSound;
    bool BatteryInserted;

    void OnRep_BatteryInserted();
    void GetTotalTimePlayed(int32& TotalTimePlayed);
    void OnRep_Hammered();
    void Grow Hologram__FinishedFunc();
    void Grow Hologram__UpdateFunc();
    void TurnUpLight__FinishedFunc();
    void TurnUpLight__UpdateFunc();
    void TurnDownLight__FinishedFunc();
    void TurnDownLight__UpdateFunc();
    void OnNotifyEnd_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnNotifyBegin_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnInterrupted_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnBlendOut_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnCompleted_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_4_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void SpawnChunks();
    void SetupLoop();
    void BndEvt__HammeringUsable_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__RepairUsable_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnLocalPlayerCollectedTreasure(class APlayerCharacter* Player);
    void OnDisableChestLocally();
    void All_PlayMusic();
    void Cheat_ForceRepair();
    void Cheat_ForceHammer();
    void ExecuteUbergraph_BP_TreasureBox(int32 EntryPoint);
};

#endif
