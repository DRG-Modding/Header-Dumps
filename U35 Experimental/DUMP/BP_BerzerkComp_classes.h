// BlueprintGeneratedClass BP_BerzerkComp.BP_BerzerkComp_C
// Size: 0x38 (Inherited: 0x30)
struct UBP_BerzerkComp_C : UFloatPerkActivation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)

	void Receive_ActivatePerk(APlayerCharacter* Character, float Value);
	void OnItemEquipped_Event_1(AItem* Item);
	void ExecuteUbergraph_BP_BerzerkComp(int32_t EntryPoint);
};

