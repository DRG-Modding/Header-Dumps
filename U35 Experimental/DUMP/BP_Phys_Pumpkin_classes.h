// BlueprintGeneratedClass BP_Phys_Pumpkin.BP_Phys_Pumpkin_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Phys_Pumpkin_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Mesh; // 0x228(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x230(0x08)
	UCapsuleComponent* UseCapsule; // 0x238(0x08)
	UGravityChangedComponent* GravityChanged; // 0x240(0x08)
	UInstantUsable* InstantUsable; // 0x248(0x08)
	bool CanTriggerSound; // 0x250(0x01)
	FVector KickSoundLocation; // 0x254(0x0c)
	APlayerCharacter* KickedBy; // 0x260(0x08)
	TArray<UStaticMesh*> MeshesToChooseFrom; // 0x268(0x10)
	UStaticMesh* NewVar_2; // 0x278(0x08)

	void OnRep_KickSoundLocation();
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Phys_Pumpkin(int32_t EntryPoint);
};

