// WidgetBlueprintGeneratedClass HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_RadarPoint_Resupply_C : UUserWidget {
	UImage* Image_1; // 0x230(0x08)
	URadarPointComponent* Component; // 0x238(0x08)
	float TimeoutDelay; // 0x240(0x04)
	float Timeout; // 0x244(0x04)

	void InitPoint(URadarPointComponent* RadarComponent, bool success);
	void Get3dPosition(FVector Pos);
	void UpdatePoint(float alpha, float verticalDist, bool destroy);
};

