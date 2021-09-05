// BlueprintGeneratedClass BP_AudioControl.BP_AudioControl_C
// Size: 0x1cc (Inherited: 0xb0)
struct UBP_AudioControl_C : UActorComponent {
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
	bool LowHealthFade; // 0x170(0x01)
	USubmixEffectSubmixEQPreset* LowHealthEq; // 0x178(0x08)
	float DuckingLowHealthAmount; // 0x180(0x04)
	float DuckingDownStateAmount; // 0x184(0x04)
	float DuckingIronWillAmount; // 0x188(0x04)
	bool Off; // 0x18c(0x01)
	bool DownStateFade; // 0x18d(0x01)
	bool IronWillFade; // 0x18e(0x01)
	USubmixEffectSubmixEQPreset* DownStateEq; // 0x190(0x08)
	UAudioComponent* LowHealthIsSpawned; // 0x198(0x08)
	USubmixEffectSubmixEQPreset* IronWillEq; // 0x1a0(0x08)
	APlayerCharacter* PlayerCharacter; // 0x1a8(0x08)
	UPlayerHealthComponent* PlayerHealthComponent; // 0x1b0(0x08)
	USubmixEffectReverbPreset* LowHealthReverb; // 0x1b8(0x08)
	float ReverbLoHealthWetLevel; // 0x1c0(0x04)
	float ReverbLoHealthDryLevel; // 0x1c4(0x04)
	float ReverbLoHealthGain; // 0x1c8(0x04)

	void DoFadeIronWill(bool ShouldFade);
	void DoFadeDownState(bool DoFade);
	void DoFadeLowHealth(bool ShouldFade);
	void HealthAudio(USubmixEffectSubmixEQPreset* EQPreset, float HealthPercentage);
	bool ShouldSetTimestamp(bool IsActivate);
	void SubmixCompressor(float Volume, USoundSubmix* Master Listen Submix, float Threshold, float Attack, float Release, TArray<FCompressorData> CompressorData);
	void SubmixDucking(USoundSubmix* ListenSubmix, int32_t ListenAttack Max 200, int32_t ListenRelease Max 1000, float ListenDuckMultiply, USubmixEffectSubmixEQPreset* TargetDuckingEQ, bool Multiply Value Print, UCurveFloat* DuckingCurve, UCurveFloat* AttackCurve, UCurveFloat* ReleaseCurve, float ListenArrayElement);
	void ReceiveTick(float DeltaSeconds);
	void DamageTaken(float amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AudioControl(int32_t EntryPoint);
};

