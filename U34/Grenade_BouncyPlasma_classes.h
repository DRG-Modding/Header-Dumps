// BlueprintGeneratedClass Grenade_BouncyPlasma.Grenade_BouncyPlasma_C
// Size: 0x33d (Inherited: 0x314)
struct AGrenade_BouncyPlasma_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USphereComponent* Sphere; // 0x320(0x08)
	struct UDamageComponent* Damage; // 0x328(0x08)
	int32_t ExplosionCount; // 0x330(0x04)
	int32_t MaxExplosions; // 0x334(0x04)
	float ConcecutiveExplosionsDelay; // 0x338(0x04)
	bool Exploded; // 0x33c(0x01)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.AddGearStateEntries
	void OnRep_ExplosionCount(); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.OnRep_ExplosionCount
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void TriggerExplosion(); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.TriggerExplosion
	void HideGrenade(); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.HideGrenade
	void ReceiveBeginPlay(); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.ReceiveBeginPlay
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void ExecuteUbergraph_Grenade_BouncyPlasma(int32_t EntryPoint); // Function Grenade_BouncyPlasma.Grenade_BouncyPlasma_C.ExecuteUbergraph_Grenade_BouncyPlasma
};

