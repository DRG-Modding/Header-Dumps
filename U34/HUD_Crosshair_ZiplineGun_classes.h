// WidgetBlueprintGeneratedClass HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C
// Size: 0x298 (Inherited: 0x230)
struct UHUD_Crosshair_ZiplineGun_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BottomArrow; // 0x238(0x08)
	struct UImage* Dot; // 0x240(0x08)
	struct UHUD_AngleIndicator_C* HUD_AngleIndicator_152; // 0x248(0x08)
	struct UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02; // 0x250(0x08)
	struct UTextBlock* InfoLabel; // 0x258(0x08)
	struct UImage* LineL; // 0x260(0x08)
	struct UImage* LineR; // 0x268(0x08)
	struct UImage* TopArrow; // 0x270(0x08)
	struct FLinearColor FailColor; // 0x278(0x10)
	struct FLinearColor BaseColor; // 0x288(0x10)

	void SetMinMaxAngle(float Min, float Max); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle
	void ClearMessage(); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage
	void DistanceMessage(float Dist, bool InRange); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage
	void FailMessage(struct FText Msg); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage
	void SetText(struct FText Value); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText
	void PreConstruct(bool IsDesignTime); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct
	void ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int32_t EntryPoint); // Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun
};

