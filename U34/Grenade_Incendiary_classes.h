// BlueprintGeneratedClass Grenade_Incendiary.Grenade_Incendiary_C
// Size: 0x350 (Inherited: 0x314)
struct AGrenade_Incendiary_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDamageComponent* Damage; // 0x320(0x08)
	struct USphereComponent* Sphere; // 0x328(0x08)
	struct UAreaSpawnerComponent* AreaSpawner; // 0x330(0x08)
	float Radius; // 0x338(0x04)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct UParticleSystem* TriggerEffect; // 0x340(0x08)
	struct USoundCue* TriggerSound; // 0x348(0x08)

	void SpawnFireOnGround(); // Function Grenade_Incendiary.Grenade_Incendiary_C.SpawnFireOnGround
	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_Incendiary.Grenade_Incendiary_C.AddGearStateEntries
	void OnExploded(); // Function Grenade_Incendiary.Grenade_Incendiary_C.OnExploded
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_Incendiary.Grenade_Incendiary_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void DoCustomExplosion(); // Function Grenade_Incendiary.Grenade_Incendiary_C.DoCustomExplosion
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Grenade_Incendiary.Grenade_Incendiary_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void ExecuteUbergraph_Grenade_Incendiary(int32_t EntryPoint); // Function Grenade_Incendiary.Grenade_Incendiary_C.ExecuteUbergraph_Grenade_Incendiary
};

