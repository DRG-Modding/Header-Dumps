// BlueprintGeneratedClass BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Damage_Cloud_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x228(0x08)
	struct UParticleSystemComponent* AcidCloud; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float TriggerGrowth_Size_1DEB14DB4E8233F87D25DBAB1B0C1325; // 0x248(0x04)
	char TriggerGrowth__Direction_1DEB14DB4E8233F87D25DBAB1B0C1325; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* TriggerGrowth; // 0x250(0x08)
	float LifeTime; // 0x258(0x04)
	float ParticleDeactivationAdvance; // 0x25c(0x04)
	float TriggerRadius; // 0x260(0x04)

	void UserConstructionScript(); // Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UserConstructionScript
	void TriggerGrowth__FinishedFunc(); // Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__FinishedFunc
	void TriggerGrowth__UpdateFunc(); // Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Damage_Cloud_Base(int32_t EntryPoint); // Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Base
};

