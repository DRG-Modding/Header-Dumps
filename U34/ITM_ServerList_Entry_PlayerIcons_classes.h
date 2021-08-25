// WidgetBlueprintGeneratedClass ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C
// Size: 0x2ac (Inherited: 0x230)
struct UITM_ServerList_Entry_PlayerIcons_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Player1; // 0x238(0x08)
	struct UImage* Player2; // 0x240(0x08)
	struct UImage* Player3; // 0x248(0x08)
	struct UImage* Player4; // 0x250(0x08)
	struct UTextBlock* ToolTipBox; // 0x258(0x08)
	struct UTexture2D* TextureEmpty; // 0x260(0x08)
	float Icon Size; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct UTOOLTIP_ServerEntry_Team_C* ToolTip; // 0x270(0x08)
	int32_t NumPlayers; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct APlayerCharacter*> Players; // 0x280(0x10)
	bool ClassLocked; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct TArray<struct UImage*> PlayerIcons; // 0x298(0x10)
	int32_t MaxIcons; // 0x2a8(0x04)

	void Get Player Details(struct TArray<struct APlayerCharacter*> Players, int32_t PlayerIndex, bool IsClassLocked, struct FLinearColor OutColor, struct UTexture2D* OutIcon, struct APlayerCharacter* OutPlayer); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
	struct UTOOLTIP_ServerEntry_Team_C* GetToolTip(); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
	void SetIndexBrush(int32_t NumPlayers, int32_t EntryNum, struct UImage* Target, struct TArray<struct APlayerCharacter*> Players, bool IsClassLocked); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
	void SetNumPlayers(int32_t NumPlayers, struct TArray<struct APlayerCharacter*> Players, bool IsClassLocked); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
	void Construct(); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
	void ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int32_t EntryPoint); // Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
};

