// WidgetBlueprintGeneratedClass ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C
// Size: 0x254 (Inherited: 0x230)
struct UITM_ClassLevelRequirement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UFSDLabelWidget* DATA_Class; // 0x238(0x08)
	struct UITM_JobsEntry_Resource_C* ITM_JobsEntry_Resource; // 0x240(0x08)
	struct APlayerCharacter* Character; // 0x248(0x08)
	int32_t RequiredLevel; // 0x250(0x04)

	void Construct(); // Function ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C.Construct
	void ExecuteUbergraph_ITM_ClassLevelRequirement(int32_t EntryPoint); // Function ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C.ExecuteUbergraph_ITM_ClassLevelRequirement
};

