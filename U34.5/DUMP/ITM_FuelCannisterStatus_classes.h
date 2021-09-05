// WidgetBlueprintGeneratedClass ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_FuelCannisterStatus_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UProgressBar* FuelProgressBar; // 0x238(0x08)
	UImage* Img_Complete; // 0x240(0x08)
	UImage* Img_Outline; // 0x248(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x250(0x08)
	UWidgetSwitcher* WidgetSwitcher_1; // 0x258(0x08)
	float MaxLoad; // 0x260(0x04)
	int32_t CannisterIndex; // 0x264(0x04)
	AExtractorItem* extractor; // 0x268(0x08)
	bool Full; // 0x270(0x01)

	void SetProgress(float CurrentLoad);
	void Reset();
	bool ReadyForExtractor();
	void Construct();
	void OnCurrentLoadChangedEvent(float FloatValue);
	void SetExtractor(AExtractorItem* extractor);
	void OnDestroyed(AActor* DestroyedActor);
	void CharacterChanged(ACharacter* Character);
	void ForceFull();
	void ExecuteUbergraph_ITM_FuelCannisterStatus(int32_t EntryPoint);
};

