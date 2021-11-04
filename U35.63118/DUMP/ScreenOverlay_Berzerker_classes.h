// WidgetBlueprintGeneratedClass ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C
// Size: 0x26c (Inherited: 0x240)
struct UScreenOverlay_Berzerker_C : UPlayerAfflictionOverlayWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UWidgetAnimation* AnimJitter; // 0x248(0x08)
	UWidgetAnimation* AnimPulse; // 0x250(0x08)
	UWidgetAnimation* AnimFading; // 0x258(0x08)
	UImage* AfflictionImage; // 0x260(0x08)
	float FadeDuration; // 0x268(0x04)

	void Play Fade(enum class EUMGSequencePlayMode PlayMode);
	void OnAnimFadingFinished();
	void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
	void Construct();
	void ReceiveEndOverlay();
	void ExecuteUbergraph_ScreenOverlay_Berzerker(int32_t EntryPoint);
};

