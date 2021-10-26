// BlueprintGeneratedClass BP_Hologram_Hoxxes.BP_Hologram_Hoxxes_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Hologram_Hoxxes_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	UStaticMeshComponent* StaticMeshComponent1; // 0x230(0x08)
	UStaticMeshComponent* StaticMeshComponent0; // 0x238(0x08)
	USceneComponent* SharedRoot; // 0x240(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Hologram_Hoxxes(int32_t EntryPoint);
};

