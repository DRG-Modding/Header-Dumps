// WidgetBlueprintGeneratedClass HUD_Salvage_Defend_PlayerSlot.HUD_Salvage_Defend_PlayerSlot_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_Salvage_Defend_PlayerSlot_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) UUI_ImageTinted_C* Filled; 
	UPROPERTY(BlueprintReadWrite) UUI_ImageTinted_C* NotFilled; 
	UPROPERTY(BlueprintReadWrite) UWidgetSwitcher* StateSwitcher; 

	UFUNCTION(BlueprintCallable) void SetPlayerSlotFilled(bool InFilled);
};

