// WidgetBlueprintGeneratedClass HUD_CrosshairManager.HUD_CrosshairManager_C
// Size: 0x2d0 (Inherited: 0x230)
struct UHUD_CrosshairManager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimIntro; // 0x238(0x08)
	struct UWidgetSwitcher* CrosshairSwitcher; // 0x240(0x08)
	struct UHUD_HitIndicator_C* HUD_HitIndicator; // 0x248(0x08)
	struct UCanvasPanel* MainCanvas; // 0x250(0x08)
	struct UImage* NoCrosshair; // 0x258(0x08)
	struct UOnScreen_Indicator_UsableZipLine_C* OnScreen_Indicator_UsableZipLine; // 0x260(0x08)
	struct UUserWidget* CurrentCrosshair; // 0x268(0x08)
	bool PlayIntroAnim; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
	struct APlayerCharacter* Character; // 0x278(0x08)
	struct TMap<struct AItem*, struct UUserWidget*> CrosshairCache; // 0x280(0x50)

	void UnregisterEvents(); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents
	void UpdateVisibility(struct FString InDebugText); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility
	void SetCrosshair(struct AItem* InEquippedItem); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair
	void OnToggleMapTool(bool Visible); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
	void OnDepositingEnd_Event(struct UResourceBank* ResourceBank); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
	void OnDepositingBegin_Event(struct UResourceBank* ResourceBank); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
	void OnCameraModeChanged_Event(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
	void Debug(struct FString Msg, struct FLinearColor TextColor); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.Debug
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
	void Destruct(); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct
	void Construct(); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
	void On Inventory Ready(); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready
	void OnItemsLoaded(); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded
	void ExecuteUbergraph_HUD_CrosshairManager(int32_t EntryPoint); // Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
};

