// BlueprintGeneratedClass Grenade_Lure.Grenade_Lure_C
// Size: 0x320 (Inherited: 0x314)
struct AGrenade_Lure_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_Lure.Grenade_Lure_C.AddGearStateEntries
	void OnExploded(); // Function Grenade_Lure.Grenade_Lure_C.OnExploded
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_Lure.Grenade_Lure_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void DoCustomExplosion(); // Function Grenade_Lure.Grenade_Lure_C.DoCustomExplosion
	void ExecuteUbergraph_Grenade_Lure(int32_t EntryPoint); // Function Grenade_Lure.Grenade_Lure_C.ExecuteUbergraph_Grenade_Lure
};

