// BlueprintGeneratedClass BP_Bosco.BP_Bosco_C
// Size: 0x73c (Inherited: 0x6c8)
struct ABP_Bosco_C : ABosco {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x6d0(0x08)
	struct UChildActorComponent* StateDisplay; // 0x6d8(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x6e0(0x08)
	struct UBoxComponent* Box; // 0x6e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x6f0(0x08)
	struct UWidgetComponent* ReviveWidget; // 0x6f8(0x08)
	struct UStaticMeshComponent* LightConeMesh; // 0x700(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x708(0x08)
	struct UPlayerResourceComponent* PlayerResource; // 0x710(0x08)
	struct UOutlineComponent* outline; // 0x718(0x08)
	bool FoundEnemies; // 0x720(0x01)
	char UnknownData_721[0x7]; // 0x721(0x07)
	struct UParticleSystem* ScareParicles; // 0x728(0x08)
	struct USoundCue* ScareSound; // 0x730(0x08)
	float ScareDuration; // 0x738(0x04)

	void Handle Projectile diffs(struct FGearStatEntry Gear stat, enum class EItemPreviewStatus Cryo upgrade preview status, enum class EDamageUpgrade damage upgrade type, struct AFSDPlayerState* FSD player state, struct FGearStatEntry gear stat out); // Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function BP_Bosco.BP_Bosco_C.GetGearStatEntry
	void ScareEffect(); // Function BP_Bosco.BP_Bosco_C.ScareEffect
	bool OnTriggerAI(struct FName TriggerName); // Function BP_Bosco.BP_Bosco_C.OnTriggerAI
	void ReceiveBeginPlay(); // Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay
	void OnMessageAI(struct FName TriggerName); // Function BP_Bosco.BP_Bosco_C.OnMessageAI
	void SelfDestruct(); // Function BP_Bosco.BP_Bosco_C.SelfDestruct
	void StateChanged(enum class EDroneAIState aCurrentState); // Function BP_Bosco.BP_Bosco_C.StateChanged
	void ReceivePossessed(struct AController* NewController); // Function BP_Bosco.BP_Bosco_C.ReceivePossessed
	void ExecuteUbergraph_BP_Bosco(int32_t EntryPoint); // Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco
};

