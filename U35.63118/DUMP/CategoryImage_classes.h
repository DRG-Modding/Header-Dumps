// WidgetBlueprintGeneratedClass CategoryImage.CategoryImage_C
// Size: 0x258 (Inherited: 0x230)
struct UCategoryImage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image; // 0x238(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x240(0x08)
	float CornerSize; // 0x248(0x04)
	UMaterialInstanceDynamic* DynBackgroundMaterial; // 0x250(0x08)

	void PreConstruct(bool IsDesignTime);
	void SetImage(UTexture2D* Image, FLinearColor BackgroundColor, UTexture2D* OptionalMaskedImage);
	void SetOutlineColor(FLinearColor Color);
	void SetMissionIcon(FObjectiveMissionIcon MissionIcon);
	void SetStyle(enum class E_MM_ButtonStyle IsEnabled);
	void ExecuteUbergraph_CategoryImage(int32_t EntryPoint);
};

