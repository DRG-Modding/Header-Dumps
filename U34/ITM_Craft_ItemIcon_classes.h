// WidgetBlueprintGeneratedClass ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_Craft_ItemIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* IconReady; // 0x238(0x08)
	struct UBorder* Border_Outside; // 0x240(0x08)
	struct UBorder* BorderBG; // 0x248(0x08)
	struct UImage* ICON_Item; // 0x250(0x08)
	struct UImage* ICON_Padlock; // 0x258(0x08)
	struct UImage* Shadow; // 0x260(0x08)
	struct USizeBox* SizeBox_1; // 0x268(0x08)
	struct TScriptInterface<None> Item; // 0x270(0x10)
	float Size; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct UTextureRenderTarget2D* IconRenderTarget; // 0x288(0x08)

	void FreeRenderTarget(); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.FreeRenderTarget
	void SetIconTexture(struct UObject* Object); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetIconTexture
	void GetPlayerState(struct AFSDPlayerState* AsFSDPlayer State); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState
	void PreConstruct(bool IsDesignTime); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct
	void SetData(struct TScriptInterface<None> Item, struct APlayerCharacter* CharacterClass); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData
	void Construct(); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct
	void ExecuteUbergraph_ITM_Craft_ItemIcon(int32_t EntryPoint); // Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon
};

