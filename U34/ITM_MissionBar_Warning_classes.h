// WidgetBlueprintGeneratedClass ITM_MissionBar_Warning.ITM_MissionBar_Warning_C
// Size: 0x261 (Inherited: 0x230)
struct UITM_MissionBar_Warning_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Blink; // 0x238(0x08)
	struct UTextBlock* DATA_Warning; // 0x240(0x08)
	struct UImage* GradientBG; // 0x248(0x08)
	struct UImage* IconMutator; // 0x250(0x08)
	struct UImage* IconWarning; // 0x258(0x08)
	bool Is Mutator; // 0x260(0x01)

	void Update(struct FText Title, struct UTexture2D* Icon, char Color); // Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update
	void PreConstruct(bool IsDesignTime); // Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct
	void SetWarning(struct UMissionWarning* Warning); // Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetWarning
	void SetMutator(struct UMissionMutator* Mutator); // Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetMutator
	void ExecuteUbergraph_ITM_MissionBar_Warning(int32_t EntryPoint); // Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning
};

