// BlueprintGeneratedClass Bar_Glass_Physics.Bar_Glass_Physics_C
// Size: 0x278 (Inherited: 0x228)
struct ABar_Glass_Physics_C : ABar_Glass_Physics_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	USphereComponent* Useable; // 0x230(0x08)
	UInstantUsable* InstantUsable; // 0x238(0x08)
	UGravityChangedComponent* GravityChanged; // 0x240(0x08)
	USphereComponent* Sphere; // 0x248(0x08)
	USkeletalMeshComponent* GlassMesh; // 0x250(0x08)
	UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	bool Thrown; // 0x260(0x01)
	ADrinkableItem* itemClass; // 0x268(0x08)
	APlayerCharacter* CurrentUser; // 0x270(0x08)

	void OnRep_Drinkable();
	void OnRep_Thrown();
	void UserConstructionScript();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void PlayKickSound();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void Throw(FVector fromLocation, FRotator NewRotation, AActor* Thrower);
	void ExecuteUbergraph_Bar_Glass_Physics(int32_t EntryPoint);
};

