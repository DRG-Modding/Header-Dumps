// BlueprintGeneratedClass BP_Pipeline_Build_Hologram.BP_Pipeline_Build_Hologram_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Pipeline_Build_Hologram_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Hologram3; // 0x228(0x08)
	struct UStaticMeshComponent* Hologram2; // 0x230(0x08)
	struct UStaticMeshComponent* Hologram1; // 0x238(0x08)
	struct USceneComponent* TranslateRoot; // 0x240(0x08)
	struct USceneComponent* RotateRoot; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP_Pipeline_Build_Hologram.BP_Pipeline_Build_Hologram_C.ReceiveTick
	void ExecuteUbergraph_BP_Pipeline_Build_Hologram(int32_t EntryPoint); // Function BP_Pipeline_Build_Hologram.BP_Pipeline_Build_Hologram_C.ExecuteUbergraph_BP_Pipeline_Build_Hologram
};

