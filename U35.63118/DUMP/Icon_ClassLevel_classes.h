// WidgetBlueprintGeneratedClass Icon_ClassLevel.Icon_ClassLevel_C
// Size: 0x25d (Inherited: 0x230)
struct UIcon_ClassLevel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Icon_ClassLevel; // 0x238(0x08)
	UImage* Icon_PlayerRank; // 0x240(0x08)
	USizeBox* SizeBox_56; // 0x248(0x08)
	UWidgetSwitcher* WidgetSwitcher_1; // 0x250(0x08)
	float IconSize; // 0x258(0x04)
	bool Player Rank; // 0x25c(0x01)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Icon_ClassLevel(int32_t EntryPoint);
};

