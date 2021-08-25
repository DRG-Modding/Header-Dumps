// BlueprintGeneratedClass BP_Azure_CombaCharm.BP_Azure_CombaCharm_C
// Size: 0x29d (Inherited: 0x220)
struct ABP_Azure_CombaCharm_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x230(0x08)
	struct UStaticMeshComponent* SM_Biome_AzureWeald_Flower_BigEgg_01; // 0x238(0x08)
	struct UAudioComponent* CombaCharmIdle; // 0x240(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x248(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x250(0x08)
	struct UStaticMeshComponent* Biome_AzureWeald_Flower_BigEgg; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Glowtimeline_Glow_3F65C7DD4A6637F8B110998EAD89619E; // 0x280(0x04)
	char Glowtimeline__Direction_3F65C7DD4A6637F8B110998EAD89619E; // 0x284(0x01)
	char UnknownData_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Glowtimeline; // 0x288(0x08)
	struct UMaterialInstanceDynamic* GlowMat; // 0x290(0x08)
	float BaseGlow; // 0x298(0x04)
	bool Glow; // 0x29c(0x01)

	void OnRep_Glow(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.OnRep_Glow
	void UserConstructionScript(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.UserConstructionScript
	void Glowtimeline__FinishedFunc(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.Glowtimeline__FinishedFunc
	void Glowtimeline__UpdateFunc(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.Glowtimeline__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.ReceiveBeginPlay
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void DoGlow(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.DoGlow
	void StopGlow(); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.StopGlow
	void PlayerClose(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.PlayerClose
	void ExecuteUbergraph_BP_Azure_CombaCharm(int32_t EntryPoint); // Function BP_Azure_CombaCharm.BP_Azure_CombaCharm_C.ExecuteUbergraph_BP_Azure_CombaCharm
};

