// BlueprintGeneratedClass Grenade_Axe.Grenade_Axe_C
// Size: 0x32c (Inherited: 0x314)
struct AGrenade_Axe_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	UDamageComponent* BluntDamage; // 0x320(0x08)
	float BladeExtentionDelay; // 0x328(0x04)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Grenade_Axe(int32_t EntryPoint);
};

