// WidgetBlueprintGeneratedClass ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C
// Size: 0x25c (Inherited: 0x240)
struct UScreenOverlay_GenericAffliction_C : UPlayerAfflictionOverlayWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UWidgetAnimation* AnimFading; // 0x248(0x08)
	UImage* AfflictionImage; // 0x250(0x08)
	float FadeDuration; // 0x258(0x04)

	void Construct();
	void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
	void ReceiveEndOverlay();
	void Play Fade(enum class EUMGSequencePlayMode PlayMode);
	void OnAnimFadingFinished();
	void ExecuteUbergraph_ScreenOverlay_GenericAffliction(int32_t EntryPoint);
};

