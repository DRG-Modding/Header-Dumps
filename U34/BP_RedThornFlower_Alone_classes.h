// BlueprintGeneratedClass BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C
// Size: 0x2b4 (Inherited: 0x220)
struct ABP_RedThornFlower_Alone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	struct UStaticMeshComponent* SM_LightCone001; // 0x230(0x08)
	struct UCapsuleComponent* CapsuleCollision; // 0x238(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision1; // 0x240(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x248(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	struct UPointLightComponent* PointLight; // 0x258(0x08)
	struct UStaticMeshComponent* SM_RedVinesFlower_Body_01; // 0x260(0x08)
	struct UStaticMeshComponent* SM_RedVinesFlower_Head_01; // 0x268(0x08)
	struct USceneComponent* Flower; // 0x270(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct FRandomStream Random Seed Stream; // 0x288(0x08)
	struct FRotator Spike Direction; // 0x290(0x0c)
	struct FVector Spike Origin; // 0x29c(0x0c)
	float Spike Distribution Angle; // 0x2a8(0x04)
	int32_t NumSpikes; // 0x2ac(0x04)
	float Spike Origin Height; // 0x2b0(0x04)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C.ReceiveBeginPlay
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health); // Function BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
	void ExecuteUbergraph_BP_RedThornFlower_Alone(int32_t EntryPoint); // Function BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C.ExecuteUbergraph_BP_RedThornFlower_Alone
};

