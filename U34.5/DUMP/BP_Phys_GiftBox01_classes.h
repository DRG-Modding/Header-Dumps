// BlueprintGeneratedClass BP_Phys_GiftBox01.BP_Phys_GiftBox01_C
// Size: 0x29c (Inherited: 0x220)
struct ABP_Phys_GiftBox01_C : AActor {
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
	TArray<UMaterialInterface*> Mats_Wrapper; // 0x278(0x10)
	TArray<UMaterialInterface*> Mats_Note; // 0x288(0x10)
	int32_t RandomPresentSound; // 0x298(0x04)

	void OnRep_KickSoundLocation();
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ReceiveBeginPlay();
	void Play_Kick(APlayerCharacter* Kicker);
	void ExecuteUbergraph_BP_Phys_GiftBox01(int32_t EntryPoint);
};

