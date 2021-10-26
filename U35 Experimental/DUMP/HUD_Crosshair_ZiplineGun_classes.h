// WidgetBlueprintGeneratedClass HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C
// Size: 0x298 (Inherited: 0x230)
struct UHUD_Crosshair_ZiplineGun_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BottomArrow; // 0x238(0x08)
	UImage* Dot; // 0x240(0x08)
	UHUD_AngleIndicator_C* HUD_AngleIndicator_152; // 0x248(0x08)
	UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02; // 0x250(0x08)
	UTextBlock* InfoLabel; // 0x258(0x08)
	UImage* LineL; // 0x260(0x08)
	UImage* LineR; // 0x268(0x08)
	UImage* TopArrow; // 0x270(0x08)
	FLinearColor FailColor; // 0x278(0x10)
	FLinearColor BaseColor; // 0x288(0x10)

	void SetMinMaxAngle(float Min, float Max);
	void ClearMessage();
	void DistanceMessage(float Dist, bool InRange);
	void FailMessage(FText Msg);
	void SetText(FText Value);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int32_t EntryPoint);
};

