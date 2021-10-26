// WidgetBlueprintGeneratedClass ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_Craft_ItemIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* IconReady; // 0x238(0x08)
	UBorder* Border_Outside; // 0x240(0x08)
	UBorder* BorderBG; // 0x248(0x08)
	UImage* ICON_Item; // 0x250(0x08)
	UImage* ICON_Padlock; // 0x258(0x08)
	UImage* Shadow; // 0x260(0x08)
	USizeBox* SizeBox_1; // 0x268(0x08)
	TScriptInterface<ICraftable> Item; // 0x270(0x10)
	float Size; // 0x280(0x04)
	UTextureRenderTarget2D* IconRenderTarget; // 0x288(0x08)

	void FreeRenderTarget();
	void SetIconTexture(UObject* Object);
	void GetPlayerState(AFSDPlayerState* AsFSDPlayer State);
	void PreConstruct(bool IsDesignTime);
	void SetData(TScriptInterface<ICraftable> Item, APlayerCharacter* CharacterClass);
	void Construct();
	void ExecuteUbergraph_ITM_Craft_ItemIcon(int32_t EntryPoint);
};

