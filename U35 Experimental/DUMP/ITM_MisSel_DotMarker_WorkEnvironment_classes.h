// WidgetBlueprintGeneratedClass ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_MisSel_DotMarker_WorkEnvironment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* HorizontalBox_1; // 0x238(0x08)
	UImage* Icon1; // 0x240(0x08)
	UImage* Icon2; // 0x248(0x08)
	UImage* Icon3; // 0x250(0x08)
	UImage* Icon4; // 0x258(0x08)
	UImage* Icon5; // 0x260(0x08)
	USizeBox* SizeBox_2; // 0x268(0x08)
	USizeBox* SizeBox_3; // 0x270(0x08)
	USizeBox* SizeBox_4; // 0x278(0x08)
	USizeBox* SizeBox_5; // 0x280(0x08)
	USizeBox* SizeBox_6; // 0x288(0x08)
	float Size; // 0x290(0x04)
	float RenderAngle; // 0x294(0x04)

	void PreConstruct(bool IsDesignTime);
	void SetData(UDifficultySetting* Difficulty);
	void ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment(int32_t EntryPoint);
};

