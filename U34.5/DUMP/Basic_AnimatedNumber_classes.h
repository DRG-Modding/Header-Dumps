// WidgetBlueprintGeneratedClass Basic_AnimatedNumber.Basic_AnimatedNumber_C
// Size: 0x2c0 (Inherited: 0x230)
struct UBasic_AnimatedNumber_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Text_Number; // 0x238(0x08)
	FSlateFontInfo Font; // 0x240(0x50)
	float Number; // 0x290(0x04)
	int32_t FractionalDigits; // 0x294(0x04)
	USoundCue* CountSound; // 0x298(0x08)
	float StartTime; // 0x2a0(0x04)
	FTimerHandle TimerHandle; // 0x2a8(0x08)
	float OldNumber; // 0x2b0(0x04)
	bool PlaySount; // 0x2b4(0x01)
	float TempCountNumber; // 0x2b8(0x04)
	float CountAnimTime; // 0x2bc(0x04)

	void CountUp();
	void PreConstruct(bool IsDesignTime);
	void SetNumber(float Number, bool DoCountAnim, bool PlayCountSound);
	void ExecuteUbergraph_Basic_AnimatedNumber(int32_t EntryPoint);
};

