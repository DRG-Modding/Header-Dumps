// WidgetBlueprintGeneratedClass ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_Season_CharacterIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_Driller; // 0x238(0x08)
	UImage* Image_Engineer; // 0x240(0x08)
	UImage* Image_Gunner; // 0x248(0x08)
	UImage* Image_Scout; // 0x250(0x08)

	void SetData(UPlayerCharacterID* characterID, bool ShowIcon);
	void ExecuteUbergraph_ITM_Season_CharacterIcon(int32_t EntryPoint);
};

