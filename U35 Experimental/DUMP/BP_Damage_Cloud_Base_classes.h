// BlueprintGeneratedClass BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Damage_Cloud_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x228(0x08)
	UParticleSystemComponent* AcidCloud; // 0x230(0x08)
	USphereComponent* Sphere; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float TriggerGrowth_Size_1DEB14DB4E8233F87D25DBAB1B0C1325; // 0x248(0x04)
	enum class ETimelineDirection TriggerGrowth__Direction_1DEB14DB4E8233F87D25DBAB1B0C1325; // 0x24c(0x01)
	UTimelineComponent* TriggerGrowth; // 0x250(0x08)
	float LifeTime; // 0x258(0x04)
	float ParticleDeactivationAdvance; // 0x25c(0x04)
	float TriggerRadius; // 0x260(0x04)

	void UserConstructionScript();
	void TriggerGrowth__FinishedFunc();
	void TriggerGrowth__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Damage_Cloud_Base(int32_t EntryPoint);
};

