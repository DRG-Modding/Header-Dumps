// BlueprintGeneratedClass PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C
// Size: 0x368 (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Twin_Mine_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UParticleSystemComponent* P_Twins_Mine_Trail; // 0x2f8(0x08)
	struct UAudioComponent* Twin_B_ProjectileBarrage_Cue; // 0x300(0x08)
	struct UStaticMeshComponent* Mesh_Range_hidden; // 0x308(0x08)
	struct UDamageComponent* Damage; // 0x310(0x08)
	struct UFirstPersonStaticMeshComponent* ProjectileMesh; // 0x318(0x08)
	struct UPointLightComponent* AreaLight; // 0x320(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_0_1; // 0x328(0x10)
	bool HasExploded; // 0x338(0x01)
	char UnknownData_339[0x7]; // 0x339(0x07)
	struct UParticleSystem* Explosion Particles; // 0x340(0x08)
	struct USoundBase* ExplosionSound; // 0x348(0x08)
	float TimeToExplode; // 0x350(0x04)
	char UnknownData_354[0x4]; // 0x354(0x04)
	struct USoundBase* ImpactSound; // 0x358(0x08)
	struct USoundBase* WarningLoopCue; // 0x360(0x08)

	void OnRep_HasExploded(); // Function PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C.OnRep_HasExploded
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C.OnImpacted
	void ReceiveBeginPlay(); // Function PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C.ReceiveBeginPlay
	void All_Impact(struct FVector_NetQuantize Location); // Function PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C.All_Impact
	void ExecuteUbergraph_PRJ_Spider_Boss_Twin_Mine(int32_t EntryPoint); // Function PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C.ExecuteUbergraph_PRJ_Spider_Boss_Twin_Mine
	void NewEventDispatcher_0_0__DelegateSignature(); // Function PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C.NewEventDispatcher_0_0__DelegateSignature
};

