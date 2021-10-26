// WidgetBlueprintGeneratedClass Widget_UseButton_Monitor.Widget_UseButton_Monitor_C
// Size: 0x268 (Inherited: 0x230)
struct UWidget_UseButton_Monitor_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimMinimizeProgress; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimArrow; 
	UPROPERTY(BlueprintReadWrite) UUI_ImageTinted_C* Img_Arrow; 
	UPROPERTY(BlueprintReadWrite) UUI_GenericLabel_C* Txt_Progress; 
	UPROPERTY(BlueprintReadWrite) UUI_GenericLabel_C* Txt_Status; 
	UPROPERTY(BlueprintReadWrite) AFSDRefinery* Refinery; 

	UFUNCTION(BlueprintCallable) bool IsDeepDive();
	UFUNCTION(BlueprintCallable) void OnStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void OnRefineryProgressChanged(float InProgress01);
	UFUNCTION(BlueprintCallable) void OnCanStartRefineryChanged(bool canUse);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Widget_UseButton_Monitor(int32_t EntryPoint);
};

