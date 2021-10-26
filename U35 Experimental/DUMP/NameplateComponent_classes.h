// BlueprintGeneratedClass NameplateComponent.NameplateComponent_C
// Size: 0x560 (Inherited: 0x540)
struct UNameplateComponent_C : UWidgetComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) AActor* View Target; 
	UPROPERTY(BlueprintReadWrite) FString ViewerName; 

	UFUNCTION(BlueprintCallable) void Setup Nameplate(FText Text, FLinearColor Text Color, AActor* Look at Target);
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_NameplateComponent(int32_t EntryPoint);
};

