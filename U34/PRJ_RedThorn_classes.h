// BlueprintGeneratedClass PRJ_RedThorn.PRJ_RedThorn_C
// Size: 0x310 (Inherited: 0x2f0)
struct APRJ_RedThorn_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct UParticleSystemComponent* P_CactusSpikeTrail1; // 0x300(0x08)
	struct UStaticMeshComponent* SM_CactusSpikeProjectile; // 0x308(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_RedThorn.PRJ_RedThorn_C.OnImpacted
	void ExecuteUbergraph_PRJ_RedThorn(int32_t EntryPoint); // Function PRJ_RedThorn.PRJ_RedThorn_C.ExecuteUbergraph_PRJ_RedThorn
};

