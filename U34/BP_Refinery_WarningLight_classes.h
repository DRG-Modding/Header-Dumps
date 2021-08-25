// BlueprintGeneratedClass BP_Refinery_WarningLight.BP_Refinery_WarningLight_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_Refinery_WarningLight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UStaticMeshComponent* ST_Refinery_WarningLight; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function BP_Refinery_WarningLight.BP_Refinery_WarningLight_C.ReceiveBeginPlay
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState); // Function BP_Refinery_WarningLight.BP_Refinery_WarningLight_C.OnRefineryStateChanged
	void ExecuteUbergraph_BP_Refinery_WarningLight(int32_t EntryPoint); // Function BP_Refinery_WarningLight.BP_Refinery_WarningLight_C.ExecuteUbergraph_BP_Refinery_WarningLight
};

