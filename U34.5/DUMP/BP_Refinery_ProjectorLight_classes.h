// BlueprintGeneratedClass BP_Refinery_ProjectorLight.BP_Refinery_ProjectorLight_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Refinery_ProjectorLight_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBoxComponent* Box1; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
	UStaticMeshComponent* StaticMesh4; // 0x238(0x08)
	USpotLightComponent* SpotLight; // 0x240(0x08)
	UStaticMeshComponent* ST_Floodlight_Small; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay();
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	void ExecuteUbergraph_BP_Refinery_ProjectorLight(int32_t EntryPoint);
};

