// WidgetBlueprintGeneratedClass ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C
// Size: 0x2ac (Inherited: 0x230)
struct UITM_ServerList_Entry_PlayerIcons_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Player1; // 0x238(0x08)
	UImage* Player2; // 0x240(0x08)
	UImage* Player3; // 0x248(0x08)
	UImage* Player4; // 0x250(0x08)
	UTextBlock* ToolTipBox; // 0x258(0x08)
	UTexture2D* TextureEmpty; // 0x260(0x08)
	float Icon Size; // 0x268(0x04)
	UTOOLTIP_ServerEntry_Team_C* ToolTip; // 0x270(0x08)
	int32_t NumPlayers; // 0x278(0x04)
	TArray<APlayerCharacter*> Players; // 0x280(0x10)
	bool ClassLocked; // 0x290(0x01)
	TArray<UImage*> PlayerIcons; // 0x298(0x10)
	int32_t MaxIcons; // 0x2a8(0x04)

	void Get Player Details(TArray<APlayerCharacter*> Players, int32_t PlayerIndex, bool IsClassLocked, FLinearColor OutColor, UTexture2D* OutIcon, APlayerCharacter* OutPlayer);
	UTOOLTIP_ServerEntry_Team_C* GetToolTip();
	void SetIndexBrush(int32_t NumPlayers, int32_t EntryNum, UImage* Target, TArray<APlayerCharacter*> Players, bool IsClassLocked);
	void SetNumPlayers(int32_t NumPlayers, TArray<APlayerCharacter*> Players, bool IsClassLocked);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int32_t EntryPoint);
};

