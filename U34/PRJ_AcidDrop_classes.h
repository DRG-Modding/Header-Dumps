// BlueprintGeneratedClass PRJ_AcidDrop.PRJ_AcidDrop_C
// Size: 0x300 (Inherited: 0x2f0)
struct APRJ_AcidDrop_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UParticleSystem* Impact Particles; // 0x2f8(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_AcidDrop.PRJ_AcidDrop_C.OnImpacted
	void ExecuteUbergraph_PRJ_AcidDrop(int32_t EntryPoint); // Function PRJ_AcidDrop.PRJ_AcidDrop_C.ExecuteUbergraph_PRJ_AcidDrop
};

