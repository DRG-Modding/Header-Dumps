// WidgetBlueprintGeneratedClass HUD_RadarPoint_Player.HUD_RadarPoint_Player_C
// Size: 0x241 (Inherited: 0x230)
struct UHUD_RadarPoint_Player_C : UUserWidget {
	UImage* Image_1; // 0x230(0x08)
	APlayerCharacter* Player; // 0x238(0x08)
	bool MarkedForDestruction; // 0x240(0x01)

	void InitPoint(URadarPointComponent* RadarComponent, bool success);
	void Get3dPosition(FVector Pos);
	void UpdatePoint(float alpha, float verticalDist, bool destroy);
	void Deactivate();
};

