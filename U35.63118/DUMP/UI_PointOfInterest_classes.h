// WidgetBlueprintGeneratedClass UI_PointOfInterest.UI_PointOfInterest_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_PointOfInterest_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Outro; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UWidgetAnimation* Pulse; // 0x248(0x08)
	UImage* Icon; // 0x250(0x08)
	UImage* Ring; // 0x258(0x08)
	FMulticastInlineDelegate Finished; // 0x260(0x10)
	UTexture2D* Texture; // 0x270(0x08)

	void Init(UTexture2D* Texture);
	void Construct();
	void OnIntroFinished();
	void OnOutroFinished();
	void ExecuteUbergraph_UI_PointOfInterest(int32_t EntryPoint);
	void Finished__DelegateSignature();
};

