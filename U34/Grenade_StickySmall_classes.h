// BlueprintGeneratedClass Grenade_StickySmall.Grenade_StickySmall_C
// Size: 0x328 (Inherited: 0x314)
struct AGrenade_StickySmall_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDamageComponent* BluntDamage; // 0x320(0x08)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_StickySmall.Grenade_StickySmall_C.AddGearStateEntries
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_StickySmall.Grenade_StickySmall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function Grenade_StickySmall.Grenade_StickySmall_C.ReceiveBeginPlay
	void ExecuteUbergraph_Grenade_StickySmall(int32_t EntryPoint); // Function Grenade_StickySmall.Grenade_StickySmall_C.ExecuteUbergraph_Grenade_StickySmall
};

