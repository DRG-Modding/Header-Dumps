// BlueprintGeneratedClass BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_PineconeSpawner_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct UStaticMeshComponent* U33_BiomPlant_Pinecone; // 0x238(0x08)
	struct USceneComponent* PineCones; // 0x240(0x08)
	struct UStaticMeshComponent* SM_HollowBoughBranch_05; // 0x248(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	struct UBillboardComponent* SpawnPoint; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct AActor* ClassToSpawn; // 0x268(0x08)
	float FallChance; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct TArray<struct UStaticMeshComponent*> DeadCones; // 0x278(0x10)
	struct TArray<struct UStaticMeshComponent*> AliveCones; // 0x288(0x10)

	void OnRep_DeadCones(); // Function BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C.OnRep_DeadCones
	void SpawnPinecone(struct UStaticMeshComponent* PineCone); // Function BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C.SpawnPinecone
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_PineconeSpawner_Base(int32_t EntryPoint); // Function BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C.ExecuteUbergraph_BP_PineconeSpawner_Base
};

