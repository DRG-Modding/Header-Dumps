// WidgetBlueprintGeneratedClass AnimatedDRGlogo.AnimatedDRGlogo_C
// Size: 0x268 (Inherited: 0x230)
struct UAnimatedDRGlogo_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Flash4; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Flash3; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Flash2; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Flash1; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Idle; 
	UPROPERTY(BlueprintReadWrite) UImage* Logo; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AnimatedDRGlogo(int32_t EntryPoint);
};

