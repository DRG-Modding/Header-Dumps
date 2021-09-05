// BlueprintGeneratedClass BP_Refinery_Lamp.BP_Refinery_Lamp_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Refinery_Lamp_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
	UStaticMeshComponent* Lamp Mesh; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Refinery_Lamp(int32_t EntryPoint);
};

