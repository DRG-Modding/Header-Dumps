// WidgetBlueprintGeneratedClass HUD_Salvage_Defend.HUD_Salvage_Defend_C
// Size: 0x300 (Inherited: 0x230)
struct UHUD_Salvage_Defend_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* DefenseProgress; 
	UPROPERTY(BlueprintReadWrite) UHUD_DefaultLabel_C* Header; 
	UPROPERTY(BlueprintReadWrite) UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_01; 
	UPROPERTY(BlueprintReadWrite) UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_02; 
	UPROPERTY(BlueprintReadWrite) UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_03; 
	UPROPERTY(BlueprintReadWrite) UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_04; 
	UPROPERTY(BlueprintReadWrite) UHUD_DefaultLabel_C* Sucess_Done; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_Complete; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_InProgress; 
	UPROPERTY(BlueprintReadWrite) AEVENT_DropPodDefense_Base_C* Event; 
	UPROPERTY(BlueprintReadWrite) FLinearColor ProgressColor; 
	UPROPERTY(BlueprintReadWrite) FText HeaderText; 
	UPROPERTY(BlueprintReadWrite) FLinearColor NoDefenderColor; 
	UPROPERTY(BlueprintReadWrite) FLinearColor HasDefenderColor; 
	UPROPERTY(BlueprintReadWrite) FText SuccesText; 
	UPROPERTY(BlueprintReadWrite) TArray<UHUD_Salvage_Defend_PlayerSlot_C*> PlayerSlots; 

	UFUNCTION(BlueprintCallable) void UpdateDefenderBlocks(int32_t DefenderCount);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ProgressUpdated(float NewProgress);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void DefendersUpdated(int32_t DefenderCount);
	UFUNCTION(BlueprintCallable) void success();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_Salvage_Defend(int32_t EntryPoint);
};

