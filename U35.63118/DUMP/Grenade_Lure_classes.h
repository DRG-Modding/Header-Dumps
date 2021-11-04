// BlueprintGeneratedClass Grenade_Lure.Grenade_Lure_C
// Size: 0x320 (Inherited: 0x314)
struct AGrenade_Lure_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void DoCustomExplosion();
	void ExecuteUbergraph_Grenade_Lure(int32_t EntryPoint);
};

