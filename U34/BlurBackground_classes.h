// WidgetBlueprintGeneratedClass BlurBackground.BlurBackground_C
// Size: 0x25c (Inherited: 0x230)
struct UBlurBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBackgroundBlur* BackgroundBlur_67; // 0x238(0x08)
	struct UBorder* Border_1; // 0x240(0x08)
	struct FLinearColor Tint; // 0x248(0x10)
	float Blur; // 0x258(0x04)

	void SetBlur(float InBlur); // Function BlurBackground.BlurBackground_C.SetBlur
	void SetColor(struct FLinearColor Tint); // Function BlurBackground.BlurBackground_C.SetColor
	void PreConstruct(bool IsDesignTime); // Function BlurBackground.BlurBackground_C.PreConstruct
	void ExecuteUbergraph_BlurBackground(int32_t EntryPoint); // Function BlurBackground.BlurBackground_C.ExecuteUbergraph_BlurBackground
};

