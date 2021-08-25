// WidgetBlueprintGeneratedClass Basic_Slider.Basic_Slider_C
// Size: 0x2b4 (Inherited: 0x230)
struct UBasic_Slider_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* ColorOverlay; // 0x238(0x08)
	struct UTextBlock* DATA_Percentage; // 0x240(0x08)
	struct UProgressBar* ProgressBar_1; // 0x248(0x08)
	struct USizeBox* SizeBox_2; // 0x250(0x08)
	struct USlider* Slider; // 0x258(0x08)
	struct FMulticastInlineDelegate OnValueChanged; // 0x260(0x10)
	float MinValue; // 0x270(0x04)
	float MaxValue; // 0x274(0x04)
	struct FMulticastInlineDelegate OnPercentChanged; // 0x278(0x10)
	struct FText TextFormat; // 0x288(0x18)
	int32_t MaxFractionalDigits; // 0x2a0(0x04)
	float MinDesiredWidth; // 0x2a4(0x04)
	int32_t MinFractionalDigits; // 0x2a8(0x04)
	float MappedMinValue; // 0x2ac(0x04)
	float MappedMaxValue; // 0x2b0(0x04)

	void Set Text(struct FText New Text); // Function Basic_Slider.Basic_Slider_C.Set Text
	void Get Value(float Value); // Function Basic_Slider.Basic_Slider_C.Get Value
	void Get Percent(float Percent); // Function Basic_Slider.Basic_Slider_C.Get Percent
	void Set Value(float Value); // Function Basic_Slider.Basic_Slider_C.Set Value
	void Set Percent(float New Percent); // Function Basic_Slider.Basic_Slider_C.Set Percent
	void BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
	void BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(); // Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
	void BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature(); // Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Basic_Slider.Basic_Slider_C.PreConstruct
	void Update Text(); // Function Basic_Slider.Basic_Slider_C.Update Text
	void ExecuteUbergraph_Basic_Slider(int32_t EntryPoint); // Function Basic_Slider.Basic_Slider_C.ExecuteUbergraph_Basic_Slider
	void OnPercentChanged__DelegateSignature(float Percent); // Function Basic_Slider.Basic_Slider_C.OnPercentChanged__DelegateSignature
	void OnValueChanged__DelegateSignature(float Value); // Function Basic_Slider.Basic_Slider_C.OnValueChanged__DelegateSignature
};

