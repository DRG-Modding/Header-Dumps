// WidgetBlueprintGeneratedClass Basic_Slider.Basic_Slider_C
// Size: 0x2b4 (Inherited: 0x230)
struct UBasic_Slider_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* ColorOverlay; // 0x238(0x08)
	UTextBlock* DATA_Percentage; // 0x240(0x08)
	UProgressBar* ProgressBar_1; // 0x248(0x08)
	USizeBox* SizeBox_2; // 0x250(0x08)
	USlider* Slider; // 0x258(0x08)
	FMulticastInlineDelegate OnValueChanged; // 0x260(0x10)
	float MinValue; // 0x270(0x04)
	float MaxValue; // 0x274(0x04)
	FMulticastInlineDelegate OnPercentChanged; // 0x278(0x10)
	FText TextFormat; // 0x288(0x18)
	int32_t MaxFractionalDigits; // 0x2a0(0x04)
	float MinDesiredWidth; // 0x2a4(0x04)
	int32_t MinFractionalDigits; // 0x2a8(0x04)
	float MappedMinValue; // 0x2ac(0x04)
	float MappedMaxValue; // 0x2b0(0x04)

	void Set Text(FText New Text);
	void Get Value(float Value);
	void Get Percent(float Percent);
	void Set Value(float Value);
	void Set Percent(float New Percent);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Update Text();
	void ExecuteUbergraph_Basic_Slider(int32_t EntryPoint);
	void OnPercentChanged__DelegateSignature(float Percent);
	void OnValueChanged__DelegateSignature(float Value);
};

