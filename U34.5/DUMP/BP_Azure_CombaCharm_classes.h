// BlueprintGeneratedClass BP_Azure_CombaCharm.BP_Azure_CombaCharm_C
// Size: 0x29d (Inherited: 0x220)
struct ABP_Azure_CombaCharm_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x230(0x08)
	UStaticMeshComponent* SM_Biome_AzureWeald_Flower_BigEgg_01; // 0x238(0x08)
	UAudioComponent* CombaCharmIdle; // 0x240(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x248(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x250(0x08)
	UStaticMeshComponent* Biome_AzureWeald_Flower_BigEgg; // 0x258(0x08)
	UPointLightComponent* PointLight; // 0x260(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x270(0x08)
	USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Glowtimeline_Glow_3F65C7DD4A6637F8B110998EAD89619E; // 0x280(0x04)
	enum class ETimelineDirection Glowtimeline__Direction_3F65C7DD4A6637F8B110998EAD89619E; // 0x284(0x01)
	UTimelineComponent* Glowtimeline; // 0x288(0x08)
	UMaterialInstanceDynamic* GlowMat; // 0x290(0x08)
	float BaseGlow; // 0x298(0x04)
	bool Glow; // 0x29c(0x01)

	void OnRep_Glow();
	void UserConstructionScript();
	void Glowtimeline__FinishedFunc();
	void Glowtimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void DoGlow();
	void StopGlow();
	void PlayerClose(APlayerCharacter* Player, bool enteredTrigger);
	void ExecuteUbergraph_BP_Azure_CombaCharm(int32_t EntryPoint);
};

