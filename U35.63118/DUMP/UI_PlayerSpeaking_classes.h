// WidgetBlueprintGeneratedClass UI_PlayerSpeaking.UI_PlayerSpeaking_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_PlayerSpeaking_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Image_C* Basic_Image; // 0x238(0x08)
	float Size; // 0x240(0x04)
	AFSDPlayerState* PlayerState; // 0x248(0x08)

	void PreConstruct(bool IsDesignTime);
	void OnTalkingChanged(bool IsTalking);
	void SetPlayerState(AFSDPlayerState* NewPlayerState);
	void ExecuteUbergraph_UI_PlayerSpeaking(int32_t EntryPoint);
};

