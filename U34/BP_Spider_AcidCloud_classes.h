// BlueprintGeneratedClass BP_Spider_AcidCloud.BP_Spider_AcidCloud_C
// Size: 0x288 (Inherited: 0x264)
struct ABP_Spider_AcidCloud_C : ABP_Damage_Cloud_Base_C {
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UStatusEffectsComponent* StatusEffects; // 0x270(0x08)
	struct UDamageComponent* Damage; // 0x278(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x280(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_Spider_AcidCloud.BP_Spider_AcidCloud_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ExecuteUbergraph_BP_Spider_AcidCloud(int32_t EntryPoint); // Function BP_Spider_AcidCloud.BP_Spider_AcidCloud_C.ExecuteUbergraph_BP_Spider_AcidCloud
};

