// WidgetBlueprintGeneratedClass UI_StartScreen.UI_StartScreen_C
// Size: 0x2a8 (Inherited: 0x230)
struct UUI_StartScreen_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FadeIn; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FadeOut; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* BlinkText; 
	UPROPERTY(BlueprintReadWrite) UAnimatedDRGlogo_C* AnimatedDRGlogo; 
	UPROPERTY(BlueprintReadWrite) UAnimatedStaticOverlay_C* AnimatedStaticOverlay; 
	UPROPERTY(BlueprintReadWrite) UImage* FadeOverlay; 
	UPROPERTY(BlueprintReadWrite) UImage* GhostShipLogo; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_8; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_64; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_73; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Background; 
	UPROPERTY(BlueprintReadWrite) UCircularThrobber* LogginInThrobber; 
	UPROPERTY(BlueprintReadWrite) UUI_AdvancedLabel_C* PressStartLabel; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* VersionInfo; 

	UFUNCTION(BlueprintCallable) void FadeIt(bool FadeIn, float Duration);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void PressStart();
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_StartScreen(int32_t EntryPoint);
};

