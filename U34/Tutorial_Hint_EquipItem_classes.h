// BlueprintGeneratedClass Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C
// Size: 0x182 (Inherited: 0x170)
struct UTutorial_Hint_EquipItem_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)
	bool HasEquipped; // 0x180(0x01)
	enum class EItemCategory ItemCategory; // 0x181(0x01)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnInitialized
	void ItemEquipped(struct AItem* Item); // Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ItemEquipped
	void ReceiveOnHidden(); // Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnHidden
	void ExecuteUbergraph_Tutorial_Hint_EquipItem(int32_t EntryPoint); // Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ExecuteUbergraph_Tutorial_Hint_EquipItem
};

