// WidgetBlueprintGeneratedClass ITM_HealthBar.ITM_HealthBar_C
// Size: 0x249 (Inherited: 0x230)
struct UITM_HealthBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UProgressBar* HealthProgress; // 0x238(0x08)
	UUI_ImageTinted_C* Image_Health; // 0x240(0x08)
	enum class ENUM_MenuColors SegmentInnerTint; // 0x248(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetHealth(float Percent);
	void ExecuteUbergraph_ITM_HealthBar(int32_t EntryPoint);
};

