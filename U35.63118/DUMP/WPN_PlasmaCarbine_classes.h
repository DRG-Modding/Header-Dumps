// BlueprintGeneratedClass WPN_PlasmaCarbine.WPN_PlasmaCarbine_C
// Size: 0x7ac (Inherited: 0x738)
struct AWPN_PlasmaCarbine_C : APlasmaCarbine {
	FPointerToUberGraphFrame UberGraphFrame; // 0x738(0x08)
	UHeatMaterialComponent* HeatMaterial; // 0x740(0x08)
	UDamageComponent* AoEDamageComponent; // 0x748(0x08)
	UAudioComponent* OverHeatSound; // 0x750(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget_Ammo; // 0x758(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x760(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x768(0x08)
	float Overheat_Ammo_Regen_Effect_6788C26846C5EA00DB58E08FBF311673; // 0x770(0x04)
	enum class ETimelineDirection Overheat_Ammo_Regen__Direction_6788C26846C5EA00DB58E08FBF311673; // 0x774(0x01)
	UTimelineComponent* Overheat Ammo Regen; // 0x778(0x08)
	float OverHeat; // 0x780(0x04)
	bool HasOverheated; // 0x784(0x01)
	bool RegenAmmoOnOverheat; // 0x785(0x01)
	bool AoeOnOverheat; // 0x786(0x01)
	float AmmoResupplyProgress; // 0x788(0x04)
	bool SpeedBoostOnOverheat; // 0x78c(0x01)
	UStatusEffect* SpeedBoostOnOverheatSTE; // 0x790(0x08)
	float OverheatAoEMaxDMG; // 0x798(0x04)
	float OverheatAoEDamageRadius; // 0x79c(0x04)
	float OldRoF; // 0x7a0(0x04)
	bool TermalFeedbackLoop; // 0x7a4(0x01)
	float HeatAtRegenTrigger; // 0x7a8(0x04)

	void GetAmmoWidget(UWeaponDisplay_PlasmaCarbine_AmmoCounter_C* AsWeapon Display Plasma Carbine Ammo Counter);
	void SetUpgradesAndOverclocks(UItemUpgrade* ItemUpgrade);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void Overheat Ammo Regen__FinishedFunc();
	void Overheat Ammo Regen__UpdateFunc();
	void ReceiveBeginPlay();
	void CustomEvent1(UItemUpgrade* Event);
	void OnTemperatureChanged(float Temperature, bool Overheated);
	void Receive_IsFiringChanged(bool NewValue);
	void Receive_Overheated();
	void RecieveStartUsing();
	void Server Trigger Aoe();
	void Trigger Aoe Effects();
	void ServerPushSpeedBoost();
	void OnSkinChanged(USkinEffect* Skin);
	void ExecuteUbergraph_WPN_PlasmaCarbine(int32_t EntryPoint);
};

