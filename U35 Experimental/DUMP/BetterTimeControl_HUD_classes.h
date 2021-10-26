// WidgetBlueprintGeneratedClass BetterTimeControl_HUD.BetterTimeControl_HUD_C
// Size: 0x250 (Inherited: 0x230)
struct UBetterTimeControl_HUD_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) UTextBlock* BoundKey; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DilationValue; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DilationValueType; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* PlayerControllers; 

	UFUNCTION(BlueprintCallable) void UpdateDilation(float Dilation);
};

