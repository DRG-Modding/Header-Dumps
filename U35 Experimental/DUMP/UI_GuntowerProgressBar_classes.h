// WidgetBlueprintGeneratedClass UI_GuntowerProgressBar.UI_GuntowerProgressBar_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_GuntowerProgressBar_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Activated; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* StartUp; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* AnalysingText; 
	UPROPERTY(BlueprintReadWrite) UImage* BaseElementBG; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* CanvasPanel_1; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* FinishedText; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_3; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_4; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* ModulesDisplayRight; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_2; 
	UPROPERTY(BlueprintReadWrite) UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_1; 
	UPROPERTY(BlueprintReadWrite) UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_2; 
	UPROPERTY(BlueprintReadWrite) UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_3; 
	UPROPERTY(BlueprintReadWrite) AGuntowerActivationPlatform* ActivationPlatform; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle VisibleTimer; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* NewVar_1; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void SetStarterPlatform(AGuntowerActivationPlatform* Starterplatform);
	UFUNCTION(BlueprintCallable) void OnProgress(float Progress);
	UFUNCTION(BlueprintCallable) void PlayerCountChanged(int32_t playerCount);
	UFUNCTION(BlueprintCallable) void OnFinished();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_GuntowerProgressBar(int32_t EntryPoint);
};

