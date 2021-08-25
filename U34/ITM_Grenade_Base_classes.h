// BlueprintGeneratedClass ITM_Grenade_Base.ITM_Grenade_Base_C
// Size: 0x314 (Inherited: 0x2a8)
struct AITM_Grenade_Base_C : AGrenade {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UParticleSystemComponent* P_GrenadeTrail; // 0x2b0(0x08)
	struct UUpgradableGearComponent* UpgradableGear; // 0x2b8(0x08)
	struct UWidgetComponent* Widget; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)
	struct UBoxComponent* Box; // 0x2d0(0x08)
	struct APlayerCharacter* Character; // 0x2d8(0x08)
	struct UDialogDataAsset* Grenade warning; // 0x2e0(0x08)
	float GrenadeLifetimeAfterExplosion; // 0x2e8(0x04)
	float DebugRadius; // 0x2ec(0x04)
	struct UParticleSystem* DelayedDestructionParticles; // 0x2f0(0x08)
	float InViewTime; // 0x2f8(0x04)
	float InitialAngularVelocityScale; // 0x2fc(0x04)
	struct USoundMix* ExplosionMixModifier; // 0x300(0x08)
	float ExplosionDuckingTime; // 0x308(0x04)
	float ExplosionDuckMinDistance; // 0x30c(0x04)
	float ExplosionDuckMaxDistance; // 0x310(0x04)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function ITM_Grenade_Base.ITM_Grenade_Base_C.GetGearStatEntry
	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function ITM_Grenade_Base.ITM_Grenade_Base_C.AddGearStateEntries
	void ReceiveBeginPlay(); // Function ITM_Grenade_Base.ITM_Grenade_Base_C.ReceiveBeginPlay
	void OnExploded(); // Function ITM_Grenade_Base.ITM_Grenade_Base_C.OnExploded
	void ExecuteUbergraph_ITM_Grenade_Base(int32_t EntryPoint); // Function ITM_Grenade_Base.ITM_Grenade_Base_C.ExecuteUbergraph_ITM_Grenade_Base
};

