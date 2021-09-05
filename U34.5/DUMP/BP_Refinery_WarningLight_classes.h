// BlueprintGeneratedClass BP_Refinery_WarningLight.BP_Refinery_WarningLight_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_Refinery_WarningLight_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UStaticMeshComponent* ST_Refinery_WarningLight; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void ReceiveBeginPlay();
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	void ExecuteUbergraph_BP_Refinery_WarningLight(int32_t EntryPoint);
};

