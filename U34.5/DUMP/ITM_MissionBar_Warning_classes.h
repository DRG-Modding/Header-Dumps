// WidgetBlueprintGeneratedClass ITM_MissionBar_Warning.ITM_MissionBar_Warning_C
// Size: 0x261 (Inherited: 0x230)
struct UITM_MissionBar_Warning_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Blink; // 0x238(0x08)
	UTextBlock* DATA_Warning; // 0x240(0x08)
	UImage* GradientBG; // 0x248(0x08)
	UImage* IconMutator; // 0x250(0x08)
	UImage* IconWarning; // 0x258(0x08)
	bool Is Mutator; // 0x260(0x01)

	void Update(FText Title, UTexture2D* Icon, enum class ENUM_MenuColors Color);
	void PreConstruct(bool IsDesignTime);
	void SetWarning(UMissionWarning* Warning);
	void SetMutator(UMissionMutator* Mutator);
	void ExecuteUbergraph_ITM_MissionBar_Warning(int32_t EntryPoint);
};

