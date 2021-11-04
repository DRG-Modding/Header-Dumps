// BlueprintGeneratedClass BP_MainFacility_ShieldEmitter_Hologram.BP_MainFacility_ShieldEmitter_Hologram_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_MainFacility_ShieldEmitter_Hologram_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Hologram3; // 0x228(0x08)
	UStaticMeshComponent* Hologram2; // 0x230(0x08)
	UStaticMeshComponent* Hologram1; // 0x238(0x08)
	USceneComponent* TranslateRoot; // 0x240(0x08)
	USceneComponent* RotateRoot; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MainFacility_ShieldEmitter_Hologram(int32_t EntryPoint);
};

