// BlueprintGeneratedClass RadarPointInterface.RadarPointInterface_C
// Size: 0x28 (Inherited: 0x28)
struct URadarPointInterface_C : UInterface {

	void UpdatePoint(float alpha, float verticalDist, bool destroy);
	void Get3dPosition(FVector Pos);
	void InitPoint(URadarPointComponent* RadarComponent, bool success);
};

