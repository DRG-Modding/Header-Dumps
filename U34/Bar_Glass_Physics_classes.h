// BlueprintGeneratedClass Bar_Glass_Physics.Bar_Glass_Physics_C
// Size: 0x278 (Inherited: 0x228)
struct ABar_Glass_Physics_C : ABar_Glass_Physics_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USphereComponent* Useable; // 0x230(0x08)
	struct UInstantUsable* InstantUsable; // 0x238(0x08)
	struct UGravityChangedComponent* GravityChanged; // 0x240(0x08)
	struct USphereComponent* Sphere; // 0x248(0x08)
	struct USkeletalMeshComponent* GlassMesh; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	bool Thrown; // 0x260(0x01)
	char UnknownData_261[0x7]; // 0x261(0x07)
	struct ADrinkableItem* itemClass; // 0x268(0x08)
	struct APlayerCharacter* CurrentUser; // 0x270(0x08)

	void OnRep_Drinkable(); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.OnRep_Drinkable
	void OnRep_Thrown(); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.OnRep_Thrown
	void UserConstructionScript(); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.UserConstructionScript
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void PlayKickSound(); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.PlayKickSound
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void Throw(struct FVector fromLocation, struct FRotator NewRotation, struct AActor* Thrower); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.Throw
	void ExecuteUbergraph_Bar_Glass_Physics(int32_t EntryPoint); // Function Bar_Glass_Physics.Bar_Glass_Physics_C.ExecuteUbergraph_Bar_Glass_Physics
};

