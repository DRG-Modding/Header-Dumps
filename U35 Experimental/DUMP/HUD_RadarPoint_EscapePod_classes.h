// WidgetBlueprintGeneratedClass HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_RadarPoint_EscapePod_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) UImage* Image_1; 
	UPROPERTY(BlueprintReadWrite) URadarPointComponent* Component; 
	UPROPERTY(BlueprintReadWrite) float TimeoutDelay; 
	UPROPERTY(BlueprintReadWrite) float Timeout; 

	UFUNCTION(BlueprintCallable) void InitPoint(URadarPointComponent* RadarComponent, bool success);
	UFUNCTION(BlueprintCallable) void Get3dPosition(FVector Pos);
	UFUNCTION(BlueprintCallable) void UpdatePoint(float alpha, float verticalDist, bool destroy);
};

