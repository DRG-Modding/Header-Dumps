// BlueprintGeneratedClass BP_Refinery_ProjectorLight.BP_Refinery_ProjectorLight_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Refinery_ProjectorLight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box1; // 0x228(0x08)
	struct UBoxComponent* Box; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh4; // 0x238(0x08)
	struct USpotLightComponent* SpotLight; // 0x240(0x08)
	struct UStaticMeshComponent* ST_Floodlight_Small; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function BP_Refinery_ProjectorLight.BP_Refinery_ProjectorLight_C.ReceiveBeginPlay
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState); // Function BP_Refinery_ProjectorLight.BP_Refinery_ProjectorLight_C.OnRefineryStateChanged
	void ExecuteUbergraph_BP_Refinery_ProjectorLight(int32_t EntryPoint); // Function BP_Refinery_ProjectorLight.BP_Refinery_ProjectorLight_C.ExecuteUbergraph_BP_Refinery_ProjectorLight
};

