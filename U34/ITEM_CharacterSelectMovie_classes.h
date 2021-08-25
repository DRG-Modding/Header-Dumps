// WidgetBlueprintGeneratedClass ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C
// Size: 0x2bb (Inherited: 0x250)
struct UITEM_CharacterSelectMovie_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UImage* MoviePanel; // 0x258(0x08)
	struct UMediaPlayer* DrillerMediaPlayer; // 0x260(0x08)
	struct UPlayerCharacterID* LastCharacter; // 0x268(0x08)
	struct UMediaTexture* DrillerTexture; // 0x270(0x08)
	struct UMediaTexture* EngineerTexture; // 0x278(0x08)
	struct UMediaTexture* GunnerTexture; // 0x280(0x08)
	struct UMediaTexture* ScoutTexture; // 0x288(0x08)
	struct UMediaPlayer* EngineerMediaPlayer; // 0x290(0x08)
	struct UMediaPlayer* GunnerMediaPlayer; // 0x298(0x08)
	struct UMediaPlayer* ScoutMediaPlayer; // 0x2a0(0x08)
	struct TArray<struct FSlateBrush> BrushList; // 0x2a8(0x10)
	bool Init; // 0x2b8(0x01)
	bool InitStarted; // 0x2b9(0x01)
	bool Built; // 0x2ba(0x01)

	void Collapse(); // Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
	void SetVideo(struct UPlayerCharacterID* Character); // Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
	void Construct(); // Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
	void InitPlayer(); // Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
	void BuildCharacterSelectionMovie(); // Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie
	void ExecuteUbergraph_ITEM_CharacterSelectMovie(int32_t EntryPoint); // Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
};

