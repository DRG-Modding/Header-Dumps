// WidgetBlueprintGeneratedClass HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C
// Size: 0x241 (Inherited: 0x230)
struct UHUD_Crosshair_LaserPointer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* DotImage; // 0x238(0x08)
	bool DotVisible; // 0x240(0x01)

	void SetDotVisible(bool IsVisible); // Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.SetDotVisible
	void Construct(); // Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.Construct
	void ExecuteUbergraph_HUD_Crosshair_LaserPointer(int32_t EntryPoint); // Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.ExecuteUbergraph_HUD_Crosshair_LaserPointer
};

