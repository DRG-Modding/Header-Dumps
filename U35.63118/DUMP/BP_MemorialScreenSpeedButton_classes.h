// BlueprintGeneratedClass BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C
// Size: 0x271 (Inherited: 0x220)
struct ABP_MemorialScreenSpeedButton_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x228(0x08)
	UPointLightComponent* PointLight; // 0x230(0x08)
	USphereComponent* UseSphere; // 0x238(0x08)
	USingleUsableComponent* SingleUsable; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float SearchRange; // 0x258(0x04)
	TArray<ABP_MemorialWall_C*> MyMemorialWalls; // 0x260(0x10)
	bool IsFast; // 0x270(0x01)

	void OnRep_IsFast();
	void ReceiveBeginPlay();
	void OnMatchStarted_Event_1();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ExecuteUbergraph_BP_MemorialScreenSpeedButton(int32_t EntryPoint);
};

