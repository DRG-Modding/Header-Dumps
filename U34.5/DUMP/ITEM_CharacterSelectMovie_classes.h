// WidgetBlueprintGeneratedClass ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C
// Size: 0x2bb (Inherited: 0x250)
struct UITEM_CharacterSelectMovie_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UImage* MoviePanel; // 0x258(0x08)
	UMediaPlayer* DrillerMediaPlayer; // 0x260(0x08)
	UPlayerCharacterID* LastCharacter; // 0x268(0x08)
	UMediaTexture* DrillerTexture; // 0x270(0x08)
	UMediaTexture* EngineerTexture; // 0x278(0x08)
	UMediaTexture* GunnerTexture; // 0x280(0x08)
	UMediaTexture* ScoutTexture; // 0x288(0x08)
	UMediaPlayer* EngineerMediaPlayer; // 0x290(0x08)
	UMediaPlayer* GunnerMediaPlayer; // 0x298(0x08)
	UMediaPlayer* ScoutMediaPlayer; // 0x2a0(0x08)
	TArray<FSlateBrush> BrushList; // 0x2a8(0x10)
	bool Init; // 0x2b8(0x01)
	bool InitStarted; // 0x2b9(0x01)
	bool Built; // 0x2ba(0x01)

	void Collapse();
	void SetVideo(UPlayerCharacterID* Character);
	void Construct();
	void InitPlayer();
	void BuildCharacterSelectionMovie();
	void ExecuteUbergraph_ITEM_CharacterSelectMovie(int32_t EntryPoint);
};

