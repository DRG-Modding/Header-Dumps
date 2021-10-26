// WidgetBlueprintGeneratedClass ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C
// Size: 0x370 (Inherited: 0x230)
struct UITM_EscortMuleHealthBar_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* OnHeal; 
	UPROPERTY(BlueprintReadWrite) UImage* DrillDozer_Background; 
	UPROPERTY(BlueprintReadWrite) UImage* DrillDozer_Background_Caterpillar; 
	UPROPERTY(BlueprintReadWrite) UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Left; 
	UPROPERTY(BlueprintReadWrite) UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Middle; 
	UPROPERTY(BlueprintReadWrite) UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Right; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* Left_Health; 
	UPROPERTY(BlueprintReadWrite) UImage* Left_Outline; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* Middle_Health; 
	UPROPERTY(BlueprintReadWrite) UImage* Middle_Outline; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* Right_Health; 
	UPROPERTY(BlueprintReadWrite) UImage* Right_Outline; 
	UPROPERTY(BlueprintReadWrite) UHealthComponent* HealthComponent; 
	UPROPERTY(BlueprintReadWrite) TArray<UProgressBar*> Sections; 
	UPROPERTY(BlueprintReadWrite) TArray<UITM_HealthBarPercentWWarning_C*> PercentTexts; 
	UPROPERTY(BlueprintReadWrite) float FadeStartTime; 
	UPROPERTY(BlueprintReadWrite) float FadeTime; 
	UPROPERTY(BlueprintReadWrite) FLinearColor TargetColor; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* TargetHealthBar; 
	UPROPERTY(BlueprintReadWrite) float FadeAlpha; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve HealthDisplayCurve; 

	UFUNCTION(BlueprintCallable) void SetFadeAlpha(float FadeAlpha);
	UFUNCTION(BlueprintCallable) void SetData(UHealthComponent* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnNewHealthSegment(int32_t currSegment, int32_t prevSegment);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void OnDamageTaken(float amount);
	UFUNCTION(BlueprintCallable) void OnDamageHealed(float amount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ITM_EscortMuleHealthBar(int32_t EntryPoint);
};

