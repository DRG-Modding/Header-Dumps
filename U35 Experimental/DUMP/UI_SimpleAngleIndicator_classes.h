// WidgetBlueprintGeneratedClass UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_SimpleAngleIndicator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	UUI_ImageTinted_C* ArrowLeft; // 0x240(0x08)
	UUI_ImageTinted_C* ArrowRight; // 0x248(0x08)
	UCanvasPanel* ClippingCanvas; // 0x250(0x08)
	USizeBox* SizeRanges; // 0x258(0x08)
	float Angle; // 0x260(0x04)
	float HeightOffset; // 0x264(0x04)
	FVector2D ClippingSize; // 0x268(0x08)
	float ArrowSize; // 0x270(0x04)
	float ArrowOffset; // 0x274(0x04)

	void SetAngle(float AngleDegrees);
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UI_SimpleAngleIndicator(int32_t EntryPoint);
};

