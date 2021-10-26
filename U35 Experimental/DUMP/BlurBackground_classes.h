// WidgetBlueprintGeneratedClass BlurBackground.BlurBackground_C
// Size: 0x25c (Inherited: 0x230)
struct UBlurBackground_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBackgroundBlur* BackgroundBlur_67; // 0x238(0x08)
	UBorder* Border_1; // 0x240(0x08)
	FLinearColor Tint; // 0x248(0x10)
	float Blur; // 0x258(0x04)

	void SetBlur(float InBlur);
	void SetColor(FLinearColor Tint);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BlurBackground(int32_t EntryPoint);
};

