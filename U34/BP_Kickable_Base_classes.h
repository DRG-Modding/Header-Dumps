// BlueprintGeneratedClass BP_Kickable_Base.BP_Kickable_Base_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_Kickable_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UGravityChangedComponent* GravityChanged; // 0x228(0x08)
	struct UInstantUsable* InstantUsable; // 0x230(0x08)
	struct UCapsuleComponent* Capsule; // 0x238(0x08)
	struct UStaticMeshComponent* Kickable Mesh; // 0x240(0x08)
	bool CanTriggerSound; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	struct FVector KickSoundLocation; // 0x24c(0x0c)
	struct APlayerCharacter* KickedBy; // 0x258(0x08)

	void OnRep_KickSoundLocation(); // Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay
	void destroy(); // Function BP_Kickable_Base.BP_Kickable_Base_C.destroy
	void DestroyOvertime(); // Function BP_Kickable_Base.BP_Kickable_Base_C.DestroyOvertime
	void Play_Kick(struct APlayerCharacter* Kicker); // Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick
	void BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
	void Set Is Interactable(bool Can interact); // Function BP_Kickable_Base.BP_Kickable_Base_C.Set Is Interactable
	void ExecuteUbergraph_BP_Kickable_Base(int32_t EntryPoint); // Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base
};

