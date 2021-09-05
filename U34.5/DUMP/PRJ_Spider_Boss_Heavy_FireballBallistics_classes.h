// BlueprintGeneratedClass PRJ_Spider_Boss_Heavy_FireballBallistics.PRJ_Spider_Boss_Heavy_FireballBallistics_C
// Size: 0x32c (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Heavy_FireballBallistics_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2f8(0x08)
	UDamageComponent* Damage; // 0x300(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x308(0x08)
	UParticleSystemComponent* ParticleComponent; // 0x310(0x08)
	UAudioComponent* Audio; // 0x318(0x08)
	UPointLightComponent* PointLight; // 0x320(0x08)
	float LightIntensity; // 0x328(0x04)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Spider_Boss_Heavy_FireballBallistics(int32_t EntryPoint);
};

