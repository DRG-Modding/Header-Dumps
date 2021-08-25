// WidgetBlueprintGeneratedClass HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_CroNew_GrapplingGun_C : UUserWidget {
	struct UHUD_AngleIndicator_C* HUD_AngleIndicator_152; // 0x230(0x08)
	struct UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02; // 0x238(0x08)
	struct UImage* Image_1; // 0x240(0x08)
	struct UImage* Image_2; // 0x248(0x08)
	struct UImage* Image_3; // 0x250(0x08)
	struct UImage* Image_4; // 0x258(0x08)
	struct UImage* Image_5; // 0x260(0x08)
	struct UImage* Image_6; // 0x268(0x08)
	struct UTextBlock* TextBlock_178; // 0x270(0x08)
	struct FLinearColor BaseColour; // 0x278(0x10)
	struct FLinearColor WarningColour; // 0x288(0x10)
	float OpacityHigh; // 0x298(0x04)
	float OpacityLow; // 0x29c(0x04)

	void ClearMessage(); // Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessage
	void DistanceMessage(float Dist); // Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage
	void FailMessage(struct FText Msg); // Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage
	void SetText(struct FText Value, struct FLinearColor Color); // Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.SetText
};

