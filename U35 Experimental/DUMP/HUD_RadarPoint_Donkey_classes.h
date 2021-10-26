// WidgetBlueprintGeneratedClass HUD_RadarPoint_Donkey.HUD_RadarPoint_Donkey_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_RadarPoint_Donkey_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) UImage* MarkerImage; 
	UPROPERTY(BlueprintReadWrite) URadarPointComponent* Component; 
	UPROPERTY(BlueprintReadWrite) float TimeoutDelay; 
	UPROPERTY(BlueprintReadWrite) float Timeout; 

	UFUNCTION(BlueprintCallable) void InitPoint(URadarPointComponent* RadarComponent, bool success);
	UFUNCTION(BlueprintCallable) void Get3dPosition(FVector Pos);
	UFUNCTION(BlueprintCallable) void UpdatePoint(float alpha, float verticalDist, bool destroy);
};

