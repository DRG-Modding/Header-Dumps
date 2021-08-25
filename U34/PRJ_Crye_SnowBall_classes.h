// BlueprintGeneratedClass PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Crye_SnowBall_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x300(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x310(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.OnImpacted
	void ExecuteUbergraph_PRJ_Crye_SnowBall(int32_t EntryPoint); // Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.ExecuteUbergraph_PRJ_Crye_SnowBall
};

