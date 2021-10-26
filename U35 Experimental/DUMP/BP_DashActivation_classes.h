// BlueprintGeneratedClass BP_DashActivation.BP_DashActivation_C
// Size: 0x38 (Inherited: 0x30)
struct UBP_DashActivation_C : USetCooldownPerkActivation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)

	void Receive_ActivatePerk(APlayerCharacter* Character, float Value);
	void ExecuteUbergraph_BP_DashActivation(int32_t EntryPoint);
};

