// WidgetBlueprintGeneratedClass HUD_RefineryUsebutton.HUD_RefineryUseButton_C
// Size: 0x260 (Inherited: 0x238)
struct UHUD_RefineryUseButton_C : UFSDInWorldWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimDownArrow; 
	UPROPERTY(BlueprintReadWrite) UUI_ImageTinted_C* IMG_DownArrow; 
	UPROPERTY(BlueprintReadWrite) UImage* Img_Icon; 
	UPROPERTY(BlueprintReadWrite) AFSDRefinery* Refinery; 

	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void SetRefinery(AFSDRefinery* InRefinery);
	UFUNCTION(BlueprintCallable) void OnCanStartRefineryChanged(bool canUse);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_RefineryUseButton(int32_t EntryPoint);
};

