// BlueprintGeneratedClass BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_PineconeSpawner_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	UStaticMeshComponent* U33_BiomPlant_Pinecone; // 0x238(0x08)
	USceneComponent* PineCones; // 0x240(0x08)
	UStaticMeshComponent* SM_HollowBoughBranch_05; // 0x248(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	UBillboardComponent* SpawnPoint; // 0x258(0x08)
	USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	AActor* ClassToSpawn; // 0x268(0x08)
	float FallChance; // 0x270(0x04)
	TArray<UStaticMeshComponent*> DeadCones; // 0x278(0x10)
	TArray<UStaticMeshComponent*> AliveCones; // 0x288(0x10)

	void OnRep_DeadCones();
	void SpawnPinecone(UStaticMeshComponent* PineCone);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PineconeSpawner_Base(int32_t EntryPoint);
};

