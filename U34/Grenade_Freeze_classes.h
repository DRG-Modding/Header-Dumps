// BlueprintGeneratedClass Grenade_Freeze.Grenade_Freeze_C
// Size: 0x340 (Inherited: 0x314)
struct AGrenade_Freeze_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USphereComponent* Sphere; // 0x320(0x08)
	struct UDamageComponent* Damage; // 0x328(0x08)
	struct UParticleSystem* TriggerEffect; // 0x330(0x08)
	struct USoundCue* TriggerSound; // 0x338(0x08)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_Freeze.Grenade_Freeze_C.AddGearStateEntries
	void OnExploded(); // Function Grenade_Freeze.Grenade_Freeze_C.OnExploded
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Grenade_Freeze.Grenade_Freeze_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void ExecuteUbergraph_Grenade_Freeze(int32_t EntryPoint); // Function Grenade_Freeze.Grenade_Freeze_C.ExecuteUbergraph_Grenade_Freeze
};

