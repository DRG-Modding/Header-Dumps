// BlueprintGeneratedClass BP_Bosco.BP_Bosco_C
// Size: 0x73c (Inherited: 0x6c8)
struct ABP_Bosco_C : ABosco {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x6d0(0x08)
	UChildActorComponent* StateDisplay; // 0x6d8(0x08)
	UActorTrackingComponent* ActorTracking; // 0x6e0(0x08)
	UBoxComponent* Box; // 0x6e8(0x08)
	UStaticMeshComponent* StaticMesh; // 0x6f0(0x08)
	UWidgetComponent* ReviveWidget; // 0x6f8(0x08)
	UStaticMeshComponent* LightConeMesh; // 0x700(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x708(0x08)
	UPlayerResourceComponent* PlayerResource; // 0x710(0x08)
	UOutlineComponent* outline; // 0x718(0x08)
	bool FoundEnemies; // 0x720(0x01)
	UParticleSystem* ScareParicles; // 0x728(0x08)
	USoundCue* ScareSound; // 0x730(0x08)
	float ScareDuration; // 0x738(0x04)

	void Handle Projectile diffs(FGearStatEntry Gear stat, enum class EItemPreviewStatus Cryo upgrade preview status, enum class EDamageUpgrade damage upgrade type, AFSDPlayerState* FSD player state, FGearStatEntry gear stat out);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ScareEffect();
	bool OnTriggerAI(FName TriggerName);
	void ReceiveBeginPlay();
	void OnMessageAI(FName TriggerName);
	void SelfDestruct();
	void StateChanged(enum class EDroneAIState aCurrentState);
	void ReceivePossessed(AController* NewController);
	void ExecuteUbergraph_BP_Bosco(int32_t EntryPoint);
};

