// WidgetBlueprintGeneratedClass HUD_TutorialLevelManager.HUD_TutorialLevelManager_C
// Size: 0x298 (Inherited: 0x278)
struct UHUD_TutorialLevelManager_C : UTutorialLevelWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UW_TutorialContent_Base_C* BP_TutorialContentWidget_Base; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* WidgetHolder; 
	UPROPERTY(BlueprintReadWrite) UTutorialContentWidget* CurrContentWidget; 

	UFUNCTION(BlueprintCallable) void OnNewActiveTutorial(UTutorialContentWidget* Widget);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_TutorialLevelManager(int32_t EntryPoint);
};

