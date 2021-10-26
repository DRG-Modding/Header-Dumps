// BlueprintGeneratedClass BP_Kickable_Base.BP_Kickable_Base_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_Kickable_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UGravityChangedComponent* GravityChanged; // 0x228(0x08)
	UInstantUsable* InstantUsable; // 0x230(0x08)
	UCapsuleComponent* Capsule; // 0x238(0x08)
	UStaticMeshComponent* Kickable Mesh; // 0x240(0x08)
	bool CanTriggerSound; // 0x248(0x01)
	FVector KickSoundLocation; // 0x24c(0x0c)
	APlayerCharacter* KickedBy; // 0x258(0x08)

	void OnRep_KickSoundLocation();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ReceiveBeginPlay();
	void destroy();
	void DestroyOvertime();
	void Play_Kick(APlayerCharacter* Kicker);
	void BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void Set Is Interactable(bool Can interact);
	void ExecuteUbergraph_BP_Kickable_Base(int32_t EntryPoint);
};

