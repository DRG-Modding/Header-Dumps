// WidgetBlueprintGeneratedClass ITM_HealthBar.ITM_HealthBar_C
// Size: 0x249 (Inherited: 0x230)
struct UITM_HealthBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UProgressBar* HealthProgress; // 0x238(0x08)
	struct UUI_ImageTinted_C* Image_Health; // 0x240(0x08)
	char SegmentInnerTint; // 0x248(0x01)

	void PreConstruct(bool IsDesignTime); // Function ITM_HealthBar.ITM_HealthBar_C.PreConstruct
	void SetHealth(float Percent); // Function ITM_HealthBar.ITM_HealthBar_C.SetHealth
	void ExecuteUbergraph_ITM_HealthBar(int32_t EntryPoint); // Function ITM_HealthBar.ITM_HealthBar_C.ExecuteUbergraph_ITM_HealthBar
};

