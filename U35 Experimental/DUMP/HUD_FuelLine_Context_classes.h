// WidgetBlueprintGeneratedClass HUD_FuelLine_Context.HUD_FuelLine_Context_C
// Size: 0x270 (Inherited: 0x240)
struct UHUD_FuelLine_Context_C : UActorContextWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UUI_AdvancedLabel_C* ContextLabel; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* HealthProgressBar; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* RootCanvas; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* Character; 
	UPROPERTY(BlueprintReadWrite) AFuelLineSegment* FuelLineSegment; 

	UFUNCTION(BlueprintCallable) void UpdateWidget(UPrimitiveComponent* InPrimitive);
	UFUNCTION(BlueprintCallable) void ReceiveContextActorChanged(AActor* InContextActor);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ReceiveUpdate(UPrimitiveComponent* InContextPrimitive);
	UFUNCTION(BlueprintCallable) void ReceiveShow(UPrimitiveComponent* InContextPrimitive);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_FuelLine_Context(int32_t EntryPoint);
};

