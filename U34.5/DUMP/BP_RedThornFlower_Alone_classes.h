// BlueprintGeneratedClass BP_RedThornFlower_Alone.BP_RedThornFlower_Alone_C
// Size: 0x2b4 (Inherited: 0x220)
struct ABP_RedThornFlower_Alone_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	UStaticMeshComponent* SM_LightCone001; // 0x230(0x08)
	UCapsuleComponent* CapsuleCollision; // 0x238(0x08)
	UPathfinderCollisionComponent* PathfinderCollision1; // 0x240(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x248(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	UPointLightComponent* PointLight; // 0x258(0x08)
	UStaticMeshComponent* SM_RedVinesFlower_Body_01; // 0x260(0x08)
	UStaticMeshComponent* SM_RedVinesFlower_Head_01; // 0x268(0x08)
	USceneComponent* Flower; // 0x270(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x278(0x08)
	USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	FRandomStream Random Seed Stream; // 0x288(0x08)
	FRotator Spike Direction; // 0x290(0x0c)
	FVector Spike Origin; // 0x29c(0x0c)
	float Spike Distribution Angle; // 0x2a8(0x04)
	int32_t NumSpikes; // 0x2ac(0x04)
	float Spike Origin Height; // 0x2b0(0x04)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
	void ExecuteUbergraph_BP_RedThornFlower_Alone(int32_t EntryPoint);
};

