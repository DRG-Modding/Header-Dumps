// WidgetBlueprintGeneratedClass UI_AvailablePerkPoints.UI_AvailablePerkPoints_C
// Size: 0x26d (Inherited: 0x230)
struct UUI_AvailablePerkPoints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* PingAnim; // 0x238(0x08)
	struct UTextBlock* AmountText; // 0x240(0x08)
	struct USpacer* IconSpacer; // 0x248(0x08)
	struct UImage* PerkIcon; // 0x250(0x08)
	int32_t FontSize; // 0x258(0x04)
	float Image Size; // 0x25c(0x04)
	float Spacing; // 0x260(0x04)
	float CurrentPerkPoints; // 0x264(0x04)
	int32_t TargetPerkPoints; // 0x268(0x04)
	bool DoCountAnimation; // 0x26c(0x01)

	void CountPerkPoints(float DeltaTime); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints
	void SetPerkPointsText(int32_t Points); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText
	void PreConstruct(bool IsDesignTime); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct
	void Construct(); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct
	void OnPerkPointsChanged(int32_t PerkPoints, int32_t Change); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick
	void OnPingAnimFinished(); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPingAnimFinished
	void ExecuteUbergraph_UI_AvailablePerkPoints(int32_t EntryPoint); // Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints
};

