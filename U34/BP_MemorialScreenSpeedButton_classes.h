// BlueprintGeneratedClass BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C
// Size: 0x271 (Inherited: 0x220)
struct ABP_MemorialScreenSpeedButton_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x228(0x08)
	struct UPointLightComponent* PointLight; // 0x230(0x08)
	struct USphereComponent* UseSphere; // 0x238(0x08)
	struct USingleUsableComponent* SingleUsable; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float SearchRange; // 0x258(0x04)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct ABP_MemorialWall_C*> MyMemorialWalls; // 0x260(0x10)
	bool IsFast; // 0x270(0x01)

	void OnRep_IsFast(); // Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast
	void ReceiveBeginPlay(); // Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay
	void OnMatchStarted_Event_1(); // Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_MemorialScreenSpeedButton(int32_t EntryPoint); // Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton
};

