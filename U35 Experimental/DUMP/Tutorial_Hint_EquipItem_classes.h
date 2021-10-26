// BlueprintGeneratedClass Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C
// Size: 0x182 (Inherited: 0x170)
struct UTutorial_Hint_EquipItem_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)
	bool HasEquipped; // 0x180(0x01)
	enum class EItemCategory ItemCategory; // 0x181(0x01)

	void ReceiveOnInitialized();
	void ItemEquipped(AItem* Item);
	void ReceiveOnHidden();
	void ExecuteUbergraph_Tutorial_Hint_EquipItem(int32_t EntryPoint);
};

