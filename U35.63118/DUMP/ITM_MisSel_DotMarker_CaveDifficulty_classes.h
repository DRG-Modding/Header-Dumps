// WidgetBlueprintGeneratedClass ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_MisSel_DotMarker_CaveDifficulty_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Icon1; // 0x238(0x08)
	UImage* Icon2; // 0x240(0x08)
	UImage* Icon3; // 0x248(0x08)
	USizeBox* SizeBox_2; // 0x250(0x08)
	USizeBox* SizeBox_3; // 0x258(0x08)
	USizeBox* SizeBox_4; // 0x260(0x08)
	float Size; // 0x268(0x04)
	float RenderAngle; // 0x26c(0x04)
	int32_t CurrentLevel; // 0x270(0x04)
	TArray<UImage*> Icons; // 0x278(0x10)

	void PreConstruct(bool IsDesignTime);
	void SetData(int32_t Level);
	void Construct();
	void ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty(int32_t EntryPoint);
};

