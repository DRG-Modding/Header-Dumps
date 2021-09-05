// WidgetBlueprintGeneratedClass HUD_CrosshairManager.HUD_CrosshairManager_C
// Size: 0x2d0 (Inherited: 0x230)
struct UHUD_CrosshairManager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimIntro; // 0x238(0x08)
	UWidgetSwitcher* CrosshairSwitcher; // 0x240(0x08)
	UHUD_HitIndicator_C* HUD_HitIndicator; // 0x248(0x08)
	UCanvasPanel* MainCanvas; // 0x250(0x08)
	UImage* NoCrosshair; // 0x258(0x08)
	UOnScreen_Indicator_UsableZipLine_C* OnScreen_Indicator_UsableZipLine; // 0x260(0x08)
	UUserWidget* CurrentCrosshair; // 0x268(0x08)
	bool PlayIntroAnim; // 0x270(0x01)
	APlayerCharacter* Character; // 0x278(0x08)
	TMap<AItem*, UUserWidget*> CrosshairCache; // 0x280(0x50)

	void UnregisterEvents();
	void UpdateVisibility(FString InDebugText);
	void SetCrosshair(AItem* InEquippedItem);
	void OnToggleMapTool(bool Visible);
	void OnDepositingEnd_Event(UResourceBank* ResourceBank);
	void OnDepositingBegin_Event(UResourceBank* ResourceBank);
	void OnCameraModeChanged_Event(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode);
	void Debug(FString Msg, FLinearColor TextColor);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	void Destruct();
	void Construct();
	void On Inventory Ready();
	void OnItemsLoaded();
	void ExecuteUbergraph_HUD_CrosshairManager(int32_t EntryPoint);
};

