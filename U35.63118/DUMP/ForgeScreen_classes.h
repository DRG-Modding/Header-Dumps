// WidgetBlueprintGeneratedClass ForgeScreen.ForgeScreen_C
// Size: 0x278 (Inherited: 0x230)
struct UForgeScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ForgeAnim; // 0x238(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x260(0x08)
	UProgressBar* ProgressBar_65; // 0x268(0x08)
	UVerticalBox* VertForgeBox; // 0x270(0x08)

	void Construct();
	void StartForging();
	void FrogingDone();
	void ExecuteUbergraph_ForgeScreen(int32_t EntryPoint);
};

