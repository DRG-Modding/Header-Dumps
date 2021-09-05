// BlueprintGeneratedClass Grenade_StickySmall.Grenade_StickySmall_C
// Size: 0x328 (Inherited: 0x314)
struct AGrenade_StickySmall_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	UDamageComponent* BluntDamage; // 0x320(0x08)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Grenade_StickySmall(int32_t EntryPoint);
};

