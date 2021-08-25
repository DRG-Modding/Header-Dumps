// BlueprintGeneratedClass BP_Phys_Bauble01.BP_Phys_Bauble01_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_Phys_Bauble01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Mesh; // 0x228(0x08)
	struct UCapsuleComponent* UseCapsule; // 0x230(0x08)
	struct UGravityChangedComponent* GravityChanged; // 0x238(0x08)
	struct UInstantUsable* InstantUsable; // 0x240(0x08)
	bool CanTriggerSound; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	struct FVector KickSoundLocation; // 0x24c(0x0c)
	struct APlayerCharacter* KickedBy; // 0x258(0x08)
	struct TArray<struct UStaticMesh*> MeshesToChooseFrom; // 0x260(0x10)
	struct TArray<struct UMaterialInterface*> Mats_Wrapper; // 0x270(0x10)
	int32_t NumberOfImpacts; // 0x280(0x04)

	void OnRep_KickSoundLocation(); // Function BP_Phys_Bauble01.BP_Phys_Bauble01_C.OnRep_KickSoundLocation
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Phys_Bauble01.BP_Phys_Bauble01_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Phys_Bauble01.BP_Phys_Bauble01_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Phys_Bauble01.BP_Phys_Bauble01_C.ReceiveBeginPlay
	void Play_Kick(struct APlayerCharacter* Kicker); // Function BP_Phys_Bauble01.BP_Phys_Bauble01_C.Play_Kick
	void ExecuteUbergraph_BP_Phys_Bauble01(int32_t EntryPoint); // Function BP_Phys_Bauble01.BP_Phys_Bauble01_C.ExecuteUbergraph_BP_Phys_Bauble01
};

