// WidgetBlueprintGeneratedClass ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C
// Size: 0x26c (Inherited: 0x230)
struct UITM_MisSel_DotMarker_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Icon1; // 0x238(0x08)
	UImage* Icon2; // 0x240(0x08)
	UImage* Icon3; // 0x248(0x08)
	USizeBox* SizeBox_2; // 0x250(0x08)
	USizeBox* SizeBox_3; // 0x258(0x08)
	USizeBox* SizeBox_4; // 0x260(0x08)
	float Size; // 0x268(0x04)

	void PreConstruct(bool IsDesignTime);
	void SetData(int32_t Level);
	void ExecuteUbergraph_ITM_MisSel_DotMarker(int32_t EntryPoint);
};

