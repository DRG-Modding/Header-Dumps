// BlueprintGeneratedClass ModBaseV2.ModBaseV2_C
// Size: 0x2b0 (Inherited: 0x220)
struct AModBaseV2_C : AActor {
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FString ModName; 
	UPROPERTY(BlueprintReadWrite) FString ModVersion; 
	UPROPERTY(BlueprintReadWrite) FString ModAuthor; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnStart; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnStop; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnInitialise; 
	UPROPERTY(BlueprintReadWrite) UWidget* ModUI; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnUIOpened; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnUIClosed; 

	UFUNCTION(BlueprintCallable) void OnUIClosed__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnUIOpened__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnInitialise__DelegateSignature(APlayerController* LocalPlayer);
	UFUNCTION(BlueprintCallable) void OnStop__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnStart__DelegateSignature();
};

