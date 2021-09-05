// BlueprintGeneratedClass BP_Refinery_Rocketlamp.BP_Refinery_RocketLamp_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_Refinery_RocketLamp_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight1; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
	UStaticMeshComponent* Lamp Mesh; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	enum class ERefineryState State; // 0x248(0x01)

	void ReceiveBeginPlay();
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	void ExecuteUbergraph_BP_Refinery_RocketLamp(int32_t EntryPoint);
};

