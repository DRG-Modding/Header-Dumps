// WidgetBlueprintGeneratedClass HUD_Defend_Event.HUD_Defend_Event_C
// Size: 0x350 (Inherited: 0x230)
struct UHUD_Defend_Event_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderActive_01; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderActive_02; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderActive_03; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderActive_04; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderInactive_01; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderInactive_02; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderInactive_03; 
	UPROPERTY(BlueprintReadWrite) UImage* DefenderInactive_04; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* DefenseProgress; 
	UPROPERTY(BlueprintReadWrite) UHUD_DefaultLabel_C* Failure; 
	UPROPERTY(BlueprintReadWrite) UHUD_DefaultLabel_C* Header; 
	UPROPERTY(BlueprintReadWrite) URetainerBox* RetainerBox_1; 
	UPROPERTY(BlueprintReadWrite) UHUD_DefaultLabel_C* Sucess_Done; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_Complete; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_Failure; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_InProgress; 
	UPROPERTY(BlueprintReadWrite) AEVENT_Defense_Base_C* Event; 
	UPROPERTY(BlueprintReadWrite) FLinearColor ProgressColor; 
	UPROPERTY(BlueprintReadWrite) FText HeaderText; 
	UPROPERTY(BlueprintReadWrite) TArray<UImage*> DefenderBlocks; 
	UPROPERTY(BlueprintReadWrite) FLinearColor NoDefenderColor; 
	UPROPERTY(BlueprintReadWrite) FLinearColor HasDefenderColor; 
	UPROPERTY(BlueprintReadWrite) FText SuccesText; 
	UPROPERTY(BlueprintReadWrite) FText FailureText; 

	UFUNCTION(BlueprintCallable) void UpdateDefenderBlocks(int32_t DefenderCount);
	UFUNCTION(BlueprintCallable) void AddDefendersToArray();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ProgressUpdated(float NewProgress);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void success();
	UFUNCTION(BlueprintCallable) void Defenders Updated(int32_t DefenderCount);
	UFUNCTION(BlueprintCallable) void Failed();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_Defend_Event(int32_t EntryPoint);
};

