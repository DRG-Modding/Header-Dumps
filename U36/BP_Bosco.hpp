#ifndef UE4SS_SDK_BP_Bosco_HPP
#define UE4SS_SDK_BP_Bosco_HPP

class ABP_Bosco_C : public ABosco
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnStatsComponent* PawnStats;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UChildActorComponent* StateDisplay;
    class UActorTrackingComponent* ActorTracking;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    class UWidgetComponent* ReviveWidget;
    class UStaticMeshComponent* LightConeMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPlayerResourceComponent* PlayerResource;
    class UOutlineComponent* outline;
    bool FoundEnemies;
    class UParticleSystem* ScareParicles;
    class USoundCue* ScareSound;
    float ScareDuration;

    void Handle Projectile diffs(FGearStatEntry Gear stat, EItemPreviewStatus Cryo upgrade preview status, EDamageUpgrade damage upgrade type, class AFSDPlayerState* FSD player state, FGearStatEntry& gear stat out);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ScareEffect();
    bool OnTriggerAI(FName TriggerName);
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void SelfDestruct();
    void StateChanged(EDroneAIState aCurrentState);
    void ReceivePossessed(class AController* NewController);
    void ExecuteUbergraph_BP_Bosco(int32 EntryPoint);
};

#endif
