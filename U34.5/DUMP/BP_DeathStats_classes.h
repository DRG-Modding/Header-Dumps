// BlueprintGeneratedClass BP_DeathStats.BP_DeathStats_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_DeathStats_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Cube; // 0x228(0x08)
	UWidgetComponent* Widget; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void Set Stats Owner(AFSDPlayerState* Player State);
	void ExecuteUbergraph_BP_DeathStats(int32_t EntryPoint);
};

