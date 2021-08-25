// WidgetBlueprintGeneratedClass UI_PointOfInterest.UI_PointOfInterest_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_PointOfInterest_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Outro; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UWidgetAnimation* Pulse; // 0x248(0x08)
	struct UImage* Icon; // 0x250(0x08)
	struct UImage* Ring; // 0x258(0x08)
	struct FMulticastInlineDelegate Finished; // 0x260(0x10)
	struct UTexture2D* Texture; // 0x270(0x08)

	void Init(struct UTexture2D* Texture); // Function UI_PointOfInterest.UI_PointOfInterest_C.Init
	void Construct(); // Function UI_PointOfInterest.UI_PointOfInterest_C.Construct
	void OnIntroFinished(); // Function UI_PointOfInterest.UI_PointOfInterest_C.OnIntroFinished
	void OnOutroFinished(); // Function UI_PointOfInterest.UI_PointOfInterest_C.OnOutroFinished
	void ExecuteUbergraph_UI_PointOfInterest(int32_t EntryPoint); // Function UI_PointOfInterest.UI_PointOfInterest_C.ExecuteUbergraph_UI_PointOfInterest
	void Finished__DelegateSignature(); // Function UI_PointOfInterest.UI_PointOfInterest_C.Finished__DelegateSignature
};

