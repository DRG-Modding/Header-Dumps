// BlueprintGeneratedClass PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C
// Size: 0x368 (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Twin_Mine_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UParticleSystemComponent* P_Twins_Mine_Trail; // 0x2f8(0x08)
	UAudioComponent* Twin_B_ProjectileBarrage_Cue; // 0x300(0x08)
	UStaticMeshComponent* Mesh_Range_hidden; // 0x308(0x08)
	UDamageComponent* Damage; // 0x310(0x08)
	UFirstPersonStaticMeshComponent* ProjectileMesh; // 0x318(0x08)
	UPointLightComponent* AreaLight; // 0x320(0x08)
	FMulticastInlineDelegate NewEventDispatcher_0_1; // 0x328(0x10)
	bool HasExploded; // 0x338(0x01)
	UParticleSystem* Explosion Particles; // 0x340(0x08)
	USoundBase* ExplosionSound; // 0x348(0x08)
	float TimeToExplode; // 0x350(0x04)
	USoundBase* ImpactSound; // 0x358(0x08)
	USoundBase* WarningLoopCue; // 0x360(0x08)

	void OnRep_HasExploded();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ReceiveBeginPlay();
	void All_Impact(FVector_NetQuantize Location);
	void ExecuteUbergraph_PRJ_Spider_Boss_Twin_Mine(int32_t EntryPoint);
	void NewEventDispatcher_0_0__DelegateSignature();
};

