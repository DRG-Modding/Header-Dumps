// BlueprintGeneratedClass BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C
// Size: 0x50 (Inherited: 0x30)
struct UBP_AutoReloadPerkActivation_C : UFloatPerkActivation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct UInventoryComponent* Inventory; // 0x38(0x08)
	float Duration; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct APlayerCharacter* Character; // 0x48(0x08)

	void Receive_ActivatePerk(struct APlayerCharacter* Character, float Value); // Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.Receive_ActivatePerk
	void OnItemEquipped_Event_1(struct AItem* Item); // Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.OnItemEquipped_Event_1
	void ExecuteUbergraph_BP_AutoReloadPerkActivation(int32_t EntryPoint); // Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.ExecuteUbergraph_BP_AutoReloadPerkActivation
};

