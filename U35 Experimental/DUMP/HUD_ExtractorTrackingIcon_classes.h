// WidgetBlueprintGeneratedClass HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C
// Size: 0x2c0 (Inherited: 0x278)
struct UHUD_ExtractorTrackingIcon_C : UActorTrackingWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Shots Fired; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* AmmoProgress; 
	UPROPERTY(BlueprintReadWrite) UImage* Arrow; 
	UPROPERTY(BlueprintReadWrite) UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; 
	UPROPERTY(BlueprintReadWrite) UImage* DataImage; 
	UPROPERTY(BlueprintReadWrite) UHUD_DefaultLabel_C* Distance; 
	UPROPERTY(BlueprintReadWrite) float ArrowRotation; 
	UPROPERTY(BlueprintReadWrite) float ArrowRadius; 
	UPROPERTY(BlueprintReadWrite) float ArrowAngle; 
	UPROPERTY(BlueprintReadWrite) float MaxCapacity; 

	UFUNCTION(BlueprintCallable) void SetInfo(FText InText, UTexture2D* Texture);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void UpdateArrow(bool inView, float Angle);
	UFUNCTION(BlueprintCallable) void OnShow();
	UFUNCTION(BlueprintCallable) void OnInViewChanged(bool inView, float Angle);
	UFUNCTION(BlueprintCallable) void OnTargetSet(AActor* NewTarget);
	UFUNCTION(BlueprintCallable) void OnTargetDistanceChanged(float Distance);
	UFUNCTION(BlueprintCallable) void OnCurrentLoadChangedEvent(float FloatValue);
	UFUNCTION(BlueprintCallable) void LoadChanged(float CurrentLoad);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_ExtractorTrackingIcon(int32_t EntryPoint);
};

