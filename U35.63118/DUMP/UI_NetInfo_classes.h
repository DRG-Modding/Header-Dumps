// WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C
// Size: 0x2c8 (Inherited: 0x230)
struct UUI_NetInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* PktLossBox; // 0x238(0x08)
	UTextBlock* TextBlock_FPS; // 0x240(0x08)
	UTextBlock* TextBlock_Jitter; // 0x248(0x08)
	UTextBlock* TextBlock_Ping; // 0x250(0x08)
	UTextBlock* TextBlock_PktLoss_PlayerName; // 0x258(0x08)
	UTextBlock* TextBlock_PktLossIn; // 0x260(0x08)
	UTextBlock* TextBlock_PktLossOut; // 0x268(0x08)
	FSlateFontInfo Font; // 0x270(0x50)
	enum class ETextJustify Justification; // 0x2c0(0x01)
	int32_t NetInfoLevel; // 0x2c4(0x04)

	void GetPktLossString(FText Names, FText PktLossIn, FText PktLossOut, FText Ping, FText Jitter, bool IsValid);
	void GetPlayerName(AFSDPlayerController* PlayerController, FString Name);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SlowTick();
	void OnNetInfoLevelChanged(int32_t NewValue);
	void ExecuteUbergraph_UI_NetInfo(int32_t EntryPoint);
};

