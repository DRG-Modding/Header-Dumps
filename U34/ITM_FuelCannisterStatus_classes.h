// WidgetBlueprintGeneratedClass ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_FuelCannisterStatus_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UProgressBar* FuelProgressBar; // 0x238(0x08)
	struct UImage* Img_Complete; // 0x240(0x08)
	struct UImage* Img_Outline; // 0x248(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x250(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x258(0x08)
	float MaxLoad; // 0x260(0x04)
	int32_t CannisterIndex; // 0x264(0x04)
	struct AExtractorItem* extractor; // 0x268(0x08)
	bool Full; // 0x270(0x01)

	void SetProgress(float CurrentLoad); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.SetProgress
	void Reset(); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.Reset
	bool ReadyForExtractor(); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.ReadyForExtractor
	void Construct(); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.Construct
	void OnCurrentLoadChangedEvent(float FloatValue); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.OnCurrentLoadChangedEvent
	void SetExtractor(struct AExtractorItem* extractor); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.SetExtractor
	void OnDestroyed(struct AActor* DestroyedActor); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.OnDestroyed
	void CharacterChanged(struct ACharacter* Character); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.CharacterChanged
	void ForceFull(); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.ForceFull
	void ExecuteUbergraph_ITM_FuelCannisterStatus(int32_t EntryPoint); // Function ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C.ExecuteUbergraph_ITM_FuelCannisterStatus
};

