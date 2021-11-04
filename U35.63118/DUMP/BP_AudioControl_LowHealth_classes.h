// BlueprintGeneratedClass BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C
// Size: 0x208 (Inherited: 0xb0)
struct UBP_AudioControl_LowHealth_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	USoundSubmix* ExplosionsSubmix; // 0xb8(0x08)
	USoundSubmix* WeaponFireSubmix; // 0xc0(0x08)
	float CurrentAttack; // 0xc8(0x04)
	float CurrentRelease; // 0xcc(0x04)
	bool wasAbove; // 0xd0(0x01)
	FRuntimeFloatCurve Blend; // 0xd8(0x88)
	float BlendProgress; // 0x160(0x04)
	float DuckingPower; // 0x164(0x04)
	UAudioComponent* IronWillIsSpawned; // 0x168(0x08)
	USubmixEffectSubmixEQPreset* LowHealthEq; // 0x170(0x08)
	float MufflingLowHealthAmount; // 0x178(0x04)
	float DuckingDownStateAmount; // 0x17c(0x04)
	float DuckingIronWillAmount; // 0x180(0x04)
	bool Off; // 0x184(0x01)
	UAudioComponent* Health_Low_Cue; // 0x188(0x08)
	APlayerCharacter* PlayerCharacter; // 0x190(0x08)
	UPlayerHealthComponent* PlayerHealthComponent; // 0x198(0x08)
	USubmixEffectReverbPreset* LowHealthReverb; // 0x1a0(0x08)
	float ReverbLoHealthWetLevel; // 0x1a8(0x04)
	float ReverbLoHealthDryLevel; // 0x1ac(0x04)
	float ReverbLoHealthGain; // 0x1b0(0x04)
	UPlayerTemperatureComponent* PlayerTemperatureComponent; // 0x1b8(0x08)
	bool LowTemperatureFade; // 0x1c0(0x01)
	UCurveFloat* FadeInCurve; // 0x1c8(0x08)
	float FadeTimeLeft; // 0x1d0(0x04)
	float FadeInTime; // 0x1d4(0x04)
	float alpha; // 0x1d8(0x04)
	bool IsFadingIn; // 0x1dc(0x01)
	float FadeOutTime; // 0x1e0(0x04)
	bool prevIsLowHealth; // 0x1e4(0x01)
	float HealthChange; // 0x1e8(0x04)
	bool IsLowHealthOn; // 0x1ec(0x01)
	float VeryColdThreshold; // 0x1f0(0x04)
	float ColdThreshold; // 0x1f4(0x04)
	UAudioComponent* Temperature_Low_Cue; // 0x1f8(0x08)
	UAudioComponent* Temperature_VeryLow_Cue; // 0x200(0x08)

	void HealthAudio(USubmixEffectSubmixEQPreset* EQPreset, float HealthPercentage);
	bool ShouldSetTimestamp(bool IsActivate);
	void SubmixCompressor(float Volume, USoundSubmix* Master Listen Submix, float Threshold, float Attack, float Release, TArray<FCompressorData> CompressorData);
	void SubmixDucking(USoundSubmix* ListenSubmix, int32_t ListenAttack Max 200, int32_t ListenRelease Max 1000, float ListenDuckMultiply, USubmixEffectSubmixEQPreset* TargetDuckingEQ, bool Multiply Value Print, UCurveFloat* DuckingCurve, UCurveFloat* AttackCurve, UCurveFloat* ReleaseCurve, float ListenArrayElement);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HealthChanged(float Amount);
	void FadeInLowHealth();
	void FadeOutLowHealth();
	void HandleHeartbeat(bool TurnOn);
	void HandleLowHealthMuffling(bool TurnOn);
	void OnTemperatureChanged_Event(float Temperature, float Change);
	void ResetVeryLowCue();
	void ResetLowCue();
	void ExecuteUbergraph_BP_AudioControl_LowHealth(int32_t EntryPoint);
};

