// BlueprintGeneratedClass ITM_Grenade_Base.ITM_Grenade_Base_C
// Size: 0x314 (Inherited: 0x2a8)
struct AITM_Grenade_Base_C : AGrenade {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	UParticleSystemComponent* P_GrenadeTrail; // 0x2b0(0x08)
	UUpgradableGearComponent* UpgradableGear; // 0x2b8(0x08)
	UWidgetComponent* Widget; // 0x2c0(0x08)
	UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)
	UBoxComponent* Box; // 0x2d0(0x08)
	APlayerCharacter* Character; // 0x2d8(0x08)
	UDialogDataAsset* Grenade warning; // 0x2e0(0x08)
	float GrenadeLifetimeAfterExplosion; // 0x2e8(0x04)
	float DebugRadius; // 0x2ec(0x04)
	UParticleSystem* DelayedDestructionParticles; // 0x2f0(0x08)
	float InViewTime; // 0x2f8(0x04)
	float InitialAngularVelocityScale; // 0x2fc(0x04)
	USoundMix* ExplosionMixModifier; // 0x300(0x08)
	float ExplosionDuckingTime; // 0x308(0x04)
	float ExplosionDuckMinDistance; // 0x30c(0x04)
	float ExplosionDuckMaxDistance; // 0x310(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void OnExploded();
	void ExecuteUbergraph_ITM_Grenade_Base(int32_t EntryPoint);
};

