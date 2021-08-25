// WidgetBlueprintGeneratedClass Basic_AnimatedNumber.Basic_AnimatedNumber_C
// Size: 0x2c0 (Inherited: 0x230)
struct UBasic_AnimatedNumber_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* Text_Number; // 0x238(0x08)
	struct FSlateFontInfo Font; // 0x240(0x50)
	float Number; // 0x290(0x04)
	int32_t FractionalDigits; // 0x294(0x04)
	struct USoundCue* CountSound; // 0x298(0x08)
	float StartTime; // 0x2a0(0x04)
	char UnknownData_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle TimerHandle; // 0x2a8(0x08)
	float OldNumber; // 0x2b0(0x04)
	bool PlaySount; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)
	float TempCountNumber; // 0x2b8(0x04)
	float CountAnimTime; // 0x2bc(0x04)

	void CountUp(); // Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.CountUp
	void PreConstruct(bool IsDesignTime); // Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.PreConstruct
	void SetNumber(float Number, bool DoCountAnim, bool PlayCountSound); // Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.SetNumber
	void ExecuteUbergraph_Basic_AnimatedNumber(int32_t EntryPoint); // Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.ExecuteUbergraph_Basic_AnimatedNumber
};

