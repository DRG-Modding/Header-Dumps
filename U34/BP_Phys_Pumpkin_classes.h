// BlueprintGeneratedClass BP_Phys_Pumpkin.BP_Phys_Pumpkin_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Phys_Pumpkin_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Mesh; // 0x228(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x230(0x08)
	struct UCapsuleComponent* UseCapsule; // 0x238(0x08)
	struct UGravityChangedComponent* GravityChanged; // 0x240(0x08)
	struct UInstantUsable* InstantUsable; // 0x248(0x08)
	bool CanTriggerSound; // 0x250(0x01)
	char UnknownData_251[0x3]; // 0x251(0x03)
	struct FVector KickSoundLocation; // 0x254(0x0c)
	struct APlayerCharacter* KickedBy; // 0x260(0x08)
	struct TArray<struct UStaticMesh*> MeshesToChooseFrom; // 0x268(0x10)
	struct UStaticMesh* NewVar_2; // 0x278(0x08)

	void OnRep_KickSoundLocation(); // Function BP_Phys_Pumpkin.BP_Phys_Pumpkin_C.OnRep_KickSoundLocation
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Phys_Pumpkin.BP_Phys_Pumpkin_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Phys_Pumpkin.BP_Phys_Pumpkin_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Phys_Pumpkin.BP_Phys_Pumpkin_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Phys_Pumpkin(int32_t EntryPoint); // Function BP_Phys_Pumpkin.BP_Phys_Pumpkin_C.ExecuteUbergraph_BP_Phys_Pumpkin
};

