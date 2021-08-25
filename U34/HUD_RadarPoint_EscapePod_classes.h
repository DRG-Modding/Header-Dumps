// WidgetBlueprintGeneratedClass HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_RadarPoint_EscapePod_C : UUserWidget {
	struct UImage* Image_1; // 0x230(0x08)
	struct URadarPointComponent* Component; // 0x238(0x08)
	float TimeoutDelay; // 0x240(0x04)
	float Timeout; // 0x244(0x04)

	void InitPoint(struct URadarPointComponent* RadarComponent, bool success); // Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.InitPoint
	void Get3dPosition(struct FVector Pos); // Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.Get3dPosition
	void UpdatePoint(float alpha, float verticalDist, bool destroy); // Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.UpdatePoint
};

