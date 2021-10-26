// BlueprintGeneratedClass DE_DiscoLight.DE_DiscoLight_C
// Size: 0xf9 (Inherited: 0xc0)
struct UDE_DiscoLight_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)
	APointLight* Light; // 0xd0(0x08)
	UCurveLinearColor* LightColorCurve; // 0xd8(0x08)
	float TimeSinceStart; // 0xe0(0x04)
	float curvelength; // 0xe4(0x04)
	UAudioComponent* MusicPlayer; // 0xe8(0x08)
	UParticleSystemComponent* StarburstParticles; // 0xf0(0x08)
	bool EnabledEffect; // 0xf8(0x01)

	void OnRep_Light();
	void OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void Set Light();
	void ExecuteUbergraph_DE_DiscoLight(int32_t EntryPoint);
};

