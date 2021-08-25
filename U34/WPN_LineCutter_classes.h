// BlueprintGeneratedClass WPN_LineCutter.WPN_LineCutter_C
// Size: 0x714 (Inherited: 0x6b8)
struct AWPN_LineCutter_C : ALineCutter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UFirstPersonWidgetComponent* Widget_TotalAmmo; // 0x6c0(0x08)
	struct UFirstPersonWidgetComponent* Widget_CurrentClip; // 0x6c8(0x08)
	struct UFirstPersonParticleSystemComponent* FP_P_Plasma_Beam_Right; // 0x6d0(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x6d8(0x08)
	struct UPointLightComponent* Line_Light; // 0x6e0(0x08)
	struct UFirstPersonParticleSystemComponent* FP_P_Plasma_Beam; // 0x6e8(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6f0(0x08)
	struct UProjectileLauncherComponent* ProjectileLauncher; // 0x6f8(0x08)
	float Flicker_Brightness_Intensity_E04C79F0493C5086E3B612961CA53D93; // 0x700(0x04)
	char Flicker_Brightness__Direction_E04C79F0493C5086E3B612961CA53D93; // 0x704(0x01)
	char UnknownData_705[0x3]; // 0x705(0x03)
	struct UTimelineComponent* Flicker Brightness; // 0x708(0x08)
	float DamageFrequency; // 0x710(0x04)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript
	void Flicker Brightness__FinishedFunc(); // Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc
	void Flicker Brightness__UpdateFunc(); // Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc
	void ReceiveBeginPlay(); // Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay
	void OnFireWhileLastProjectileAlive(struct ALineCutterProjectile* Projectile); // Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive
	void ExecuteUbergraph_WPN_LineCutter(int32_t EntryPoint); // Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter
};

