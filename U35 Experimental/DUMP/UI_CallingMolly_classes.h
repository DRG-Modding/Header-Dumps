// WidgetBlueprintGeneratedClass UI_CallingMolly.UI_CallingMolly_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_CallingMolly_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* PopEnd; // 0x238(0x08)
	UWidgetAnimation* PopStart; // 0x240(0x08)
	UITM_CallingMolly_Icon_C* ITM_CallingMolly_Icon; // 0x248(0x08)
	USizeBox* MollySize; // 0x250(0x08)
	int32_t Size; // 0x258(0x04)
	AMolly* Donkey; // 0x260(0x08)
	AFSDPlayerState* PlayerState; // 0x268(0x08)
	bool Visible; // 0x270(0x01)
	FTimerHandle TimeoutHandle; // 0x278(0x08)

	void SetVisible(bool InVisible, bool VisibilityChanged);
	void Refresh();
	void SetPlayerState(APlayerState* InPlayerState);
	void GetPlayerCharacter(APlayerCharacter* PlayerCharacter);
	void SetDonkey(AMolly* InDonkey);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnDonkeyChanged(AMolly* InDonkey);
	void OnCalledByChanged(APlayerCharacter* InPlayer);
	void OnPlayerCharacterSpawned(APlayerCharacter* PlayerCharacter);
	void OnShow();
	void OnHide();
	void OnPopEndFinished();
	void OnTimeout();
	void ExecuteUbergraph_UI_CallingMolly(int32_t EntryPoint);
};

