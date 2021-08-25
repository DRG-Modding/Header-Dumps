// BlueprintGeneratedClass BP_Phys_Crate_F.BP_Phys_Crate_F_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_Phys_Crate_F_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UCapsuleComponent* BarrelRiderCollission; // 0x228(0x08)
	struct UGravityChangedComponent* GravityChanged; // 0x230(0x08)
	struct UInstantUsable* InstantUsable; // 0x238(0x08)
	struct UCapsuleComponent* UseCapsule; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x248(0x08)
	bool CanTriggerSound; // 0x250(0x01)
	char UnknownData_251[0x3]; // 0x251(0x03)
	struct FVector KickSoundLocation; // 0x254(0x0c)
	struct APlayerCharacter* KickedBy; // 0x260(0x08)
	bool KickedIntoHoop; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct UFSDAchievement* BarrelRiderAchievement; // 0x270(0x08)
	float RideBeginTime; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct APlayerCharacter* CurrentRider; // 0x280(0x08)
	struct USoundBase* ImpactSound; // 0x288(0x08)
	struct USoundBase* KickSound; // 0x290(0x08)

	void OnRep_KickSoundLocation(); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.OnRep_KickSoundLocation
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.ReceiveBeginPlay
	void destroy(); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.destroy
	void DestroyOvertime(); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.DestroyOvertime
	void Play_Kick(struct APlayerCharacter* Kicker); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.Play_Kick
	void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_Phys_Crate_F(int32_t EntryPoint); // Function BP_Phys_Crate_F.BP_Phys_Crate_F_C.ExecuteUbergraph_BP_Phys_Crate_F
};

