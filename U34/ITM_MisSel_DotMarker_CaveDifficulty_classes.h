// WidgetBlueprintGeneratedClass ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_MisSel_DotMarker_CaveDifficulty_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Icon1; // 0x238(0x08)
	struct UImage* Icon2; // 0x240(0x08)
	struct UImage* Icon3; // 0x248(0x08)
	struct USizeBox* SizeBox_2; // 0x250(0x08)
	struct USizeBox* SizeBox_3; // 0x258(0x08)
	struct USizeBox* SizeBox_4; // 0x260(0x08)
	float Size; // 0x268(0x04)
	float RenderAngle; // 0x26c(0x04)
	int32_t CurrentLevel; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct TArray<struct UImage*> Icons; // 0x278(0x10)

	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.PreConstruct
	void SetData(int32_t Level); // Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.SetData
	void Construct(); // Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.Construct
	void ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty(int32_t EntryPoint); // Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty
};

