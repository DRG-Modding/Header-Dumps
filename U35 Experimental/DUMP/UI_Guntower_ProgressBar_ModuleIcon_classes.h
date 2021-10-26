// WidgetBlueprintGeneratedClass UI_Guntower_ProgressBar_ModuleIcon.UI_Guntower_ProgressBar_ModuleIcon_C
// Size: 0x251 (Inherited: 0x230)
struct UUI_Guntower_ProgressBar_ModuleIcon_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FlashActive; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FlashGreen; 
	UPROPERTY(BlueprintReadWrite) UImage* Icon; 
	UPROPERTY(BlueprintReadWrite) bool Active; 

	UFUNCTION(BlueprintCallable) void SetAccessGranted(bool IsAccessGranted);
	UFUNCTION(BlueprintCallable) void SetActive(bool IsActive);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_Guntower_ProgressBar_ModuleIcon(int32_t EntryPoint);
};

