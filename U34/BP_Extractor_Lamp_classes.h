// BlueprintGeneratedClass BP_Extractor_Lamp.BP_Extractor_Lamp_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Extractor_Lamp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UBoxComponent* Box; // 0x230(0x08)
	struct UStaticMeshComponent* Lamp Mesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void OnRefineryStateChanged(enum class ERefineryState InRefineryState); // Function BP_Extractor_Lamp.BP_Extractor_Lamp_C.OnRefineryStateChanged
	void ReceiveBeginPlay(); // Function BP_Extractor_Lamp.BP_Extractor_Lamp_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Extractor_Lamp(int32_t EntryPoint); // Function BP_Extractor_Lamp.BP_Extractor_Lamp_C.ExecuteUbergraph_BP_Extractor_Lamp
};

