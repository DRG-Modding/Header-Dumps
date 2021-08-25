// WidgetBlueprintGeneratedClass ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C
// Size: 0x26c (Inherited: 0x240)
struct UScreenOverlay_Berzerker_C : UPlayerAfflictionOverlayWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UWidgetAnimation* AnimJitter; // 0x248(0x08)
	struct UWidgetAnimation* AnimPulse; // 0x250(0x08)
	struct UWidgetAnimation* AnimFading; // 0x258(0x08)
	struct UImage* AfflictionImage; // 0x260(0x08)
	float FadeDuration; // 0x268(0x04)

	void Play Fade(char PlayMode); // Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade
	void OnAnimFadingFinished(); // Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished
	void ReceiveBeginOverlay(struct UTexture2D* InTexture, struct FLinearColor InTint); // Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay
	void Construct(); // Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct
	void ReceiveEndOverlay(); // Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay
	void ExecuteUbergraph_ScreenOverlay_Berzerker(int32_t EntryPoint); // Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker
};

