// BlueprintGeneratedClass BP_Spider_AcidCloud.BP_Spider_AcidCloud_C
// Size: 0x288 (Inherited: 0x264)
struct ABP_Spider_AcidCloud_C : ABP_Damage_Cloud_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UStatusEffectsComponent* StatusEffects; // 0x270(0x08)
	UDamageComponent* Damage; // 0x278(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x280(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_Spider_AcidCloud(int32_t EntryPoint);
};

