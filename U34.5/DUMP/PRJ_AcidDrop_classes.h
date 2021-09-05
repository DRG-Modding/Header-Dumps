// BlueprintGeneratedClass PRJ_AcidDrop.PRJ_AcidDrop_C
// Size: 0x300 (Inherited: 0x2f0)
struct APRJ_AcidDrop_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UParticleSystem* Impact Particles; // 0x2f8(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_AcidDrop(int32_t EntryPoint);
};

