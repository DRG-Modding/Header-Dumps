// BlueprintGeneratedClass Grenade_Axe.Grenade_Axe_C
// Size: 0x32c (Inherited: 0x314)
struct AGrenade_Axe_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDamageComponent* BluntDamage; // 0x320(0x08)
	float BladeExtentionDelay; // 0x328(0x04)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_Axe.Grenade_Axe_C.AddGearStateEntries
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Grenade_Axe.Grenade_Axe_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function Grenade_Axe.Grenade_Axe_C.ReceiveBeginPlay
	void ExecuteUbergraph_Grenade_Axe(int32_t EntryPoint); // Function Grenade_Axe.Grenade_Axe_C.ExecuteUbergraph_Grenade_Axe
};

