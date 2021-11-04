// BlueprintGeneratedClass BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C
// Size: 0x50 (Inherited: 0x30)
struct UBP_AutoReloadPerkActivation_C : UFloatPerkActivation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	UInventoryComponent* Inventory; // 0x38(0x08)
	float Duration; // 0x40(0x04)
	APlayerCharacter* Character; // 0x48(0x08)

	void Receive_ActivatePerk(APlayerCharacter* Character, float Value);
	void OnItemEquipped_Event_1(AItem* Item);
	void ExecuteUbergraph_BP_AutoReloadPerkActivation(int32_t EntryPoint);
};

