// WidgetBlueprintGeneratedClass HUD_GameEvent_Generic.HUD_GameEvent_Generic_C
// Size: 0x288 (Inherited: 0x230)
struct UHUD_GameEvent_Generic_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* Canvas; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DATA_Header; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DATA_Objective; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DATA_ObjectiveCounter; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DATA_Timer; 
	UPROPERTY(BlueprintReadWrite) UHorizontalBox* ObjectiveHolder; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_InProgress; 
	UPROPERTY(BlueprintReadWrite) AGameEvent* GameEvent; 

	UFUNCTION(BlueprintCallable) void RegisterGameEvent(AGameEvent* GameEvent);
	UFUNCTION(BlueprintCallable) void UpdateTime(float CurrentProgress);
	UFUNCTION(BlueprintCallable) void ShutDown();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ProgressChanged(float CurrentProgress);
	UFUNCTION(BlueprintCallable) void NumberObjectivesChanged(int32_t stageCompleted);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_GameEvent_Generic(int32_t EntryPoint);
};

