// BlueprintGeneratedClass BP_Refinery_Rocketlamp.BP_Refinery_RocketLamp_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_Refinery_RocketLamp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight1; // 0x228(0x08)
	struct UBoxComponent* Box; // 0x230(0x08)
	struct UStaticMeshComponent* Lamp Mesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	enum class ERefineryState State; // 0x248(0x01)

	void ReceiveBeginPlay(); // Function BP_Refinery_Rocketlamp.BP_Refinery_RocketLamp_C.ReceiveBeginPlay
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState); // Function BP_Refinery_Rocketlamp.BP_Refinery_RocketLamp_C.OnRefineryStateChanged
	void ExecuteUbergraph_BP_Refinery_RocketLamp(int32_t EntryPoint); // Function BP_Refinery_Rocketlamp.BP_Refinery_RocketLamp_C.ExecuteUbergraph_BP_Refinery_RocketLamp
};

