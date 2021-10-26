// BlueprintGeneratedClass WPN_LineCutter.WPN_LineCutter_C
// Size: 0x75c (Inherited: 0x700)
struct AWPN_LineCutter_C : ALineCutter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	UFirstPersonWidgetComponent* Widget_TotalAmmo; // 0x708(0x08)
	UFirstPersonWidgetComponent* Widget_CurrentClip; // 0x710(0x08)
	UFirstPersonParticleSystemComponent* FP_P_Plasma_Beam_Right; // 0x718(0x08)
	UPointLightComponent* MuzzleLight; // 0x720(0x08)
	UPointLightComponent* Line_Light; // 0x728(0x08)
	UFirstPersonParticleSystemComponent* FP_P_Plasma_Beam; // 0x730(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x738(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x740(0x08)
	float Flicker_Brightness_Intensity_E04C79F0493C5086E3B612961CA53D93; // 0x748(0x04)
	enum class ETimelineDirection Flicker_Brightness__Direction_E04C79F0493C5086E3B612961CA53D93; // 0x74c(0x01)
	UTimelineComponent* Flicker Brightness; // 0x750(0x08)
	float DamageFrequency; // 0x758(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void Flicker Brightness__FinishedFunc();
	void Flicker Brightness__UpdateFunc();
	void ReceiveBeginPlay();
	void OnFireWhileLastProjectileAlive(ALineCutterProjectile* Projectile);
	void ExecuteUbergraph_WPN_LineCutter(int32_t EntryPoint);
};

