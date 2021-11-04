// BlueprintGeneratedClass BP_HackerJunk_Base.BP_HackerJunk_Base_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_HackerJunk_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	UBoxComponent* BoxCollision; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	TArray<UStaticMesh*> Meshes; // 0x240(0x10)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HackerJunk_Base(int32_t EntryPoint);
};

