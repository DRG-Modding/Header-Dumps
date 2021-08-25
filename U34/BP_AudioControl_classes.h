// BlueprintGeneratedClass BP_AudioControl.BP_AudioControl_C
// Size: 0x1cc (Inherited: 0xb0)
struct UBP_AudioControl_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USoundSubmix* ExplosionsSubmix; // 0xb8(0x08)
	struct USoundSubmix* WeaponFireSubmix; // 0xc0(0x08)
	float CurrentAttack; // 0xc8(0x04)
	float CurrentRelease; // 0xcc(0x04)
	bool wasAbove; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct FRuntimeFloatCurve Blend; // 0xd8(0x88)
	float BlendProgress; // 0x160(0x04)
	float DuckingPower; // 0x164(0x04)
	struct UAudioComponent* IronWillIsSpawned; // 0x168(0x08)
	bool LowHealthFade; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
	struct USubmixEffectSubmixEQPreset* LowHealthEq; // 0x178(0x08)
	float DuckingLowHealthAmount; // 0x180(0x04)
	float DuckingDownStateAmount; // 0x184(0x04)
	float DuckingIronWillAmount; // 0x188(0x04)
	bool Off; // 0x18c(0x01)
	bool DownStateFade; // 0x18d(0x01)
	bool IronWillFade; // 0x18e(0x01)
	char UnknownData_18F[0x1]; // 0x18f(0x01)
	struct USubmixEffectSubmixEQPreset* DownStateEq; // 0x190(0x08)
	struct UAudioComponent* LowHealthIsSpawned; // 0x198(0x08)
	struct USubmixEffectSubmixEQPreset* IronWillEq; // 0x1a0(0x08)
	struct APlayerCharacter* PlayerCharacter; // 0x1a8(0x08)
	struct UPlayerHealthComponent* PlayerHealthComponent; // 0x1b0(0x08)
	struct USubmixEffectReverbPreset* LowHealthReverb; // 0x1b8(0x08)
	float ReverbLoHealthWetLevel; // 0x1c0(0x04)
	float ReverbLoHealthDryLevel; // 0x1c4(0x04)
	float ReverbLoHealthGain; // 0x1c8(0x04)

	void DoFadeIronWill(bool ShouldFade); // Function BP_AudioControl.BP_AudioControl_C.DoFadeIronWill
	void DoFadeDownState(bool DoFade); // Function BP_AudioControl.BP_AudioControl_C.DoFadeDownState
	void DoFadeLowHealth(bool ShouldFade); // Function BP_AudioControl.BP_AudioControl_C.DoFadeLowHealth
	void HealthAudio(struct USubmixEffectSubmixEQPreset* EQPreset, float HealthPercentage); // Function BP_AudioControl.BP_AudioControl_C.HealthAudio
	bool ShouldSetTimestamp(bool IsActivate); // Function BP_AudioControl.BP_AudioControl_C.ShouldSetTimestamp
	void SubmixCompressor(float Volume, struct USoundSubmix* Master Listen Submix, float Threshold, float Attack, float Release, struct TArray<struct FCompressorData> CompressorData); // Function BP_AudioControl.BP_AudioControl_C.SubmixCompressor
	void SubmixDucking(struct USoundSubmix* ListenSubmix, int32_t ListenAttack Max 200, int32_t ListenRelease Max 1000, float ListenDuckMultiply, struct USubmixEffectSubmixEQPreset* TargetDuckingEQ, bool Multiply Value Print, struct UCurveFloat* DuckingCurve, struct UCurveFloat* AttackCurve, struct UCurveFloat* ReleaseCurve, float ListenArrayElement); // Function BP_AudioControl.BP_AudioControl_C.SubmixDucking
	void ReceiveTick(float DeltaSeconds); // Function BP_AudioControl.BP_AudioControl_C.ReceiveTick
	void DamageTaken(float amount); // Function BP_AudioControl.BP_AudioControl_C.DamageTaken
	void ReceiveBeginPlay(); // Function BP_AudioControl.BP_AudioControl_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_AudioControl(int32_t EntryPoint); // Function BP_AudioControl.BP_AudioControl_C.ExecuteUbergraph_BP_AudioControl
};

