// WidgetBlueprintGeneratedClass ConsoleScreen_Season01.ConsoleScreen_Season01_C
// Size: 0x2a8 (Inherited: 0x230)
struct UConsoleScreen_Season01_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* BackgroundAnim; // 0x238(0x08)
	UWidgetAnimation* TextAnim; // 0x240(0x08)
	UBorder* Border_4; // 0x248(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x250(0x08)
	UImage* Image_47; // 0x258(0x08)
	UImage* Image_198; // 0x260(0x08)
	FText TextToDisplay; // 0x268(0x18)
	FText NotificationText; // 0x280(0x18)
	UTexture2D* NotificationIcon; // 0x298(0x08)
	bool NotificationVisible; // 0x2a0(0x01)
	bool Toggle Header Bars; // 0x2a1(0x01)
	int32_t TextSize; // 0x2a4(0x04)

	void SetNotificationVisible(bool IsVisible);
	void SetNotification(FText Text, UTexture2D* InIcon);
	void PreConstruct(bool IsDesignTime);
	void OnClaimStatusChanged(bool AllClaimed);
	void OnTokensChanged(int32_t NumberOfTokens, int32_t Change);
	void Construct();
	void ExecuteUbergraph_ConsoleScreen_Season01(int32_t EntryPoint);
};

